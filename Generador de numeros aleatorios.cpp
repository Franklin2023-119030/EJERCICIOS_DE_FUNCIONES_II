#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int cantidad, maximo;
	
	srand(time(0));
	
	cout << "Cantidad de numeros aleatorios: ";
	cin >> cantidad;
	
	cout << "Numero maximo de numero aleatorio: ";
	cin >> maximo;
	
	for(int i = 0; i < cantidad ; i++) {
		cout << rand() % maximo << endl;
	}
	
	return 0;
}
