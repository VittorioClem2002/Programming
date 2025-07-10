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

void buscar(Pila <int> &serie, Pila <int> &serie1, int s){
    cout<<"La suma:"<<endl;
    bool flag=true;
    int valor=0, n;
    while(!serie.esVacia() && flag==true){
        n=serie.pop();
        if(n!=s){
            serie1.push(n);
            valor+=n;
        }
        else{
            flag=false;
        }
    }
    cout<<valor<<endl;
}

int main (){
    Pila <int> serie, serie1;
    int n,s, r;
    cout<<"Ingrese una serie de números enteros y finalice ingresando 0"<<endl;
    carga(serie);
    cout<<"Su lista: "<<endl;
    while(!serie.esVacia()){
        n=serie.pop();
        cout<<n<<endl;
        serie1.push(n);
    }
    while(!serie1.esVacia()){
        n=serie1.pop();
        serie.push(n);
    }
    cout<<"Ingrese un número entero: ";
    cin>>s;
    buscar(serie,serie1,s);
}