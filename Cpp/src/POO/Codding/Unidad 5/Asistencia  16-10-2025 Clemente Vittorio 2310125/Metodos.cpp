#include <iostream>
#include "Clases.h"

using namespace std;


empleado::empleado(){}

empleado::empleado(string _nombre, int _sueldo, long _dni){
    nombre=_nombre;
    sueldo=_sueldo;
    dni=_dni;
}

void empleado::mostrar_empleado(){
    cout<<"Nombre: "<<nombre<<"\nDNI: "<<dni<<endl;
}

int empleado::get_sueldo(){
    return sueldo;
}

gerente::gerente(){}

gerente::gerente(string _nombre, int _sueldo, long _dni, string _area):empleado(_nombre,_sueldo,_dni){
    area=_area;
}

void gerente::set_area(string _area){
    area=_area;
}

string gerente::get_area(){
    return area;
}

void gerente::mostrar_empleado(){
    empleado::mostrar_empleado();
    cout<<"Sueldo: "<<get_sueldo()*1.15<<"\nArea: "<<get_area()<<endl;
}

supervisor::supervisor(){}

supervisor::supervisor(string _nombre, int _sueldo, long _dni, string _sector):empleado(_nombre,_sueldo,_dni){
    sector=_sector;
}

void supervisor::set_sector(string _sector){
    sector=_sector;
}

string supervisor::get_sector(){
    return sector;
}

void supervisor::mostrar_empleado(){
    empleado::mostrar_empleado();
    cout<<"Sueldo: "<<get_sueldo()*1.1<<"\nSector: "<<get_sector()<<endl;
}

obrero::obrero(){}

obrero::obrero(string _nombre, int _sueldo, long _dni, string _fabrica):empleado(_nombre,_sueldo,_dni){
    fabrica=_fabrica;
}

void obrero::set_fabrica(string _fabrica){
    fabrica=_fabrica;
}

string obrero::get_frabrica(){
    return fabrica;
}

void obrero::mostrar_empleado(){
    empleado::mostrar_empleado();
    cout<<"Sueldo: "<<get_sueldo()*1.12<<"\nFabrica: "<<get_frabrica()<<endl;
}