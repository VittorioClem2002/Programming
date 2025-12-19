#include<iostream>

using namespace std;

int main(){
 int x, y, *p, *q;
 cout << &x << " " << &y << endl;
 p = &x; //El puntero p apunta a la variable x
 *p = 5; //El puntero p recibe el valor 5, por ende se reemplaza x=5
 q = &y; //El puntero q apunta a la variable y
 *q = 23; //El puntero q recibe el valor 23, por ende se reemplaza y=23
 cout << p << " " << q << endl;
 cout << *p << " "<< *q << endl; // Imprime los valores de las variables guiandose en la búsqueda de memoria por los puntero
 q = p; //Ahora q apuntará a la misma variable que p (x), ya que el valor de puntero es el mismo
 *p = 35; //Ahora x=35
 cout << *p << " "<< *q << endl; //imprime los valores siguiendo el recorrido de puntero (x, x)
 cout << p << " " << q << endl;
 q = NULL; //ahora q no apunta a ningún lado
 cout << x << " "<< y << endl; //Se imprimen las variables sin recurrir a los punteros
 return 0;
}
