#include <iostream>
using namespace std;
main (){
	int tam=0,suma=0,promedio=0;
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"ingrese la nota: "<<tam<<":";
		cin>>notas [tam-1];	
	cout<<"desea ingresar otra nota(s/n)";
	cin>>res;
}while(res=='s'||res=='S');

for (int i=0;i<tam;i++){
	suma+=notas[i];
	cout<<"el promedio es de:"<<promedio<<endl;
	
}





