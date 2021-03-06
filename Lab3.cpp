#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

int main();

bool menu();

void ruffini();

void fechas();

int*** crearMatriz(int);

void limpiarMatriz(int***, int);

void imprimirMatriz(int***,int,int);

string calculofechas(int,int,int,int);

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
	cout<<endl;	
	if(opcion==1){
		return true;
	}else if(opcion==2){
		ruffini();
		return true;
	}else if(opcion==3){
		fechas();
		return true;
	}else if(opcion==4){
		return false;
	}else{
		cout<<"Numero Invalido";
		return true;
	}//if y elses
}//menu

void ruffini(){
	cout<<"Ingrese el grado mas alto del polinomio: ";
	int grado;
	cin>>grado;
	int contador = grado;
	int*** matriz = crearMatriz(grado+1);
	while(contador>=0){
		cout<<"Ingrese el valor de x^"<<contador<<": ";
		int valor;
		cin>>valor;
		for(int i=0;i<grado+1;i++){
			matriz[i][0][grado-contador]=valor;
		}//for
		contador--;
	}//while
	int a;
	cout<<"Ingrese a: ";
	cin>>a;
	for(int i=0;i<grado+1;i++){
		if(i==0){
			for(int j=0;j<grado+1;j++){				
				matriz[j][2][i]=matriz[j][i][i];
			}//for j
		}else{
			for(int j=i;j<grado+1;j++){
				matriz[j][1][i]=matriz[j][2][i-1]*a;
				matriz[j][2][i]=matriz[j][0][i]+matriz[j][1][i];
			}//for j
		}//if else
	}//for
	cout<<"El cociente es: ";
	for(int i=0;i<grado;i++){
		if(i==grado-1){
			cout<<matriz[grado][2][grado-1]<<endl;
		}else{
			cout<<matriz[grado][2][i]<<"x^"<<grado-1-i<<" + ";
		}//if
	}//for
	cout<<"El recipiente es: "<<matriz[grado][2][grado]<<endl;
	cout<<"------------------------------"<<endl;
	imprimirMatriz(matriz,grado+1,a);
	limpiarMatriz(matriz, grado+1);
}//ruffini

int*** crearMatriz(int size){
	int*** matrix = new int**[size];
	for(int i=0;i<size;i++){
		matrix[i]= new int*[3];
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<3;j++){		
			matrix[i][j]=new int[size];
		}
	}
	return matrix;
}//crearMatriz

void limpiarMatriz(int*** matrix, int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<3;j++){			
			delete [] matrix[i][j];
			matrix[i][j]=NULL;
		}//for j
	}//for i
	for(int i=0;i<size;i++){
		delete[] matrix[i];
		matrix[i]=NULL;
	}//for i
	delete[] matrix;
}//LimpiarMatriz

void imprimirMatriz(int*** matrix,int size,int a){
	for(int i=0;i<size;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<size;k++){
				cout<<matrix[i][j][k]<<" ";
			}//for k
			if(j!=2){
				cout<<"| ";
				if(j==0){
					cout<<a;
				}else{
					cout<<endl<<"-----------------------";	
				}//if else
			}//if
			cout<<endl;
		}//for j
		cout<<"-------------------------------"<<endl;
	}//for i
}//imprimirMatriz

void fechas(){
	int bandera=0;
	vector <string> dates;
	do{
		cout<<"1.Agregar Fecha"<<endl
		    <<"2.Listar Todo"<<endl
			<<"3.Listar Ordenado"<<endl
			<<"4.Volver al menu"<<endl
			<<"Ingrese una opcion: ";		
		cin>>bandera;
		if(bandera==1){
			cout<<"Ingrese una cadena: ";
			string fecha;
			cin>>fecha;
			while(fecha.size()!=8){
				cout<<"Formato no valido: ";
				cin>>fecha;
			}//while
			int ano = atoi((fecha.substr(0,2)).c_str());
			int ano2 = atoi((fecha.substr(2,2)).c_str());
			int mes = atoi((fecha.substr(4,2)).c_str());
			int	dia = atoi((fecha.substr(6,2)).c_str());
			if(mes<0&&mes>13){
				if(dia<0&&dia>32){
					if((mes == 2 || mes == 4 ||mes == 6 || mes == 9 || mes == 11)&& dia==31){
						cout<<"La fecha ingresada no existe."<<endl;
					}else{
						if(mes==2){
							if(ano2%4){
								if(dia<30){
					
								}else{
									cout<<"La fecha ingresada no existe."<<endl;
								}//if dia febrero possible
							}else{
								if(dia<29){
							
								}else{
									cout<<"La fecha ingresada no existe."<<endl;
								}//if dia febrero possible
							}//if año bisiestro
						}else{
							
						}//if febrero
					}//if dia del mes possible
				}else{
					cout<<"La fecha ingresada no existe,"<<endl;
				}//if dia possible
			}else{
				cout<<"La fecha ingresada no existe."<<endl;
			}//if mes possible
		}else if(bandera==2){
		
		}else if(bandera==3){

		}else if(bandera==4){
		
		}else{
			cout<<"Opcion no valida."<<endl;
		}//if elses
	}while(bandera!=4);
}//fecha
//ano = año

string calculofecha(int ano, int ano2,int mes, int dia){
	return "";
}//calculofechas
