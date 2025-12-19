#include <iostream>
#include "Classes.h"

Autor::Autor(){}

Autor::Autor(long _dni, std::string _nombre){
    autor=_nombre;
    dni=_dni;
}

void Autor::set_nombre(std::string _nombre){
    autor=_nombre;
}

void Autor::set_dni(long _dni){
    dni=_dni;
}

std::string Autor::get_nombre(){
   return autor; 
}

long Autor::get_dni(){
    return dni;
}

void Autor::mostrar(){
    std::cout<<"********** Autor **********"<<std::endl<<std::endl;
    std::cout<<"Nombre del autor: "<<autor;
    std::cout<<"\nDNI: "<<dni;
}

Editorial::Editorial(){}

Editorial::Editorial(std::string _nombre){
    editorial=_nombre;
}

void Editorial::set_nombre(std::string _nombre){
    editorial=_nombre;
}

std::string Editorial::get_nombre(){
    return editorial;
}

void Editorial::mostrar(){
    std::cout<<"*********** Editorial ***********\n";
    std::cout<<"nombre de la editorial: "<<editorial<<std::endl;
}



Libro::Libro(std::string _Libro,std::string _Autor,std::string _Editorial){
    nombre=_Libro;
}

Libro::Libro(Autor a1,Editorial e1){}

