#include <iostream>
#include <string>

// IRVIN OBED TOBIAS MENDEZ TM100415

using namespace std;

class CuentaBancaria {
	public:
		CuentaBancaria(int numeroCuenta, string nombreTitular);
		void getSaldo() const;
		void getNumeroCuenta() const;
		void getNombreTitular() const;
		void depositar(double importeDeposito);
		void retirar(double importeRetiro);
		
	private:
		int numeroCuenta;
		string nombreTitular;
		double saldo;
};

CuentaBancaria::CuentaBancaria(int numeroCuenta, string nombreTitular) {
	this->numeroCuenta = numeroCuenta;
	this->nombreTitular = nombreTitular;
	this->saldo = 0.0;
}

void CuentaBancaria::depositar(double importeDeposito) {
	if (importeDeposito > 0) {
		this->saldo += importeDeposito;
		this->getSaldo();
	}
}

void CuentaBancaria::retirar(double importeRetiro) {
	if (importeRetiro > 0 && saldo >= importeRetiro) {
		cout << "Retirando $" << importeRetiro << " de la cuenta." << endl;
		this->saldo -= importeRetiro;
		this->getSaldo();
	}
}

void CuentaBancaria::getNombreTitular() const {
	cout << "Nombre del titular: " << this->nombreTitular << endl;
}

void CuentaBancaria::getSaldo() const {
	cout << "Saldo actual de la cuenta: $" << this->saldo << endl;
}

void CuentaBancaria::getNumeroCuenta() const {
	cout << "Numero de cuenta: " << this->numeroCuenta << endl;
}

int main() {
	CuentaBancaria cuenta(1, "Irvin Tobias");
	cuenta.getNumeroCuenta();
	cuenta.getNombreTitular();
	cuenta.depositar(1000);
	cuenta.retirar(500);
}


