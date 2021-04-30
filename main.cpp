#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>
using namespace std;
int menu() {
	while(true) {
		cout <<" Menu "<<endl
		     <<"1. Triangulo de Pascal: "<<endl
		     <<"2. Desviacion Estandar: "<<endl
		     <<"3. Grafica de Barra: "<<endl
		     <<"4. Salir"<<endl
		     <<"Ingrese una opcion: ";
		int valor;
		cin>>valor;
		if(valor > 0 && valor < 5)
			return valor;
	}
}

void mostrarArreglo(int arreglo[], int tamano) {
	for (int i = 0; i < tamano; i++)
		cout << "[" << arreglo[i]<<"]";
	cout << endl;
}

int RecursivaPascal(int n, int max_n, int res_anterior[], int salida[],int tamano) {
	if(n==0 || n==max_n)	
		return 1;
	else if(n==1 || (n+1)==max_n){
		
	}
	return max_n;
	//else return RecursivaPascal(max_n-1, n-1,res_anterior[100],salida[100])+RecursivaPascal(max_n-1,n,res_anterior[100],salida[100]));
}

double DesviacionEstandar() {
	const int tamano=20;
	int arreglo[tamano];
	srand(time(0));
	for(int i=0; i < tamano; i++) {
		arreglo[i]= 1 + rand()%100;
	}
	double promedio;
	for(int i=0; i < tamano; i++) {
		//sumamos los elementos
		promedio += arreglo[i];
	}
	//dividimos el promedio entre el tamaño
	promedio /= tamano;
	double resultado;
	for(int i=0; i < tamano; i++){
		double auxiliar=arreglo[i]-promedio;
		if(auxiliar < 0){
			auxiliar*=-1;
		}
		auxiliar*=auxiliar;
		resultado+= auxiliar;
	}
	mostrarArreglo(arreglo,tamano);
	double auxiliar2;
	double resultadoFinal;
	auxiliar2 = resultado/tamano;
	resultadoFinal = sqrt(auxiliar2);
	return resultadoFinal;
}

int main(int argc, char** argv) {
	int opcion=0;
	while(opcion != 4) {
		switch(opcion=menu()) {
			case 1: {
				//triangulo de pascal
				int max_n,tamano=100;
				cout << "Ingrese el valor maximo: "<< endl;
				cin >> max_n;
				while(max_n < 0 || max_n >= 100) {
					cout << "El dato introducido no es valido, intentelo de nuevo!" << endl;
					cout << "Ingrese el valor maximo: "<< endl;
					cin >> max_n;
				}
				int res_anterior[tamano];
				int salida[tamano];
				break;
			}
			case 2: {
				cout << "La respuesta es: "<< DesviacionEstandar() <<endl;
				break;
			}
			case 3: {

				break;
			}
			case 4: {
				cout << "¡Gracias por usar el programa!"<<endl;
				break;
			}
			default: {
				cout << "¡Dato introducido no es valido!"<<endl;
				break;
			}
		}
	}
	return 0;
}