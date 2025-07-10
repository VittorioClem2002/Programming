#include <iostream>

using namespace std;

int potenciarecursiva(int b, int e){

    if(e==0){
        return 1;
    }
    else{
        return b * potenciarecursiva(b, e-1);
    }
}

int main(){
    int base, exp;
    cout<<"Ingrese la base: ";
    cin>>base;
    cout<<endl<<"Ingrese el exponente: ";
    cin>>exp;
    cout<<"el resultado es: "<<potenciarecursiva(base,exp)<<endl;

return 0;
}