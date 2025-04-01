#include <iostream>
using namespace std;
int main(){
    int nota1;
    int nota2;
    int nota3;
    int promedio;
    cout<<"ingrese su primera nota";
    cin>>nota1;
    cout<<"ingrese su segunda nota";
    cin>>nota2;
    cout<<"ingrese su tercera nota";
    cin>>nota3;
    promedio=(nota1+nota2+nota3)/3;
    cout<<"su nota final es"<<promedio<<endl;
    if(promedio>=7){
        cout<<"promosionado" <<endl;
    }
    else if(promedio>=4){
        cout<<"regular" <<endl;
    }
    else{
        cout<<"reprobado" <<endl;
    }
    
    return 0;
}
    
    
    

    

    