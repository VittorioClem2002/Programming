//Implementar una función que recibe una lista de números enteros y un número entero “n” y
//que modifique la lista borrando todos los elementos de la lista que tengan el número “n”.
//Imprimir la lista antes de hacer el llamado a la función y luego del llamado a la función para
//mostrar que la lista original cambió. ej: lista: 1->2->3->4->5->3->7->8->3->10 con n=3 debe
//pasar con la función a 1->2->4->5->7->8->10.

#include<iostream>
#include<bits/Lista/Lista.h>

using namespace std;

void modList(Lista<int>& list, int num){
    int i,flag=0,aux,n;
    
        for(i=0;i<list.getTamanio();i++){
            if(i<=list.getTamanio() && flag==0){
                cout<<"->"<<list.getDato(i);
            }
            if(i==list.getTamanio()-1 && flag==0){
                i=0;
                flag=1;
                cout<<"\n";
            }
            if(flag==1)
            {
                if(list.getDato(i)==num){
                    list.remover(i);
                    i=i-1;
                }

            }
        }
    return;
}

int main(){
    int num,length,i, n;

    Lista<int>list1;

    cout<<"Ingrese la longitud de su lista: ";
    cin>>length;
    
    for(i=0;i<length;i++){
        cout<<"Ingrese el valor en la posición n°"<<i+1<<" de la lista: ";
        cin>>n;
        list1.insertarUltimo(n);
    }

    cout<<"Ingrese dato desea omitir en su lista: ";
    cin>>num;

    modList(list1,num);
    for(i=0;i<list1.getTamanio();i++){
        cout<<"->"<<list1.getDato(i);
    }

}
