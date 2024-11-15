#include<iostream>
using namespace std;
int main(){
	float PD=0 , Pd1=0 ,Pd2=0, I=0, V=0; 
    const float R = 10;
    PD= Pd1 && Pd2;
    
    cout<<"Ingrese el valor de la intensidad de corriente: "; cin>>I;
  
    Pd1= I*I*R;
    V= I*R;
    Pd2= (V*V)/R;
    
    cout<<"El valor de la potencia disipada 1 es: "<<Pd1<<endl;
    cout<<"El valor del voltaje es : "<<V<<endl;
    cout<<"El valor de la potencia disipada 2 es: "<<Pd2<<endl;
    
    if (Pd1 != Pd2){
    	cout<<"Error ambas potencias deben ser iguales , verifique posibles errores"<<endl;
	}
	
	else if ( PD>=500){
		cout<<"Riesgo de cortocircuito"<<endl;
	}
	else {
		cout<<"El circuito es estable"<<endl;
		
	}
	
	return 0;
    
}
