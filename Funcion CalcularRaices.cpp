#include<bits/stdc++.h>
using namespace std;

void calcularSoluciones(double coefA, double coefB, double coefC, double& raiz1, double& raiz2, bool& sonSolucionesReales) 
{
    double discriminante = coefB * coefB - 4.0 * coefA * coefC;

    if (discriminante >= 0) 
    {
        sonSolucionesReales = true;
        raiz1 = (-coefB + sqrt(discriminante)) / (2.0 * coefA);
        raiz2 = (-coefB - sqrt(discriminante)) / (2.0 * coefA);
    } 
    else 
    {
        sonSolucionesReales = false;
    }
}

int main() 
{
    double coefA, coefB, coefC, solucion1, solucion2;
    bool sonSolucionesReales;

    cout << "Ingrese coeficiente A: "; cin >> coefA;
    cout << "Ingrese coeficiente B: "; cin >> coefB;
    cout << "Ingrese coeficiente C: "; cin >> coefC;

    calcularSoluciones(coefA, coefB, coefC, solucion1, solucion2, sonSolucionesReales);

    if (sonSolucionesReales) 
    {
        cout << "Solucion 1: " << solucion1 << endl;
        cout << "Solucion 2: " << solucion2 << endl;
    } 
    else 
    {
        cout << "Las soluciones son complejas" << endl;
    }

    return 0;
}

