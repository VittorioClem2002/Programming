//Diseñe un programa que sea capaz de leer dos colas y mediante un mensaje indicar si son 
//iguales. Nota: los elementos constitutivos de las colas son caracteres.


#include <iostream>
#include<bits/Lib/Cola/Cola.h>
using namespace std;

void cargar(Cola <char> &fila1,Cola <char> &fila2){
    char dato;
    fila1.encolar(dato);
    for(int i=0;i<5;i++){
        cout<<"Ingrese el dato de la fila 1 en el lugar ["<<i+1<<"]";
        cin>>dato;
        fila1.encolar(dato);
    }
    for(int i=0;i<5;i++){
        cout<<"Ingrese el dato de la fila 2 en el lugar ["<<i+1<<"]";
        cin>>dato;
        fila2.encolar(dato);
    }    
}

void compare(Cola <char> &fila1,Cola <char> &fila2){
    Cola <char> aux;
    int dato, dato1,counter=0;
    while(!fila1.esVacia()){
        dato=fila1.desencolar();
        dato1=fila2.desencolar();
        if(dato==dato1){
            counter+=1;
            aux.encolar(dato);
            fila2.encolar(dato1);
        }
    }
}

void print(Cola <char> &fila1,Cola <char> &fila2){
    char dato;
    for(int i=0;i<5;i++){
        dato=fila1.desencolar();
        cout<<dato<<endl;
    }
    for(int i=0;i<5;i++){
        dato=fila2.desencolar();
        cout<<dato<<endl;
    }    
}

int main(){
    Cola <char> fila1;
    Cola <char> fila2;
    cargar(fila1,fila2);
    compare(fila1,fila2);
    print(fila1,fila2);

}
