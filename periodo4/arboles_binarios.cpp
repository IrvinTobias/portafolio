#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo {
	int dato;
	Nodo *der;
	Nodo *izq;
};


Nodo *crearNodo(int n);
void insertarNodo(Nodo *&arbol,int);
void menu();
void mostrarArbol(Nodo *arbol, int contador);

Nodo *arbol = NULL;

int main() {
	
	menu();
}

void menu() {
	int dato, opcion, contador = 0;
	
	do {
		
		cout << "1. Insertar un nuevo nodo" << endl;
		cout << "2. Imprimir arbol" << endl;
		cout << "3. Salir" << endl;
		cout << "Opcion:";
		cin >> opcion;
		
		switch(opcion) {
			case 1: cout << "Digite un numero: ";
					cin >> dato;
					insertarNodo(arbol, dato);
					cout << "\n";
					break;
			
			case 2: cout << "Imprimiendo el arbol \n\n" << endl;
					mostrarArbol(arbol, contador);
					cout << "\n";
					break;
		}
		
	} while(opcion != 3);
}

Nodo *crearNodo(int n) {
	
	Nodo *nuevoNodo = new Nodo();
	
	nuevoNodo->dato = n;
	nuevoNodo->der = NULL;
	nuevoNodo->izq = NULL;
	
	return nuevoNodo;
}

void insertarNodo(Nodo *&arbol, int n) {
	if (arbol == NULL) {
		Nodo *nuevoNodo = crearNodo(n);
		arbol = nuevoNodo;
	} else {
		int raiz = arbol->dato;
		if (n < raiz) {
			insertarNodo(arbol->izq, n);
		} else {
			insertarNodo(arbol->der, n);
		}
	}
}


void mostrarArbol(Nodo *arbol, int contador) {
	
	if (arbol == NULL) {
		return;
	} else {
		mostrarArbol(arbol->der, contador + 1);
		for(int i = 0; i < contador; i++) {
			cout << "   ";
		}
		cout << arbol->dato << endl;
		mostrarArbol(arbol->izq, contador + 1);
	}
}

