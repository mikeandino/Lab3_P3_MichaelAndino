#include <iostream>
#include <string>
using namespace std;

int main();

bool menu();

int ejercicio1();

int ejercicio2();

int ejercicio3();

int*** crearMatriz(int);

void imprimirMatriz(int***,int);

int main(){
	while(menu()){
		cout<<endl;
	}
	return 0;
}//main

void menu(){
	cout<<"Programacion 3 Laboratorio 3"<<endl
		<<"  Ejercicio 1: Poda y Busca"<<endl
		<<"  Ejercicio 2: Teorema de Rufinni"<<endl
		<<"  Ejercicio 3: Vector de Fechas"<<endl
		<<" Salir: 4 "<<endl
		<<" Ingrese su opcion: ";
	int opcion = 0;
	cin<<opcion;
	if(opcion==1){

	}else if(opcion==2){
		
	}else if(opcion==3){

	}else if(opcion==4){

	}else{
		cout<<"Numero Invalido";
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
