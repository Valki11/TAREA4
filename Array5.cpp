#include <iostream>
using namespace std;
main (){
	int tam=0,suma=0,promedio=0;
    cout <<"Cuantas notas desea que se ingrese- : ";
    cin>>tam;
    int notas[tam];
	for(int i=0;i<tam;i++){
    	 cout <<"ingrese Nota: "<<i+1<<":";
    	 cin>>notas[i];
	}
	for(int i=0;i<<tam;i++){
		suma+=notas[i];
	}
	promedio =suma/tam;
	cout<<"el promedio es: "<<promedio<<endl;
	
}

