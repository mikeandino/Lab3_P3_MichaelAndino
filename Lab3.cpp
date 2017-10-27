#include <iostream>
#include <string>
using namespace std;

int main();

void menu();

int ejercicio1();

int ejercicio2();

int ejercicio3();

int*** crearMatriz(int);

void imprimirMatriz(int***,int);

int main(){
	menu();	
	return 0;
}//main

void menu(){
	cout<<"Programacion 3 Laboratorio 3"<<endl
		<<" Ejercicio 1: "<<endl
		<<" Ejercicio 2: "<<endl
		<<" Ejercicio 3: "<<endl
		<<" Salir: 4 "<<endl
		<<" Ingrese su opcion: ";
	int opcion = 0;
}
int*** crearMatriz(int size){
	int*** matriz = new int**[size];
	for(int i=0;i<size;i++){
		matriz[i]=new int*[3];
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<3;i++){
			matriz[i][j]=new int[size];
		}
	}
	return matriz
}//crearMatriz

void imprimirMatriz(int*** matriz, int size){

}//imprimirMatriz
