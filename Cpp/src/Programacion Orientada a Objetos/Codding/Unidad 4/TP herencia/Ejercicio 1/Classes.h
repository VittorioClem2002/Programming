#include <iostream>

class Autor{
    private:
    long dni;
    std::string autor;
    public:
    Autor();
    Autor(long,std::string);
    void mostrar();
    void set_nombre(std::string);
    void set_dni(long);
    std::string get_nombre();
    long get_dni();

};

class Libro : public Editorial{
    protected:
    std::string nombre;
    public:
    Libro(Autor,Editorial);
    Libro(std::string, std::string, std::string);
    void mostrar();
    void set_nombre(std::string);
    std::string get_nombre();
};

class Editorial{
    private:
    std::string editorial;
    public:
    Editorial();
    Editorial(std::string);
    void mostrar();
    void set_nombre(std::string);
    std::string get_nombre();
};