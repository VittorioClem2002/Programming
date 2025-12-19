#include<iostream>
#include<cmath>
using namespace std;


class point{
    private:
    float x;
    float y;
    public:
    point();
    point(float,float);
    void setx(float);
    float getx();
    void sety(float);
    float gety();
    void showpoint();
};

class line{
    private:
    point p0;
    point p1;
    public:
    line();
    line(point,point);
    line(float,float,float,float);
    void showline();
};

point::point(){
}
point::point(float _x,float _y){
    x= _x;
    y= _y;
}

void point::setx(float _x){
    x= _x;
}

float point::getx(){
    return x;
}

void point::sety(float _y){
    y= _y;
}

float point::gety(){
    return y;
}

void point::showpoint(){
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
}

line::line(point _p0, point _p1){
    p0= _p0;
    p1= _p1;
}

line::line(float _x0, float _y0, float _x1, float _y1){
    p0.setx(_x0);
    p0.sety(_y0);

    p1.setx(_x1);
    p1.sety(_y1);

}

void line::showline(){
    cout<<"La linea se conforma por el punto p0:\n x0="<<p0.getx()<<"   y0="<<p0.gety()<<endl;
    cout<<"Y por el punto p1:\n x1="<<p1.getx()<<"   y1="<<p1.gety()<<endl;
}


int main(){
    point p0(2,4);
    point p1(4,3);

    p0.showpoint();
    p1.showpoint();

    line l1(p0,p1);
    l1.showline();

}