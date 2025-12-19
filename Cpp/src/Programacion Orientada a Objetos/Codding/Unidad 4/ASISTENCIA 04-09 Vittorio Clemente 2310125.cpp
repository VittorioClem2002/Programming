#include<iostream>

using namespace std;

class Libro {
    private:
        string titulo, autor;
        int paginas;

    public:
        Libro(string,string,int);

        void setTitulo(string);
        string getTitulo();
        void setAutor(string);
        string getAutor();
        void setPaginas(int);
        int getPaginas();
        
        void Info();
        void best();
};


Libro::Libro(string t, string a, int p){
    titulo=t;
    autor=a;
    paginas=p;
}

void Libro::setTitulo(string t){
    titulo=t;
}

string Libro::getTitulo(){
    return titulo;
}

void Libro::setAutor(string a){
    autor=a;
}

string Libro::getAutor(){
    return autor;
}

void Libro::setPaginas(int p){
    paginas=p;
}

int Libro::getPaginas(){
    return paginas;
}

void Libro::Info(){
    cout<<"Libro:"<<titulo<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"Cantidad de páginas"<<paginas<<endl;

}

void Libro::best(){
    string tipo;
    if (paginas<=200){
        tipo="Cortometraje";
    }
    else{
        tipo="Best seller";
    }
}

int main(){
    string titulo, autor;
    int paginas,op=1;
    Libro l1(titulo,autor,paginas);
    while(op!=0){
        cout<<"Usuario, elija entre estas opciones: "
        <<"\n1_Agregar un libro\n2_Mostrar cortometrajes\n0_Volver\nOpción: ";
        cin>>op;
        while(0>op||op>2){
            cout<<"Reingrese nuevamente: ";
            cin>>op;
        }
        if(op==1){
            cout<<"Ingrese el título: ";
            cin>>titulo;
            cout<<"Ingrese el autor: ";
            cin>>autor;
            cout<<"Ingrese la cantidad de páginas: ";
            cin>>paginas;

            l1.setTitulo(titulo);
            l1.setAutor(autor);
            l1.setPaginas(paginas);
        }
        if(op==2){
            l1.Info();
            l1.best();
        }
    }
}
