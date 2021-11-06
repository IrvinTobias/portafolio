#include <iostream>
#include <string>
#include "pila.h"
#include <regex>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::regex;


bool etiquetasAdecuadas(string expresion) {
	Pila<string> pila;
	Lista<string> listaEtiquetas;
	
	regex apertura("<\\w+>");
	regex cierre("|</\\w+>");
	
	
	// CREANDO UNA LISTA DE ETIQUETAS
	while(expresion.size() > 0) {
		cout << "Tamanio " << expresion.size() << endl;
		
		if (expresion.rfind("<", 0) == 0) {
			int pos = expresion.find(">");
			string sub = expresion.substr(0, pos+1);
			listaEtiquetas.adjuntar(sub);
			expresion.erase(0, pos+1);
			cout << "--------" << endl;
			cout << expresion << endl;
			cout << "Tamanio " << expresion.size() << endl;
		} else {
			// QUITANDO LAS PALABRAS DENTRO DE LAS ETIQUETAS
			expresion.erase(0, expresion.find("<"));
		}
			
	}
	
	// LISTA DE ETIQUETAS
	cout << listaEtiquetas.comoCadena() << endl;
	
	div_t resultado = div(listaEtiquetas.tamano(), 2);
	
	if (resultado.rem != 0) return false;
	
	// COMPARANDO LAS ETIQUETAS DE APERTURA Y CIERRE 
	for (int i = 0; i < listaEtiquetas.tamano(); i++) {
		if (regex_match(listaEtiquetas.obtener(i), apertura)) {
			pila.push(listaEtiquetas.obtener(i));
		} else if (regex_match(listaEtiquetas.obtener(i), cierre)) {
			if (pila.estaPilaVacia()) {
				return false;
			}
			string aper = pila.pop();
			string cierr = listaEtiquetas.obtener(i);
			aper.erase(0,1);
			cout << "Se ha quitado (<): " << aper << endl;
			cierr.erase(0,2);
			cout << "Se ha quitado (</): " << cierr << endl;
			
			if (aper != cierr) return false;
		}
	}
	
	return true;
}

int main() {
	
	string expresion;
	cout << "Ingrese las etiquetas html" << endl;
	std::getline(cin, expresion);
	
	if (etiquetasAdecuadas(expresion)) {
		cout << "ETIQUETAS BALANCEADAS" << endl;
	} else {
		cout << "LAS ETIQUETAS NO ESTAN BALANCEADAS" << endl;
	}
}
