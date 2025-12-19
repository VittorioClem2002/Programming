#include <iostream>
#include "clases.h"

using namespace std;


void Animal::set_nombre(string _nombre){
    nombre=_nombre;
}

void Animal::set_edad(int _edad){
    edad=_edad;
}

string Animal::get_nombre(){
    return nombre;
}

int Animal::get_edad(){
    return edad;
}

void Animal::mostrar_animal(){
    cout<<"El animal se llama "<<get_nombre()<<" y tiene una edad de "<<get_edad()<<" años"<<endl;
}

void Perro::set_tamanio(string _tamanio){
    tamanio=_tamanio;
}

void Perro::set_raza(string _raza){
    raza=_raza;
}

string Perro::get_tamanio(){
    return tamanio;
}

string Perro::get_raza(){
    return raza;
}

void Perro::mostrar_perro(){
    mostrar_animal();
    cout<<"Es un perro de tamaño "<<get_tamanio()<<" y raza "<<get_raza()<<endl;
}

void Collar::set_material(string _material){
    material=_material;
}

void Collar::set_diametro(float _diametro){

}

string Collar::get_material(){
    return material;
}

float Collar::get_diametro(){
    return diametro;
}

void Collar::mostrar_collar(){
    mostrar_perro();
    cout<<"El collar es de "<<get_material()<<", con un diametro de: "<<get_diametro<<" cm"<<endl;
}

void Vacuna::set_vacuna(string _vacuna){
    vacuna=_vacuna;
}

void Vacuna::set_fecha(string _fecha){
    fecha=_fecha;
}

void Vacuna::mostrar_vacuna(){
    mostrar_collar();
    cout<<"Y tiene aplicada una vacuna "<<get_vacuna()<<" en el dia: "<<get_fecha<<endl;
}


