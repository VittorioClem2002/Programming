#include<iostream>
#include<bits/Lista/Lista.h>

using namespace std;

void cargar(Lista<int>&lista1, Lista<int>&lista2, int x, int y){
    int i,n;
    for(i=0;i<x;i++){
        cout<<"ingrese el valor de la lista1 en ["<<i+1<<"]<-";
        cin>>n;
        lista1.insertarUltimo(n);
    }
    for(i=0;i<y;i++){
        cout<<"ingrese el valor de la lista2 en ["<<i+1<<"]<-";
        cin>>n;
        lista2.insertarUltimo(n);
    }
}

void order(Lista<int>&lista1, Lista<int>&lista2){
    Lista<int>listaux;
    int i;
    for(i=0;i<lista1.getTamanio();i++){
        listaux.insertarUltimo(lista1.getDato(i));
    }
    lista1.vaciar();
    for(i=0;i<lista2.getTamanio();i++){
        lista1.insertarUltimo(lista2.getDato(i));
    }
    lista2.vaciar();
    for(i=0;i<listaux.getTamanio();i++){
        lista2.insertarUltimo(listaux.getDato(i));
    }
}

int main(){

    Lista<int>lista1;
    Lista<int>lista2;

    int x,y,i;

    cout<<"Ingrese la longitud de la lista 1: ";
    cin>>x;
    cout<<"Ingrese la longitud de la lista 2: ";
    cin>>y;

    cargar(lista1,lista2,x,y);
    cout<<"Valores de la lista 1:"<<endl;
    for(i=0;i<x;i++){
        cout<<"->"<<lista1.getDato(i);
    }
    cout<<"\nValores de la lista 2:"<<endl;
    for(i=0;i<y;i++){
        cout<<"->"<<lista2.getDato(i);
    }

    order(lista1,lista2);

    cout<<"\nValores de la listas intercambiadas:"<<endl;
    cout<<"Lista 1:"<<endl;
    for(i=0;i<lista1.getTamanio();i++){
        cout<<"->"<<lista1.getDato(i);
    }
    cout<<endl;
    cout<<"Lista 2:"<<endl;
    for(i=0;i<lista2.getTamanio();i++){
        cout<<"->"<<lista2.getDato(i);
    } 


}

