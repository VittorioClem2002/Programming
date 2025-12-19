#include<iostream>
#include<time.h>
using namespace std;

class rectangulo{
    
    private:
    float largo, ancho;

    public: 
        rectangulo(float,float);
        void perimetro();
        void area();
};

rectangulo::rectangulo(float l, float a){
    largo=l;
    ancho=a;
}

void rectangulo::perimetro(){
    float peri;
    peri=(largo*2)+(ancho*2);
    cout<<endl<<"El perímetro del rectángulo es: "<<peri<<endl;
}

void rectangulo::area(){
    float area;
    area=largo*ancho;
    cout<<"El área del rectángulo es: "<<area<<endl;
}

int main(){
    int l, a;
    cout<<"Ingrese el largo: ";
    cin>>l;   
    cout<<"Ingrese el ancho: ";
    cin>>a;
    rectangulo r(l,a);
    r.perimetro();
    r.area();
}