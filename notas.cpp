#include<iostream>

using namespace std;

int main(){
	float Np1=0, Np2=0, Np3=0 ,NT=0;
cout<<"Promedio de notas\n"<<endl;

cout<<"Ingrese el valor de la nota del primer parcial: ";  cin>>Np1;

cout<<"Ingrese el valor de la nota del segundo parcial: "; cin>>Np2;

cout<<"Ingrese el valor de la nota del tercer parcial: "; cin>>Np3;


NT=(Np1+Np2+Np3)/3;
cout<<"La nota total del semestre es: "<<NT<<"\n"<<endl;

if(NT>=14 && NT<=20){
	cout<<"El alumno ha aprobado la materia"<<endl;
}
else if(NT>=0 && NT<14){
	cout<<"El alumno ha reprobado la materia"<<endl;
}
else{
	cout<<"Error , ingrese valores validos (rango de notas: 0-20)"<<endl;
}
return 0;
}