#include <iostream>

using namespace std;

int main(){
    float Vv=0;
    char letra='s';
    char foco[100];

    cout<<"Encendido de un foco LED "<<endl;

    cout<<"Ingrese el valor del voltaje para encender el foco LED :";    cin>> Vv;

    if(Vv>=1,8 && Vv<=3,3){
        cout<<"El voltaje aplicado es adecuado"<<endl;
    }
    else{
        cout<<"El voltaje aplicado no es adecuado, ingrese otro valor para el voltaje"<<endl;
        exit(0);
    }
    cout<<" ¿El LED esta encendido?: "; cin>>foco;

    if(foco[0]=='s'){
        cout<<"El foco esta encendido"<<endl;
    }

    else{
        cout<<"El foco no esta encendido (verificar posibles fallas)"<<endl;
    }

return 0;

}





