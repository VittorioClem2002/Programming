#include <iostream>

using namespace std;

int mayor(int base[], int l, int maximo){
    if (l==0)
    {
        return maximo;
    }
    else
    {
        if(maximo<base[l]){
            maximo=base[l];
        }
        else if(base[l-1]>base[l]){
            maximo=base[l-1]; 
        }
        mayor(base,(l-1),maximo);
    }
}

void carga(int l,int base[]){

    if(l==0){
        return;
    }
    else{
        cout << "Ingrese los valores del vector base en la posición ["<<l<<"]: ";
        cin >> base[l];
        carga((l-1),base);
    }
}
int main(){
    int n,maximo=0,l;
    cout << "ingrese la longitud de su vector: ";
    cin >> n;
    cout << "el vector tiene: "<<n<<" casillas";
    l=n;
    int base[n];
    carga(l,base);
    cout << "el resultado es: "<<mayor(base,n,maximo);
    return 0;
}

