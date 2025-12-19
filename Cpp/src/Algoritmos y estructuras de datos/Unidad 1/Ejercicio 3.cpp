
#include <iostream>

using namespace std;


int inverse(int base, int invertido=0)
{
    if (base==0)
    {
        return invertido;
    }
    else
    {
        int resto=base%10;
        return inverse((base/10),((invertido*10)+resto));
    }
}

int main()
{   int base;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "el resultado es: "<<inverse(base);

    return 0;
}
