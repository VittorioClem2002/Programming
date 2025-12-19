#include<iostream>
#include<bits/Pila/Pila.h>

using namespace std;

void carga(Pila <int> &serie, int i=0){
    int n;
    cout<<"Ingrese el número en la posición ["<<i+1<<"]<-- ";
    cin>>n;
    if(n==0){
        return;
    }
    else{
        serie.push(n);
        carga(serie,i+1);
    }
}

void busqueda(Pila <int> &serie,Pila <int> &serie1, int s, int r){
    int i;
    while(!serie1.esVacia()){
        i=serie1.pop();
        if(i==s){
            serie.push(r);
        }
        else{
            serie.push(i);
        }
    }
}

int main(){
    Pila <int> serie, serie1;
    int n,s, r;
    cout<<"Ingrese una serie de números enteros y finalice ingresando 0"<<endl;
    carga(serie);
    cout<<"Su lista: ";
    while(!serie.esVacia()){
        n=serie.pop();
        cout<<n<<endl;
        serie1.push(n);
    }
    cout<<"Ingrese un número que desee reemplazar: ";
    cin>>s;
    cout<<"Ahora ingrese por cual desea reemplazar: ";
    cin>>r;
    busqueda(serie,serie1, s, r);
    while(!serie.esVacia()){
        n=serie.pop();
        cout<<n<<endl;
        serie1.push(n);
    }
}