#include<iostream>
#include<bits/Lib/Pila/Pila.h>

void carga(Pila <char> &palabra, char l, int i=0){
    std::cout<<"Usted está en el caracter ["<<i+1<<"]: ";
    std::cin>>l;
    if(l==46){
        return;
    }
    else{
        palabra.push(l);
        carga(palabra, l, i+1);
    }
}

void imp(Pila <char> &palabra, char l){
    if(palabra.esVacia()==true){
        std::cout<<std::endl;
        return;
    }
    else{
        std::cout<<palabra.pop();
        imp(palabra, l);
    }
}

int main(){
    char l;
    Pila <char> palabra;
    std::cout<<"introduzca una palabra caracter por caracter y finalice con un ."<<std::endl;
    carga(palabra, l);
    std::cout<<"Su palabra invertida: "<<std::endl;
    imp(palabra,l);
}