#include <iostream>

using namespace std;

int main()
{
    float l1, l2, total, pi = 3.1416;
    int opc;
    cout<<"Bienvenido al calculador de areas, digita el numero segun la opcion que desees calcular."<<endl;
    cout<<"1. Cuadrado\n2. Circulo\nOpcion: "; cin>>opc;
    switch(opc){
        case 1:
            cout<<"Dime el lado 1: "; cin>>l1;
            cout<<"Dime el lado 2: "; cin>>l2;
            total=l1*l2;
            cout<<"El area de tu cuadrado es: "<<total;
            break;
        case 2:
            cout<<"Dime el radio de tu circulo: "; cin>>l1;
            total = l1*l1 * pi;
            cout<<"El area de tu circulo es: "<<total;
            break;
        default: cout << "Usted ha ingresado una opción incorrecta";
    }

    return 0;
}

