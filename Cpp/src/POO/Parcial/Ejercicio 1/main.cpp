#include <iostream>
#include "clases.h"

using namespace std;


int main(){
    Animal a1;
    Perro p1;
    Collar c1;
    Vacuna v1;
    string nombre,vacuna,fecha,material,tamanio,raza;
    int edad, op;
    float diametro;

    cout<<"Usuario, ingrese los siguientes datos: "<<endl;

    cout<<"Ingrese el nombre del animal: ";
    cin>>nombre;
    a1.set_nombre(nombre);

    cout<<"Ingrese la edad del animal: ";
    cin>>edad;
    a1.set_edad(edad);
        cout<<"Ingrese el tamanio del perro según las siguientes opciones: \n"
    <<"1 pequeño, 2 mediano, 3 grande, 4 gigante: ";
    cin>>op;
    if(op==1){
        tamanio="pequeño";
    }
    if(op==2){
        tamanio="mediano";
    }
    if(op==3){
        tamanio="grande";
    }
    if(op==4){
        tamanio="gigante";
    }
    p1.set_tamanio(tamanio);
    cout<<"Ingrese la raza: ";
    cin>>raza;
    p1.set_raza(raza);
    cout<<"Ingrese el material del collar: ";
    cin>>material;    
    c1.set_material(material);
    cout<<"Ingrese el diametro: ";
    cin>>diametro;
    c1.set_diametro(diametro);
    cout<<"Ingrese el tipo de vacuna que aplico: ";
    cin>>vacuna;
    v1.set_vacuna(vacuna);
    cout<<"Ahora la fecha de aplicacion: ";
    cin>>fecha;
    v1.set_fecha(fecha);
    
    v1.mostrar_vacuna();
}

