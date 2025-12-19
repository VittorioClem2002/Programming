#include<iostream>

using namespace std;

struct song{
    string artist;
    string tittle;
    int length;
    float file_size;
};



int verificar(song A[10],string tittle){
    for(int i=0;i<10;i++){
        if(A[i].tittle==tittle){
            return -1;
        }
        else{
            if(empty(A[i].tittle)){
                return i;
            }
        }
    }

    return 11;
}

void add(song A[10], int op){
    string tittle;
    int i;
    cout<<"Usuario, ingrese el título de esa canción: ";
    cin>>tittle;
    i=verificar(A,tittle);
    if(i<=0 && i<10){
        cout<<"Ingrese el intérprete: ";
        cin>>A[i].artist;
        cout<<"Ingrese la duración en segundos: ";
        cin>>A[i].length;
        cout<<"Ingrese el peso del archivo en Megabytes: ";
        cin>>A[i].file_size;
        cout<<"La canción se añadió con éxito"<<endl;
    }
    else{
        cout<<"La canción ya existe en la lista"<<endl;
        menu(A,op);
    }
}

void list(song A[10], int op){
    for(int i=0;i<10;i++){
        if(!empty(A[i].tittle)){
            cout<<"\n"<<i+1<<"- "<<A[i].tittle<<" by "<<A[i].artist<<" | Duración: "<<A[i].length<<"."<<A[i].file_size<<"MB";
        }
    }
    menu(A,op);
}

void search(song A[10], int op){
    int i;
    string tittle;
    cout<<"Usuario, ingrese el título de esa canción: ";
    cin>>tittle;
    for(i=0;i<10;i++){
        if(A[i].tittle==tittle){
            cout<<"\nEsta es su canción:  "<<A[i].tittle<<" by "<<A[i].artist<<" | Duración: "<<A[i].length<<"."<<A[i].file_size<<"MB";
            return;
        }
        else if(i==10){
            cout<<"\nNo se halló su canción"<<endl;
        }
    }
    menu(A,op);
}

void menu(song A[10],int op){
    if(op==0){
        return;
    }
    else{
        cout<<"1_Agregar una canción\n2_Mostrar el título de todas las canciones"
        <<"\n3_Buscar una canción\n0_Salir\n\nOpción: ";
        cin>>op;
        while(op<0||op>3){
            cout<<"Valor inválido, reingrese nuevamente. Recuerde que ingresando:"<<endl;
            cout<<"1_Agregar una canción\n2_Mostrar el título de todas las canciones"
            <<"\n3_Buscar una canción\n0_Salir\n\nOpción: ";
            cin>>op;
        }
        if(op==1){
            op=10;
            add(A,op);
        }
        if(op==2){
            op=10;
            list(A,op);
        }
        if(op==3){
            op=10;
            search(A,op);
        }
    }
}
int main(){
    song A[10];
    int i, op;
    string txt;
    A[0].artist="The Beatles";
    A[0].tittle="Twist And Shout";
    A[0].length=235;
    A[0].file_size=5.5;

    cout<<"Hola usuario. Ingrese una opción para comenzar:"<<endl; 
    menu(A,op);

}

