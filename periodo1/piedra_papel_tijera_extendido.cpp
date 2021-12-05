#include <iostream> 
#include <string>
#include <cstdlib>
#include <ctime>

// AUTOR: IRVIN TOBIAS TM100415

using namespace std;

int main() {
	
	cout << "Autor: IRVIN TOBIAS TM100415\n";
	
	int movJug; 
	cout << "PIEDRA, PAPEL O TIJERA + LAGARTO-SPOCK" << endl;
	cout << "Seleccione su movimiento: 1-Piedra 2-Papel 3-Tijera 4-Lagarto 5-Spock" << endl;
	
	cin >> movJug;
	
	srand(time(0));
	string movComp; 
	int numMov = rand() % 5 + 1;
	
	switch(numMov) {
		case 1:
			movComp = "Piedra";
			break;
		case 2:
			movComp = "Papel";
			break;
		case 3:
			movComp = "Tijera";
			break;
		case 4:
			movComp = "Lagarto";
			break;
		case 5:
			movComp = "Spock";
			break;
	}
	
	cout << "La computadora escogio: " << movComp << endl;
	
	if (movJug == numMov) {
		cout << "Empate";  
	} else if ((movJug == 1) && (numMov == 3 || numMov == 4)) { 
		cout << "Ganaste";
	} else if ((movJug == 2) && (numMov == 1 || numMov == 5)) {
		cout << "Ganaste";
	} else if ((movJug == 3) && (numMov == 2 || numMov == 4)) {
		cout << "Ganaste";
	} else if ((movJug == 4) && (numMov == 5 || numMov == 2)) {
		cout << "Ganaste";
	} else if ((movJug == 5) && (numMov == 3 || numMov == 1)) {
		cout << "Ganaste";
	} else {
		cout << "Perdiste";
	}
	 
	return 0;
}
