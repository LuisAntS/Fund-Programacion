#include<iostream>
using namespace std;
int main(){
	float  A=0, P=0,D=0,r=0;
	const float PI=3.1416;
	
	cout<<"Perimetro de la circunferencia \n"<<endl;
	
	cout<<"Ingre el valor del radio"<<endl;
	cin>>r;
	cout<<"Ingre el valor del diametro"<<endl;
	cin>>D;
	
	P = PI*D;
	A = PI*r*r;
	
	cout<<"El valor del perimetro es:"<<P<<endl;
	cout<<"El valor del area es:"<<A<<endl;
	
	
}
