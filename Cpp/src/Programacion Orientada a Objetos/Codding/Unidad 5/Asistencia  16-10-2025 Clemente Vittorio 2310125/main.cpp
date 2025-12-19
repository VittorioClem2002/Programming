#include <iostream>
#include "Clases.h"

using namespace std;


int main(){
    int op=1,select,i;
    string nombre,puesto;
    long dni;
    int sueldo, edad;
    empleado *A[30];
    do{
        cout<<"1_Cargar un empleado\n2_Ver empleados\n0_Salir\n";
        cout<<"Ingrese una opción: ";
        cin>>op;
        while(op<0 || op>2){
            cout<<"Reingrese nuevamente: ";
            cin>>op;
        }
        if(op==1){
            cout<<"Ingrese la cantidad que desea cargar: ";
            cin>>i;
            while(i>30){
                cout<<"El límite de carga está superado. No puede ser mayor a 30";
                cin>>i;
            }
            for(int j=0;j<i;j++){
                cout<<"Del sujeto ["<<j+1<<"]"<<endl;
                cout<<"Ingrese el nombre: ";
                cin>>nombre;
                cout<<"Ingrese la edad: ";
                cin>>edad;
                cout<<"Ingrese el DNI: ";
                cin>>dni;
                cout<<"ingrese el sueldo en USD: ";
                cin>>sueldo;
                cout<<"Indique si es:\n1_Gerente\n2_Supervisor\n3_Obrero\n--->: ";
                cin>>select;
                while(select<1 || select>3){
                    cout<<"Reingrese nuevamente: ";
                    cin>>select;
                }
                if(select==1){
                    cout<<"Ingrese el area de gestión: ";
                    cin>>puesto;
                    A[j] = new gerente(nombre,sueldo,dni,puesto);
                }
                if(select==2){
                    cout<<"Ingrese el sector dedicado: ";
                    cin>>puesto;
                    A[j] = new supervisor(nombre,sueldo,dni,puesto);
                }
                if(select==3){
                    cout<<"Ingrese la fábrica: ";
                    cin>>puesto;
                    A[j] = new obrero(nombre,sueldo,dni,puesto);
                }
            }
        }
        if(op==2){
            cout<<"\n\n***LISTA DE EMPLEADOS***\n"<<endl;
            for(int j=0;j<i;j++){
                A[j]->mostrar_empleado();
                cout<<endl;
            }
        }
    }while(op!=0);

}