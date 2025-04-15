#include <iostream>
using namespace std;
int main(){
int m,s1,s2,o;
int dinero=2000;
int dinero2=0;
cout<<"BIENVENIDO AL CAJERO"<<endl;
cout<<"recomendacion para usar el cajero: primero la tercera opcion luego de eso usa la opcion que quieras"<<endl;
do {
cout<<""<<endl;
cout<<"ELIJA LA OPCION QUE QUIERA HACER"<<endl;
cout<<""<<endl;
cout<<"1. meter dinero"<<endl;
cout<<""<<endl;
cout<<"2. sacar dinero"<<endl;
cout<<""<<endl;
cout<<"3. preguntar cuanto dinero tienes"<<endl;
cout<<""<<endl;
cout<<"4. salir del cajero automatico"<<endl;
cin>>o;
switch(o){

case 1:
	cout<<"ingrese la cantidad de dinero que quiera guardar"<<endl;
	cin>>m;
	dinero= m + dinero;
	cout<<"su dinero se ah guardado correctamente"<<endl;
	cout<<"su dinero ahora es de: "<<dinero;
break;
case 2:
cout<<"cantidad de dinero a retirar"<<endl;
cin>>s1;
if(dinero>s1){
	cout<<"saldo retirado tu saldo ahora es de: "<<s1;
	
}else{
	cout<<"quieres retirar mas de lo que tienes guardado"<<endl;
}
	break;
	case 3:
		cout<<"tu saldo actual es de "<<dinero;
break;
case 4: 
cout<<"nos vemos"<<endl;

default:
	case 5: 
	cout<<"elija la opcion entre 1 y 4"<<endl;

}
} while (o !=4);
return 0;
}
