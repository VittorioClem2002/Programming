#include <iostream>
#include <iomanip>

using namespace std;

class Persona{
    private:
    int edad;
    float altura;
    string nombre, apellido;
    public:
    Persona();
    Persona(int,float,string,string);
    void mostrar_persona();
    int getEdad();
    float getAltura();
    string getNombre();
    string getApellido();
    virtual void mostrar_sexo()=0;
};

Persona::Persona(){};

Persona::Persona(int _edad, float _altura, string _nombre, string _apellido){
    edad=_edad;
    altura=_altura;
    nombre=_nombre;
    apellido=_apellido;
}
int Persona::getEdad(){
    return edad;
}
float Persona::getAltura(){
    return altura;
}
string Persona::getNombre(){
    return nombre;
}
string Persona::getApellido(){
    return apellido;
}
void Persona::mostrar_persona(){
    cout<<"Se llama "<<getNombre()<<" "<<getApellido()
    <<", tiene "<<getEdad()<<" años, mide "<<setprecision(2)<<getAltura()
    << "cm";
     
}


class Hombre: public Persona{
    private:
    string sexo;
    public:
    Hombre();
    Hombre(string,int,int,string,string);
    void mostrar_sexo();
};

int main(){


}