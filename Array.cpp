#include <iostream>
using namespace std;
main (){
	int notas[4];
	notas[0]=90;
    notas[1]=44;
    notas[2]=99;
    notas[3]=10;
    
    cout<<notas[0]<<endl;
    cout<<notas[1]<<endl;
    cout<<notas[2]<<endl;
    cout<<notas[3]<<endl;
    
    notas[2]=70;
    cout<<"valor modificado (2)"<<notas[2]<<endl;
    
	
}
