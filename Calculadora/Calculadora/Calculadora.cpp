#include <iostream>
#include <string>
#include <cstdlib>
//Declaramos prototipos de funciones
using namespace std;
void menu();
int suma();
int resta();
int multi();
int division();
void pausa();
int main()
{
	menu();
	return 0;
}
//Creamos funciones
void menu()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "Calculadora con Funciones: " << endl;
		cout << "---------------------------" << endl;
		cout << "\t1.- Sumar" << endl;
		cout << "\t2.- Resta" << endl;
		cout << "\t3.- Multiplicacion" << endl;
		cout << "\t4.- Dividir" << endl;
		cout << "\t5.- Salir" << endl;
		cout << "Elige una Opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		 case '1':
			system("cls");
			cout << "Has elegido sumar.\n";
			pausa();
			break;
		 case '2':
			system("cls");
			cout << "Has elegido restar.\n";
			pausa();
			break;
		 case '3':
			system("cls");
			cout << "Has elegido multiplicar.\n";
			pausa();
			break;
		 case '4':
			system("cls");
			cout << "Has elegido dividir.\n";
			pausa();
			break;
		 case '5':
			bandera = true;
			//exit(1);
			break;
		 default:
			system("cls");
			cout << "Opcion no valida.\a\n";
			pausa();	
		}
	} while (bandera != true);
}
//desarrolamos la funcion
void pausa()
{
	cout << "Pulsa para continuar... " << endl;
	getwchar();
	getwchar();
}
int suma()
{
	int a, b, suma;
	cout << "Primer valor: ";
	cin >> a;
	cout << "Segundo valor: ";
	cin >> b;
	suma = a + b;
	cout << "La suma es : " << suma;
	pausa();
	return 0;
}