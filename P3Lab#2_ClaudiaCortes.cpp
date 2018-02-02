#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int menu();//Metodo que retorna la opcion del menu.
int Num_Triangular(int);
int Pedir_Numero();
int Sub_Menu();
void Numero_Cercano(int);
int main ()
{
	int Opcion=9;
	while ((Opcion=menu())!=5){
		switch(Opcion){
			case 1://Numero triangular.
				int Sub_Opcion=Sub_Menu();
				if (Sub_Opcion==1){
					if (Num_Triangular(Pedir_Numero())){
						cout<<"Su Numero es triangular";
					}else {
						cout<<"Su Numero no es Triangular";
					}//FIn del if.
				}else if (Sub_Opcion==2){
					int Aleatorio=rand() % 100 + 1;
					cout<<"El Numero es: "<<Aleatorio;
					if (Num_Triangular(Aleatorio)){
					cout<<"NUmero Triangular";
					}else{
					cout<<"NUmero NO Triangular";
					}//Fin del if
				}else{//Numero mayor mas cercano.
				Numero_Cercano(Pedir_Numero());
				}
			break;
		}//FIn del switch;
	}//Fin del while de respuesta de usuario.
	cout<<"Saliendo del porgrama..."<<endl;

	return 0;
}//Fin del main.
void Numero_Cercano(int Num_Evaluar){
	int Acum_Filas=0;
	int Limite=0;
	for(int i=0;i<Num_Evaluar;i++){
		Acum_Filas=Acum_Filas+i;
		if (Acum_Filas==Num_Evaluar){
			Limite=i-1;
			break;
		}else if (Acum_Filas>Num_Evaluar){
			Limite=i-1;
			break;
		}//FIn del If
	}//Fin del for.
	
	Acum_Filas=0;
	for (int i=0;i<=Limite;i++){
	Acum_Filas=Acum_Filas+i;
	}//FIn del for
	cout<< "El triangular mas cercano es "<<Acum_Filas<<endl;
}//Fin del Metodo.

int Sub_Menu(){
	 int Opcion=0;
	 while (Opcion<=0||Opcion>3){
		 cout << "NUMEROS TRIANGULARES"<<endl
		<< "1-Ingresar un numero."<<endl
		 <<"2-Numero alateorio" <<endl<< "3-Mayor Numero triangular a la izquierda"<<endl;
		 cin>>Opcion;
	    	if(Opcion<=0||Opcion>5){
			cout<<"Opcion invalida";													                 }//FIn del if.
	}//FIn del while respuesta de usuario.
	return Opcion;
}//Fin del Metodo.

int Pedir_Numero(){
	int Numero_Validar=-1;
	while(Numero_Validar<=0){
		cout<<"Ingrese un numero: ";
		cin>>Numero_Validar;
	}//FIn de la validacion del numero.
	
	return Numero_Validar; 
}//FIn del metodo.

int Num_Triangular(int Numero_Validar){
	int Acumulador_Filas=0;
	for(int i=0;i<=Numero_Validar;i++){
		Acumulador_Filas=Acumulador_Filas+i;
		if(Acumulador_Filas==Numero_Validar){
			return 1;//ESTO DEPENDERA DEL COMPILADOR
		}else if (Acumulador_Filas>Numero_Validar){
			return 0;
		}//Fin del If.	
	}//FIn del for

	return 0;//O es false y 1 es True en este Compilador
}//Fin del metodo.

int menu(){//Metodo que retorna la opcion del menu.
	int Opcion=0;
	while (Opcion<=0||Opcion>5){
		cout << "Bienvenido al menu de Inicio del Lab #2 P3:"<<endl
		<<"Seleccione una opcion"<<endl<< "1-Numeros triangulares."<<endl
		<<"2-Angulos" <<endl<< "3- Numeros de catalan"<<endl<<"5-Salir"<<endl;
		cin>>Opcion;

		if(Opcion<=0||Opcion>5){
			cout<<"Opcion invalida";
		}//FIn del if.

	}//FIn del while respuesta de usuario.
	return Opcion;
}//FIn del metodo Menu.
