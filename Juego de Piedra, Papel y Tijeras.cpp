#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int opcionUsuario, opcionComputadora;
    srand(time(0));

    cout << "Piedra = 1" << endl;
    cout << "Papel  = 2" << endl;
    cout << "Tijera = 3" << endl;
    cout << "Elige una opcion: "; 
    cin >> opcionUsuario;
    cout << "************************" << endl;

    opcionComputadora = (rand() % 3) + 1;

    if(opcionUsuario == 1)
    {
        cout << "Piedra";
    }
    else if(opcionUsuario == 2)
    {
        cout << "Papel";
    }
    else
    {
        cout << "Tijera";
    }

    cout << " VS ";

    if(opcionComputadora == 1)
    {
        cout << "Piedra";
    }
    else if(opcionComputadora == 2)
    {
        cout << "Papel";
    }
    else
    {
        cout << "Tijera";
    }

    cout << endl;

    if(opcionUsuario == 2 && opcionComputadora == 1)
    {
        cout << "Ganaste";
    }
    else if(opcionUsuario == 3 && opcionComputadora == 2)
    {
        cout << "Ganaste";
    }
    else if(opcionUsuario == 1 && opcionComputadora == 3)
    {
        cout << "Ganaste";
    }
    else if(opcionUsuario == opcionComputadora)
    {
        cout << "Empate";
    }
    else
    {
        cout << "Perdiste";
    }

    return 0;
}

