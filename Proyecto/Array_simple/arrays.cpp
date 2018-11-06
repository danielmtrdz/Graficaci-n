#include <iostream>
#include <cstdio>

using namespace std;
	
	/*Programa que pide un valor aleatorio, crea un arreglo
	con esa cantidad de espacios e imprime el valor en la 
	posicion elegida por el usuario */
	
	
int main() {
	
	int val;
	int a;
	int j;
	cout<<"Ingresa el número de espacios entre 1 y 100 "<<endl;
	cin>> a;
	int num [a];
		

	for (int i = 0; i <= a; i++) {
		
	j = rand() % 101;
	  num[i] = j;

	}

	cout<<"Posición a imprimir"<<endl;
	cin>>val;
	
	if(val <= a) {
	
	cout<<"El valor en esta posición es: ";
	cout<<num[val-1]<<endl;
	
	}

	else{
	cout<<"Valor incorrecto"<<endl;
	
	}
	
	return 0;

}


