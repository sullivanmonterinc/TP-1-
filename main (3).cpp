#include <iostream>
using namespace std;
int main(){
    float n1;
    float n2;
    float resultado;
    cout<<"cuantas preguntas contestaste?";
    cin>>n1;
    cout<<"cuantas respondiste correctamente?";
    cin>>n2;
    resultado=(n2/n1)*100;
    if (resultado >=90){
        cout<<"su resultado nv maximo";
        
    }
    else if(resultado >=75 && resultado<90){
        cout<<"su resultado es nv medio";
        
    }
    else if(resultado >=50 && resultado<75){
        cout<<"su nivel es regular";
        
    }
    else{
        cout<<"su resultado es fuera de nivel";
    }
    
}