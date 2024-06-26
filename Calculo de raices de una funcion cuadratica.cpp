#include<bits/stdc++.h>
#include<cmath>

using namespace std;

const double NO_REAL_ROOT = numeric_limits<double>::quiet_NaN();

double calcular_raices1(int a, int b, int c)
{
    double discriminante = (b * b) - (4 * a * c);
    if (discriminante >= 0)
    {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        return x1;
    }
    return NO_REAL_ROOT;
}

double calcular_raices2(int a, int b, int c)
{
    double discriminante = (b * b) - (4 * a * c);
    if (discriminante >= 0)
    {
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        return x2;
    }
    return NO_REAL_ROOT;
}

int main()
{
    int a, b, c;
    double x1, x2;
    cout << "Ingrese el valor de a: "; cin >> a;
    cout << "Ingrese el valor de b: "; cin >> b;
    cout << "Ingrese el valor de c: "; cin >> c;

    x1 = calcular_raices1(a, b, c);
    x2 = calcular_raices2(a, b, c);

    if (isnan(x1) || isnan(x2))
    {
        double parte_real = -b / (2 * a);
        double parte_imaginaria = sqrt(-1 * ((b * b) - (4 * a * c))) / (2 * a);
        cout << "x1: " << parte_real << " + " << parte_imaginaria << " i " << endl;
        cout << "x2: " << parte_real << " - " << parte_imaginaria << " i " << endl;
    }
    else
    {
        cout << "x1: " << x1 << endl;
        cout << "x2: " << x2 << endl;
    }

    return 0;
}

