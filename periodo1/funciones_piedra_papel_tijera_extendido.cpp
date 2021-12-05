#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

// AUTOR: IRVIN TOBIAS TM100415

// PROTOTIPOS
int pedirMovimientoJugador();
int generarMovimientoComputadora();
void mostrarMovimientoComputadora(int numMovimiento);
void mostrarGanador(int movJugador, int movComputadora);

using namespace std;

int main() {
	mostrarGanador(pedirMovimientoJugador(), generarMovimientoComputadora());
}

// IMPLEMENTACION
int pedirMovimientoJugador() {
	int movJugador; 
	cout << "PIEDRA, PAPEL O TIJERA + LAGARTO-SPOCK" << endl;
	cout << "Seleccione su movimiento: 1-Piedra 2-Papel 3-Tijera 4-Lagarto 5-Spock" << endl;
	cin >> movJugador;
	return movJugador;
}

int generarMovimientoComputadora() {
	srand(time(0));
	int nunMovimiento = rand() % 5 + 1;
	return nunMovimiento;
}

void mostrarMovimientoComputadora(int numMovimiento) {
	string movimiento;
	switch(numMovimiento) {
		case 1:
			movimiento = "Piedra";
			break;
		case 2:
			movimiento = "Papel";
			break;
		case 3:
			movimiento = "Tijera";
			break;
		case 4:
			movimiento = "Lagarto";
			break;
		case 5:
			movimiento = "Spock";
			break;
	}
	cout << "La computadora escogio: " << movimiento << endl;
}

void mostrarGanador(int movJugador, int movComputadora) {
	mostrarMovimientoComputadora(movComputadora);
	
	if (movJugador == movComputadora) {
		cout << "Empate";  
	} else if ((movJugador == 1) && (movComputadora == 3 || movComputadora == 4)) { 
		cout << "Ganaste";
	} else if ((movJugador == 2) && (movComputadora == 1 || movComputadora == 5)) {
		cout << "Ganaste";
	} else if ((movJugador == 3) && (movComputadora == 2 || movComputadora == 4)) {
		cout << "Ganaste";
	} else if ((movJugador == 4) && (movComputadora == 5 || movComputadora == 2)) {
		cout << "Ganaste";
	} else if ((movJugador == 5) && (movComputadora == 3 || movComputadora == 1)) {
		cout << "Ganaste";
	} else {
		cout << "Perdiste";
	}
}
