#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

int main();

bool menu();

void ruffini();

int ejercicio1();


int fechas();

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
		ruffini()
	}else if(opcion==3){

	}else if(opcion==4){
		return false;
	}else{

		cout<<"Numero Invalido";
	}//if y elses
}//menu

void ruffini(){
	cout<<"Ingrese el grado mas alto del polinomio: ";
	int grado;
	cin>>grado;
	int*** matriz;
	matriz = new int**[grado+1];
	for(int i=0;i<grado+1;i++){
		matriz[i]=new int*[grado+1];
	}//for i
	for(int i=0;i<grado+1;i++){
		for(int j=0;j<3;j++){
			matriz[i][j]=new int[grado+1];
		}//for j
	}//for i
	int a;
	cout<<"Ingrese a: ";
	cin>>a;
	
}//ruffini

void limpiarMatriz(int*** matriz, int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){			
			delete [] matriz[i][j];
			matriz[i][j]=NULL;
		}//for j
		delete[] matriz[i];
		matriz[i]=NULL;
	}//for i
	matriz=NULL;
	delete matriz;
}//LimpiarMatriz

void fecha(){
	cout<<"Ingrese una cadena: ";
	string fechas;
	cin>>fechas;
	vector <string> dates;
	string ano="";
	string mes="";
	string dia="";
	ano+=fechas.at(0);
	ano+=fechas.at(1);
	ano+=fechas.at(2);
	ano+=fechas.at(3);
	mes+=fechas.at(4);
	mes+=fechas.at(5);	
	dia+=fechas.at(6);
	dia+=fechas.at(7);
	int ano2 (c.str(ano));
	int mes2 (c.str(mes));
	int	dia2 (c.str(dia));


}//fecha
//ano = año
//vector.push_back(yada yada);
//vector.remove(int);
//vector.insert(int, yada yada);

void imprimirMatriz(int*** matriz, int size){

}//imprimirMatriz
