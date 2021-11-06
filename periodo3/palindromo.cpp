#include <iostream>
#include <string>
#include "pila.h"
#include "cola.h"



using namespace std;

string quitarCaracteresEspeciales(string expresion){
	string temp = "";
	
	for (int i = 0; i < expresion.size(); ++i) {
        if ((expresion[i] >= 'a' && expresion[i] <= 'z') || (expresion[i] >= 'A' && expresion[i] <= 'Z') || (expresion[i] >= '0' && expresion[i] <= '9')) {
            temp = temp + expresion[i];
        }
    }
    expresion = temp;
    cout << "SOLO LETRAS Y NUMEROS: " << expresion << endl;
    return expresion; 
}

bool esPalindromo(string expresion) {
	Pila<char> pila;
	Cola<char> cola;
	
	string expre = quitarCaracteresEspeciales(expresion);
	
	for (int i = 0; i < expre.size(); i++) {
		
		char caracter = expre[i];
		pila.push(caracter);
		cola.enqueue(caracter);
	}
	
	for (int i = 0; i < expre.size(); i++) {
		if (pila.pop() != cola.dequeue()) {
			return false;
		}
	}
	
	return true;
}


int main() {
	string expre;
	cout << "Ingrese una palabra para verificar si es palindromo: " << endl;
	std::getline(cin, expre);
	
	if (esPalindromo(expre)) {
		cout << "Es palindromo" << endl;
	} else {
		cout << "No es palindromo" << endl;
	}
}
