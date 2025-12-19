#include <iostream>
#include "Clases.h"

using namespace std;

Mamifero::Mamifero(){}

Mamifero::Mamifero(string _nombre, int _edad){
    nombre=_nombre;
    edad=_edad;
}
string Mamifero::mostrar_nombre(){
    return nombre;
}

int Mamifero::mostrar_edad(){
    return edad;
}

void Mamifero::mostrar_mamifero(){
    cout<<"Se llama "<<mostrar_nombre()<<" y tiene "<<mostrar_edad()<<" años. ";
}

void Mamifero::comer(){
    cout<<"El come... ";
}

Humano::Humano(){}

Humano::Humano(string _nombre, int _edad, long _dni){
    dni=_dni;
}

void Humano::comer(){
    Mamifero::mostrar_mamifero();
    Mamifero::comer();
    cout<<"perros"<<endl;
}

Perro::Perro(){}

Perro::Perro(string _nombre, int edad, string _raza){
    raza=_raza;
}

void Perro::comer(){
    Mamifero::mostrar_mamifero();
    Mamifero::comer();
    cout<<"Dog chow"<<endl;
}


