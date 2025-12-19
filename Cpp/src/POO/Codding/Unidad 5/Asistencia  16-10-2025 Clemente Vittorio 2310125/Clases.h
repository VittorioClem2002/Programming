#include <iostream>


class empleado{
    private:
        std::string nombre;
        int sueldo;
        long dni;
    public:
        empleado();
        empleado(std::string,int,long);
        int get_sueldo();
        virtual void mostrar_empleado();
};

class gerente:public empleado{
    private:
        std::string area;
    public:
        gerente();
        gerente(std::string,int,long,std::string);
        void set_area(std::string);
        std::string get_area();
        void mostrar_empleado();

};

class supervisor: public empleado{
    private:
        std::string sector;
    public:
        supervisor();
        supervisor(std::string,int,long,std::string);
        void set_sector(std::string);
        std::string get_sector();
        void mostrar_empleado();
};

class obrero: public empleado{
    private:
        std::string fabrica;
    public:
        obrero();
        obrero(std::string,int,long,std::string);
        void set_fabrica(std::string);
        std::string get_frabrica();
        void mostrar_empleado();
};
