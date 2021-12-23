#include "MyForm.h"
#include <Windows.h>
#include <cmath>
using namespace System;
using namespace System::Windows::Forms;

double m1, M1, a, b, eps, x;
int iterChord, iterDich;

[STAThreadAttribute]

System::Void Project1::MyForm::solButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    converLabel->Text = "";
    iterLabel1->Text = "";
    iterLabel2->Text = ""; 
    solLabel->Text = ""; 
    solLabel1->Text = "";
    
    sol();
    

    return System::Void();
}

void Project1::MyForm::sol() {
    a = Convert::ToDouble(aTextBox->Text);
    b = Convert::ToDouble(bTextBox->Text);
    eps = Convert::ToDouble(epsTextBox->Text);
    double x, x0, y0, X;
    iterChord = 0;
    iterDich = 0;

    //проверка сходимости
    if (check_conver(a, b))
    {
        converLabel->Text = "The graph converges";
        //ищем х0
         if (f(a) * F2(a) > 0) x0 = a;
        else if (f(b) * F2(b) > 0) x0 = b;
        y0 = F(x0); //не изменяется

        //ищем m1 M1
        m1 = 100000000;
        M1 = -10000000;
        accuracy_assess(a, b);
        
        X = chord_method(a, b);        
        iterLabel1->Text += iterChord;
        solLabel->Text += X;

        // метод дихотомии         
        x = dichotomy_method(a, b);
        iterLabel2->Text +=  iterDich;
        solLabel1->Text +=  x;
        
    }
    else converLabel->Text = "The graph does not converge";
       
     
}

System::Void Project1::MyForm::drawButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    double x, y;
    double step = 0.01;
    drawchart->ChartAreas[0]->AxisX->Crossing = 0;
    drawchart->ChartAreas[0]->AxisY->Crossing = 0;
    int beg = -5;
    int end = 5;
    x = beg;
    this->drawchart->Series[0]->Points->Clear();
    while (x <= end) {
        y = f(x);
        this->drawchart->Series[0]->Points->AddXY(x, y);
        x += step;
    }
    return System::Void();
}


//lg(1 + 2x) = 2 - x     1.416
double Project1::MyForm::f(double x) {
    //return (log10(1 + 2 * x) - 2 + x);    
    return x - cos(x);
    //return 3*x + cos(x);
    //return (2 - x - log(x));       //1 и 2    
    //return 2.2 - pow(2, x);     //1 1,5
    //return x + 4 * sin(x) - 2;
    
}

//основной алгоритм
double Project1::MyForm::chord_method(double a, double b/*, double eps*/) {   //a фиксируем ДОДЕЛАТЬ ДЛЯ ФИКС b
    double x0, x1;
    iterChord++; 
    if (fixed_point(a, b/*, double eps*/) == a) {
        x0 = b;
        x1 = x0 - f(x0) / (f(x0) - f(a)) * (x0 - a);
        if ((M1 - m1) / m1 * abs(x1 - x0) > eps)  return (chord_method(a, x1/*, double eps*/));
        else return x1;
    }
    if (fixed_point(a, b/*, double eps*/) == b) {
        x0 = a;
        x1 = x0 - f(x0) / (f(b) - f(x0)) * (b - x0);
        if ((M1 - m1) / m1 * abs(x1 - x0) > eps) return (chord_method(x1, b/*, double eps*/));
        else return x1;
    }
}

// проверка условий сходимости
// f(x0) *f''(x0) > 0, где x0 - подвижная точка
double Project1::MyForm::F(double x/*, double eps*/) {
    return (f(x + eps) - f(x - eps)) / (2 * eps);
}

double Project1::MyForm::F2(double x/*, double eps*/) {
    return (f(x + eps) - 2 * f(x) + f(x - eps)) / (eps * eps);
}

double Project1::MyForm::fixed_point(double a, double b/*, double eps*/) {
    double x = a;
    if (f(a) * F2(a/*, double eps*/) > 0) {
        // cout << "a - fixed point" << '\n';
        return a;
    }
    else if (f(b) * F2(b/*, double eps*/) > 0) {
        // cout << "b - fixed point" << '\n';
        return b;
    }
}


bool  Project1::MyForm::only_root(double a, double b/*, double eps*/) {
    double x;
    int count = 0;
    if (f(a) * f(b) < 0) return true;
    else return false;
}

bool Project1::MyForm::check_the_sign_F(double a, double b/*, double eps*/) {
    double x = a;
    if (F(x/*, double eps*/) < 0) {
        for (x += eps; x <= b; x += eps) {
            if (F(x/*, double eps*/) > 0) return false;
        }
    }
    else {
        for (x += eps; x <= b; x += eps) {
            if (F(x/*, double eps*/) < 0) return false;
        }
    }
    return true;

}

bool Project1::MyForm::check_the_sign_F2(double a, double b/*, double eps*/) {
    double x = a;
    if (F2(x/*, double eps*/) < 0)
        for (x += eps; x <= b; x += eps) {
            if (F2(x/*, double eps*/) > 0) return false;
        }
    else
        for (x += eps; x <= b; x += eps) {
            if (F2(x/*, double eps*/) < 0) return false;
        }
    return true;
}


bool Project1::MyForm::check_conver(double a, double b/*, double eps*/) {

    if ((f(a) * f(b) > 0) || (check_the_sign_F(a, b) == 0) || (check_the_sign_F(a, b) == 0)) return 0;
    else return 1;
}

//оценка точности
void Project1::MyForm::accuracy_assess(double a, double b/*, double eps*/) {
    m1 = abs(F(a/*, double eps*/));
    for (double x = a + eps; x <= b; x += eps) {
        if (F(x/*, double eps*/) < m1) m1 = abs(F(x/*, double eps*/));
    }
    M1 = abs(F(a/*, double eps*/));
    for (double x = a + eps; x <= b; x += eps) {
        if (F(x/*, double eps*/) > M1) M1 = abs(F(x/*, double eps*/));
    }
}

//метод дихотомии
double Project1::MyForm::dichotomy_method(double a, double b/*, double eps*/) {
    double c = (a + b) / 2;
    double x;
    iterDich++;
    if (f(a) * f(c) < 0) {
        x = (c + a) / 2;
        if (abs(f(x)) / m1 > eps) return dichotomy_method(a, c/*, double eps*/);
        else return (c + a) / 2;
    }
    else if (f(b) * f(c) < 0) {
        x = (c + b) / 2;
        if (abs(f(x)) / m1 > eps) return dichotomy_method(c, b/*, double eps*/);
        else return (c + b) / 2;
    }
    // else return c;

}
void main(array<String^ >^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project1::MyForm form;
    Application::Run(% form);

}









