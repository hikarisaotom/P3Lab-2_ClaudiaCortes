#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int menu();//Metodo que retorna la opcion del menu.
int Num_Triangular(int);
int Pedir_Numero();
int Sub_Menu();
int main ()
{
	int Opcion=9;
	while ((Opcion=menu())!=5){
		switch(Opcion){
			case 1://Numero triangular.
				if (Num_Triangular(Pedir_Numero())){
					cout<<"Su Numero es triangular";
				}else{
					cout<<"Su Numero no es Triangular";
				}//FIn del if.
			break;
		}//FIn del switch;
	}//Fin del while de respuesta de usuario.
	cout<<"Saliendo del porgrama..."<<endl;

	return 0;
}//Fin del main.

int Sub_Menu(){
	int Opcion=0;
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
		<<"2-Angulos" <<endl<< "3- Numeros de catalan"<<endl<<"5-Salir";
		cin>>Opcion;

		if(Opcion<=0||Opcion>5){
			cout<<"Opcion invalida";
		}//FIn del if.

	}//FIn del while respuesta de usuario.
	return Opcion;
}//FIn del metodo Menu.
