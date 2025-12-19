#include <iostream>

using namespace std;

string TvF(int base, int digito)
{
    int aux=base%10;
    if(base==0){
        return " no se encuentra en el numero ";
    }
    else if(digito==aux){
        return " esta dentro del numero ";
    }
    else{
        return TvF(base/10,digito);
    }
}

int main()
{   int base, digito=0;
    cout << "Ingrese un número: ";
    cin >> base;
    while(base<10){
        cout << "reingrese un número, debe ser mayor a 10: ";
        cin >> base;
    }
    cout << "Ingrese el dígito que desea buscar: ";
    cin >> digito;
    while(digito>10){
        cout << "reingrese un número, debe ser de 1 dígito: ";
        cin >> base;
    }
    cout <<"El digito "<<digito<<TvF(base,digito)<<base<<"\n";

    return 0;
}
