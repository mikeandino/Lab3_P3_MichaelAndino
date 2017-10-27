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

bool menu(){
	cout<<"Programacion 3 Laboratorio 3"<<endl
		<<"  Numero 1: Poda y Busca"<<endl
		<<"  Numero 2: Teorema de Rufinni"<<endl
		<<"  Numero 3: Vector de Fechas"<<endl
		<<"  Numero 4: Salir"<<endl
		<<"  Ingrese su opcion: ";
	int opcion = 0;
	cin>>opcion;
	if(opcion==1){

	}else if(opcion==2){
		
	}else if(opcion==3){

	}else if(opcion==4){
		return false;
	}else{
		cout<<"Numero Invalido";
	}//if y elses
}//menu

int*** crearMatriz(int size){
	int*** matriz = new int**[size];
	for(int i=0;i<size;i++){
		matriz[i]=new int*[3];
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<3;i++){
			matriz[i][j]=new int[size];
		}//for
	}//for
	return matriz;
}//crearMatriz

void imprimirMatriz(int*** matriz, int size){

}//imprimirMatriz
