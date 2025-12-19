#include<iostream>
#include<bits/Lib/HashMap/HashMap.h>

using namespace std;

int main(){
    HashMap <string, string> Diccionary(10);
    string c=0,s;
    int i=0;
    Diccionary.put("Hola", "Saludo");
    Diccionary.put("Adios", "Sinónimo de despedida");
    Diccionary.put("Si","Afirmación");
    i=3;

    while(i<10){
        cout<<"Ingrese cúal de las palabras desea ingresar. Ingrese . cuando finalice: "<<endl;
        cin>>c;
        cout<<c<<" <-- Ahora su significado: ";
        cin>>s;
        i+=1;
        //Diccionary.print();
        //cout<<Diccionary.get("Hola");
    }

    cout<<"Ingrese una palabra para buscar: ";
}
