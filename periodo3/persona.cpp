#include <iostream>
#include <string>

// IRVIN OBED TOBIAS MENDEZ TM100415

using namespace std;

class Persona {
	public:
		Persona(string nombres, string apellidos, int anioNacimiento);
		void nombreCompleto();
		void edad(int anioActual);
		
	private:
		string nombres;
		string apellidos;
		int anioNacimiento;
};

Persona::Persona(string nombres, string apellidos, int anioNacimiento) {
	this->nombres = nombres;
	this->apellidos = apellidos;
	this->anioNacimiento = anioNacimiento;
}

void Persona::nombreCompleto() {
	cout << "Nombre completo: " << this->nombres << " " << this->apellidos << endl;
}

void Persona::edad(int anioActual) {
	int edad;
	edad = anioActual - this->anioNacimiento;
	cout << "Edad: " << edad << " anios" << endl;
}

int main() {
	Persona persona("Irvin Obed", "Tobias Mendez", 1998);
	persona.nombreCompleto();
	persona.edad(2021);
}
