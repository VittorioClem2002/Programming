#include<iostream>
#include<bits/Lib/Pila/Pila.h>

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
    cout<<"La lista final:"<<endl;
    bool flag=true;
    int valor1;
    while(!serie1.esVacia()){
        int valor=serie1.pop();
        while(valor==s && flag==true){
            flag=false;
            valor1=serie1.pop();
            if(valor1==s){
                flag=true;
            }
            else{
                serie.push(valor);
                cout<<valor<<endl;
            }
        }
        if(valor!=valor1){
            serie.push(valor);
            cout<<valor<<endl;
        }
    }

}

int main (){
    Pila <int> serie, serie1;
    int n,s, r;
    cout<<"Ingrese una serie de números enteros y finalice ingresando 0"<<endl;
    carga(serie);
    cout<<"Su lista: "<<endl;
    while(!serie.esVacia()){
        n=serie.pop();
        cout<<n<<" , ";
        serie1.push(n);
    }
    cout<<"Ingrese el primer término que desea eliminar: ";
    cin>>s;
    buscar(serie,serie1,s);
}
