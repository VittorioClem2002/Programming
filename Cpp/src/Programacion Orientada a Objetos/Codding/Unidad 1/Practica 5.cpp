#include <iostream>

using namespace std;

void asignar(int* arreglo,int tamanio){
    for (int i = 0; i < tamanio; i++)
    {
        cout<<"\nValor ["<<i+1<<"]:";
        cin>>arreglo[i];
    }
    
}
void imprimir_arreglo(int *arreglo,int tamanio){
    cout<<"********** Contenido **********"<<endl<<endl<<endl;
    for (int i = 0; i <tamanio; i++)
    {
        cout<<"\nValor ["<<i+1<<"]: "<<arreglo[i];
    }
    

}
void suma_arreglo(int *arreglo,int tamanio){
    int suma=0;
    for (int i = 0; i < tamanio; i++)
    {
        suma+=arreglo[i];
        
    }
    cout<<"\nsuma del arreglo: "<<suma<<"\n";
} 


int main(){
    
    int tamanio;
    cout<<"Ingrese el largo: ";
    cin>>tamanio;
    int arreglo[tamanio];

    asignar(arreglo,tamanio);
    imprimir_arreglo(arreglo,tamanio);
    suma_arreglo(arreglo,tamanio);

}