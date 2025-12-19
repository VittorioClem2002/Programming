#include <iostream>
#include <vector>

using namespace std;

class persona{
    private:
        string name,last_name;
        int age;
        long dni;
    public:
        persona(string,string,int,long);
        void eat();
        void sleep();
        
};


persona::persona(string _name,string _last_name,int _age,long _dni){
    name=_name;
    age=_age;
    dni=_dni;
    last_name=_last_name;
}

void persona::eat(){
    cout<<"Mi nombre es "<<name<<" Y soy alta gordita"<<endl;
}
void persona::sleep(){
    cout<<"Mi nombre es "<<name<<", mi DNI es "<<dni<<", tengo "<<age<<" años y me encanta dormir la siesta.\nPD: estoy más viejo que si me llamara Edelmiro";
}


int main(){
    persona p1("Vittorio","Clemente",23,42389733);
    p1.eat();
    p1.sleep();
}

