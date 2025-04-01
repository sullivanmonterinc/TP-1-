#include <iostream>
using namespace std;
int main(){
  int n1;
  cout<<"ingrese un numero entero positivo de hasta 3 cifras";
  cin>>n1;
  if(n1<10){
    cout<<"su numero es de una cifra"<<endl; 
  }
  else if(n1<100){
      cout<<"su numero tiene dos cifras"<<endl;
  }
  else if(n1<1000){
  cout<<"su numero tiene tres cifras"<<endl;
  }
  else{
      cout<<"su numero tiene mas de tres cifras,(Ponga uno de tres cifras";
  }
  return 0;
}
