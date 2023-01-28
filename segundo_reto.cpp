/* Realiza un programa que lea de la entrada estandar los datos de una persona:

	Edad: dato del tipo entero
	Sexo: dato del tipo caracter
	Altura en metros: dato del tipo real
	
Tras leer los datos, el programa debe leerlos en la salida estandar*/

#include <iostream>
using namespace std;
int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"digite la edad: "; cin>>edad;
	cout<<"digite el sexo: "; cin>>sexo;
	cout<<"digite la altura: "; cin>>altura;	
	cout<<"\nla edad es: "<<edad<<endl;
	cout<<"el sexo es: "<<sexo<<endl;
	cout<<"la altura es: "<<altura<<endl;
	return 0;
}
