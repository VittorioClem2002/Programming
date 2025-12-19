#include<iostream>
#include<bits/Lista/Lista.h>

using namespace std;

void printList(Lista<int>& list, int pos){
    int length = list.getTamanio();

    if(pos>= length ||  pos<0){
        cout<<"La posición "<<pos+1<< " está fuera de rango"<<endl;
        return;
    }

    for(pos;pos<length;pos++){
        cout<<"->"<<list.getDato(pos);
    }
    return;
}

int main(){
    int pos, length, i, n;

    Lista<int>list1;

    cout<<"Ingrese la longitud de su lista: ";
    cin>>length;

    for(i=0;i<length;i++){
        cout<<"Ingrese el valor en la posición n°"<<i+1<<" de la lista: ";
        cin>>n;
        list1.insertarUltimo(n);
    }

    cout<<"Ingrese desde que posición desea imprimir su lista: ";
    cin>>pos;

    printList(list1,(pos-1));
}








