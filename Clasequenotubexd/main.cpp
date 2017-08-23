#include <iostream>

using namespace std;

int main()
{
    int anio,prim;
    int cont=0;
    cin>>anio;
    if(anio%4==0){
    if(anio%100!=0||anio%400==0)
        {cout<<"Es bisiesto"<<endl;}
        else{cout<<"No es bisiesto"<<endl;}}
        else{cout<<"No es bisiesto"<<endl;}
    cin>>prim;
    for(int i=1;i<prim;i++){
        if(prim%i==0){cont+=1;}}
    if(cont<=1)
        cout<<"Es primo"<<endl;
    else
        cout<<"No es primo"<<endl;
}

