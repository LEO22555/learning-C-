/*primera prueba: Escribe un programa que lea la entrada estandar el precio de un producto
y muestre en la salida estandar el precio del producto al aplicarle IVA
*/

#include<iostream>

using namespace std;

int main(){
	int n1, niva=0;
	
	cout<<"digita el precio sin iva: "; cin>>n1;
	
	niva = n1+n1*.19;
	
	cout<<"El precio con iva es: "<<niva<<endl;
	return 0;
}
