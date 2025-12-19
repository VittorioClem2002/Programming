//Se desea un sistema donde se carge el nombre, el apellido y la clave de 1 alumno
//Y luego el promedio de las 3 notas
#include<iostream>


class alumno{
    private:
        std::string nombre, apellido;
        long clave;
        float n1,n2,n3;

    public:
        alumno(std::string,std::string,long,float,float,float);
        void cargar();
        void promedio();
};

alumno::alumno(std::string n, std::string a,long k, float c1,float c2, float c3){
    nombre=n;
    apellido=a;
    clave=k;
    n1=c1;
    n2=c2;
    n3=c3;

}

void alumno::cargar(){
    std::cout<<"Ingrese el nombre del alumno: ";
    std::cin>>nombre;
    std::cout<<"Ingrese el apellido: ";
    std::cin>>apellido;
    std::cout<<"Ingrese la clave: ";
    std::cin>>clave;
    std::cout<<"Ingrese la nota 1, 2 y 3 consegutivamente: ";
    std::cin>>n1;
    std::cin>>n2;
    std::cin>>n3;
}

void alumno::promedio(){
    float suma, prom;
    suma=n1+n2+n3;
    prom=suma/3;
    std::cout<<"\nEl promedio de "<<nombre<<" "<<apellido<<" con clave: "<<clave<<" es igual a: \n"<<prom<<"\n";
}

int main(){
    std::string nombre, apellido;
    long clave;
    float n1,n2,n3;
    alumno a1(nombre,apellido,clave,n1,n2,n3);
    a1.cargar();
    a1.promedio();
}