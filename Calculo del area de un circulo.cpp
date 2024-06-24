#include<iostream>
#include<cmath>

using namespace std;

double calcularArea(double radio){
	

	return M_PI * pow(radio, 2);
}

int main() {
	
	double radio, resultado;
	cout << "Ingrese el radio: ";
		
	cin >> radio;
	
	resultado = calcularArea(radio);
	
	cout << "El radio es: " << resultado;
		
	return 0;
}

