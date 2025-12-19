#include <iostream>

class Mamifero{
    private:
        std::string nombre;
        int edad;
    public:
        Mamifero();
        Mamifero(std::string,int);
        virtual void comer();
        virtual void mostrar_mamifero();
        std::string mostrar_nombre();
        int mostrar_edad();
};

class Humano:public Mamifero{
    private:
        long dni;
    public:
        Humano();
        Humano(std::string,int,long);
        void mostrar_mamifero();
        void comer();
};

class Perro:public Mamifero{
    private:
        std::string raza;
    public:
        Perro();
        Perro(std::string,int,std::string);
        void comer();
};