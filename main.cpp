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
void RecursivaPascal(int n, int max_n, int res_anterior[], int salida[]) {
	if(n==max_n) {

	} else {
		for(int i=0; i < n ; i++) {
			if(i == 0 || i==n-1) {
				salida[i]=1;
			} else {
				salida[i]= res_anterior[i-1] + res_anterior[i];
			}
		}
		for(int i=0; i < n; i++) {
			res_anterior[i]=salida[i];
			cout << salida [i] << " ";
			salida[i]=0;
		}
		cout << endl;
		RecursivaPascal(n+1,max_n,res_anterior,salida);
	}
}

void GraficoBarra() {
	int tamano=10;
	char caracterOscuro=177,caracterClaro=178;
	int arreglo1[tamano];
	int arreglo2[tamano];
	for(int i=0; i < tamano; i++) {
		arreglo1[i]= 1 + rand()%20;
		arreglo2[i]= 1 + rand()%20;
	}
	cout<< "Arreglo 1: ";
	mostrarArreglo(arreglo1,tamano);
	cout<< "Arreglo 2: ";
	mostrarArreglo(arreglo2,tamano);
	//JAJAJAJ disculpame me mame :v lo pude hacer en 10 lineas pero era muy tarde 
	for(int i=0; i < tamano; i++) {
		cout<<i+1<<"- "<<endl;
		switch(arreglo1[i]) {
			case 1: {
				cout<< caracterClaro << " ";
				cout<<endl;
				break;
			}
			case 3: {
				for(int i=0; i < 3; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 5: {
				for(int i=0; i < 5; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 7: {
				for(int i=0; i < 7; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 9: {
				for(int i=0; i < 9; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 11: {
				for(int i=0; i < 11; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 13: {
				for(int i=0; i < 13; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 15: {
				for(int i=0; i < 15; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 17: {
				for(int i=0; i < 17; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 19: {
				for(int i=0; i < 19; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
		}
		//cout<<endl;
		switch(arreglo1[i]) {
			case 2: {
				for(int i=0; i < 2; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 4: {
				for(int i=0; i < 4; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 6: {
				for(int i=0; i < 6; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 8: {
				for(int i=0; i < 8; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 10: {
				for(int i=0; i < 10; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 12: {
				for(int i=0; i < 12; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 14: {
				for(int i=0; i < 14; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 16: {
				for(int i=0; i < 16; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 18: {
				for(int i=0; i < 18; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
			case 20: {
				for(int i=0; i < 20; i++) {
					cout<< caracterClaro << " ";
				}
				cout<<endl;
				break;
			}
		}
		//Arreglo2
		switch(arreglo2[i]) {
			case 1: {
				cout<< caracterOscuro << " ";
				cout<<endl;
				cout<<endl;
				break;
			}
			case 3: {
				for(int i=0; i < 3; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 5: {
				for(int i=0; i < 5; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 7: {
				for(int i=0; i < 7; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 9: {
				for(int i=0; i < 9; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 11: {
				for(int i=0; i < 11; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 13: {
				for(int i=0; i < 13; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 15: {
				for(int i=0; i < 15; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 17: {
				for(int i=0; i < 17; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 19: {
				for(int i=0; i < 19; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
		}
		switch(arreglo2[i]) {
			case 2: {
				for(int i=0; i < 2; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 4: {
				for(int i=0; i < 4; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 6: {
				for(int i=0; i < 6; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 8: {
				for(int i=0; i < 8; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 10: {
				for(int i=0; i < 10; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 12: {
				for(int i=0; i < 12; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 14: {
				for(int i=0; i < 14; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 16: {
				for(int i=0; i < 16; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 18: {
				for(int i=0; i < 18; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
			case 20: {
				for(int i=0; i < 20; i++) {
					cout<< caracterOscuro << " ";
				}
				cout<<endl;
				cout<<endl;
				break;
			}
		}
	}
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
	for(int i=0; i < tamano; i++) {
		double auxiliar=arreglo[i]-promedio;
		if(auxiliar < 0) {
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
				int max_n,n=1;
				int res_anterior[100];
				int salida[100];
				cout << "Ingrese el valor maximo: "<< endl;
				cin >> max_n;
				while(max_n <= 0 || max_n >= 100) {
					cout << "El dato introducido no es valido, intentelo de nuevo!" << endl;
					cout << "Ingrese el valor maximo: "<< endl;
					cin >> max_n;
				}
				cout<<"Triangulo de Pascal:"<<endl;
				RecursivaPascal(n,max_n+2,res_anterior,salida);
				break;
			}
			case 2: {
				cout << "La respuesta es: "<< DesviacionEstandar() <<endl;
				break;
			}
			case 3: {
				GraficoBarra();
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