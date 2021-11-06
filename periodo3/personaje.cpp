#include <iostream>
#include <string>

// IRVIN OBED TOBIAS MENDEZ TM100415

using namespace std;

class Personaje {
	public:
		Personaje(string nombre, int puntosVida);
		void recibirGolpe(int puntosPerdidos);
		bool estaVivo();
		void getPuntosVida();
		void getNombre();
		void comer(int puntosGanados);
		
	private:
		string nombre;
		int puntosVida;
};

Personaje::Personaje(string nombre, int puntosVida) {
	this->nombre = nombre;
	this->puntosVida = puntosVida;
}

void Personaje::recibirGolpe(int puntosPerdidos) {
	if (puntosPerdidos > 0) {
		cout << this->nombre << " recibio  un golpe que la causo un danio de " << puntosPerdidos << " puntos" << endl;
		this->puntosVida -= puntosPerdidos;
		if (puntosVida < 0) puntosVida = 0;
		if (!this->estaVivo()){
			cout << "Oh no!, " << this->nombre << " ha muerto... :(" << endl;
		}
		this->getPuntosVida();
	}
}

bool Personaje::estaVivo() {
	if (this->puntosVida > 0) {
		return true;
	} else {
		return false;
	}
}

void Personaje::getPuntosVida() {
	cout << "Puntos de vida actuales: " << this->puntosVida << endl;
}

void Personaje::getNombre() {
	cout << "Nombre: " << this->nombre << endl;
}

void Personaje::comer(int puntosGanados) {
	if (this->estaVivo() && puntosGanados > 0) {
		cout << this->nombre << " ha recuperado " << puntosGanados << " puntos" <<endl;
		this->puntosVida += puntosGanados;
		this->getPuntosVida();
	} else {
		cout << "No se puede revivir a un personaje fallecido :(" << endl;
	}
}

int main() {
	Personaje personaje("Kratos", 100);
	personaje.getNombre();
	personaje.estaVivo();
	personaje.getPuntosVida();
	personaje.recibirGolpe(50);
	personaje.comer(25);
	personaje.recibirGolpe(80);
	personaje.comer(60);
}
