#include<iostream>

#include<bits/Lib/Arbol/ArbolBinarioAVL.h>

using namespace std;

void charge(const ArbolBinarioAVL <int> &Library(), int s[]){
    for (int i=0;i<=6;i++){
        Library.put(s[i]);
    }
}

void searching(const ArbolBinarioAVL <int>& Library (), int s[]){
    int n=Library.search(s[4]);
    if(n==75){
        cout<<"El libro 75 se encuentra en la bilblioteca"<<endl;
    }
    Library.remove(s[1]);
}


int main(){
    ArbolBinarioAVL <int> Library();
    int n;
    int s[7];
    s[0]=101;
    s[1]=52;
    s[2]=198;
    s[3]=36;
    s[4]=75;
    s[5]=150;
    s[6]=200;
    charge(Library,s); 
    searching(Library,s);
    cout<<endl;

   //Library.preorder();
    //cout<<endl;
    //Library.postorder();
    //cout<<endl;
    //Library.inorder();
   
    Library.print(); 
}



