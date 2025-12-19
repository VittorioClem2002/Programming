#include <iostream>

class Animal
{
private:
    std::string nombre;
    int edad;
public:
    Animal();
    Animal(std::string,int);
    void mostrar_animal();
    void set_nombre(std::string);
    void set_edad(int);
    std::string get_nombre();
    int get_edad();
};

Animal::Animal(){}

Animal::Animal(std::string _nombre, int _edad){
    edad=_edad;
    nombre=_nombre;
}

class Perro : public Animal{
    private:
        std::string tamanio;
        std::string raza;
    public:
        Perro();
        Perro(std::string, std::string,std::string,int);
        void mostrar_perro();
        void set_tamanio(std::string);
        void set_raza(std::string);
        std::string get_tamanio();
        std::string get_raza();
};
Perro::Perro(){}


Perro::Perro(std::string _tamanio, std::string _raza,std::string _nombre,int _edad) : Animal (_nombre, _edad){
    tamanio=_tamanio;
    raza=_raza;
}

class Collar : public Perro{
    private:
        std::string material;
        float diametro;
    public:
        Collar();
        Collar(std::string,float,std::string, std::string,std::string,int);
        void mostrar_collar();
        void set_material(std::string);
        void set_diametro(float);
        std::string get_material();
        float get_diametro();
};

Collar::Collar(){}

Collar::Collar(std::string _material,float _diametro,std::string _tamanio, std::string _raza,std::string _nombre,int _edad) : Perro (_tamanio, _raza, _nombre, _edad){
    material=_material;
    diametro=_diametro;
}

class Vacuna : public Collar
{
    private:
        std::string vacuna;
        std::string fecha;
    public:
        Vacuna();
        Vacuna(std::string, std::string,std::string,float,std::string, std::string,std::string,int);
        void mostrar_vacuna();
        void set_vacuna(std::string);
        void set_fecha(std::string);
        std::string get_vacuna();
        std::string get_fecha();
};

Vacuna::Vacuna(){}

Vacuna::Vacuna(std::string _vacuna, std::string _fecha,std::string _material,float _diametro,std::string _tamanio, std::string _raza,std::string _nombre,int _edad) : Collar (_material, _diametro, _tamanio, _raza, _nombre, _edad){
    vacuna=_vacuna;
    fecha=_fecha;
}
