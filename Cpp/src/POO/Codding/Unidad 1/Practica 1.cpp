#include<iostream>;

using namespace std;

struct estudiante{
    string nombre;
    float nota;
};

int main(){
    estudiante A[5];
    int i,j=0,k=0;
    float suma,prom;

    for(i=0;i<5;i++){
        cout<<"Ingrese el nombre del estudiante ["<<i+1<<"]: ";
        cin>>A[i].nombre;
        cout<<"Ingrese su nota: ";
        cin>>A[i].nota;
    }
    for(i=0;i<5;i++){
        suma+=A[i].nota;
        if(A[j].nota<A[i].nota){
            j=i;
        }
        if(A[k].nota>A[i].nota){
            k=i;
        }
    }
    cout<<"El alumno con la mayor nota: "<<A[k].nombre<<" con un "<<A[k].nota<<endl;
    cout<<"El alumno con la menor nota: "<<A[j].nombre<<" con un "<<A[j].nota<<endl;
    prom=suma/5;
    cout<<"El promedio general es de: "<<prom<<endl;

}