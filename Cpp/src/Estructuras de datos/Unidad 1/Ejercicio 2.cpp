#include <iostream>

using namespace std;

int sumarecursiva(int b){
    if(b==0){
        return 0;
    }
    else{
        return b + sumarecursiva(b-1);
    }
}

int main(){
    int base, result;

    cout<<"Ingrese la base: ";
    cin>>base;
    result=sumarecursiva(base);
    cout<<"el resultado es: "<<result;

return 0;
}