//Escribir un programa que pida al usuario una palabra o frase y la almacene en una Lista
//separando letra por letra, luego pedirá al usuario una vocal que desee contar y, por último, se
//debe imprimir por pantalla la lista y el número de veces que aparece la vocal en la palabra o
//frase. Validar que la Lista no esté vacía y que la letra a contar que introduzca el usuario sea
//una vocal.

#include<iostream>
#include<bits/Lista/Lista.h>

using namespace std;

void txt(Lista<char> &list, char letter){
    cin>>letter;
    if(letter == 46){
        list.insertarUltimo(letter);
        return;
    }
    else{
        list.insertarUltimo(letter);
        txt(list, letter);
    }
}

void print(Lista<char> list, char letter){
    int i=0,count=0;
    while(letter!=97||letter!=101||letter!=105||letter!=111||letter!=117){
        cout<<"Elija una letra vocal para iniciar el contador: ";
        cin>>letter;
    }
    for(i=0;i<list.getTamanio();i++){
        if(list.getDato(i)==letter){
            count+=1;
        }
        cout<<list.getDato(i);
    }
}


int main(){
    Lista<char>list;
    char letter;

    cout<<"Ingrese una frase letra por letra y finalícela con un ."<<endl;
    txt(list,letter);
    print(list,letter);


}