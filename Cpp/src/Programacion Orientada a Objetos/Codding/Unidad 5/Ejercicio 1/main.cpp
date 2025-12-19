#include "Clases.h"
#include <iostream>

using namespace std;


int main(){
    Mamifero *A[3];

    A[0]= new Humano("Braulio",35,18796542);
    A[1]= new Humano("Anastacio",65,8796542);
    A[2]= new Humano("Rosendo",75,5796542);
    
    for(int i=0;i<3;i++){
        A[i]->comer();
    }
}