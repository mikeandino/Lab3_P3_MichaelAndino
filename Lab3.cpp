#include <iostream>
#include <string>
using namespace std;

int main();

int

int*** crearMatriz(int);

int main(){
		
	return 0;
}//main

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
}//crear matriz

void imprimirMatriz(inint size)
