#include <iostream>
#include <cmath>

// IRVIN TOBIAS TM100415

using namespace std;

// PROTOTIPOS
void pedirLadosTriangulo();
void determinarTipoTriangulo(double lado1, double lado2, double lado3);
void calcularAreaEquilatero(double lado);
void calcularAreaEscaleno(double lado1, double lado2, double lado3);
void calcularAreaIsosceles(double lado, double base);

void pedirNumeros();
void mostrarNumeroMayor(double num1, double num2, double num3, double num4, double num5);
double determinarMayor(double n1, double n2);


void calcularPromedio();

int main() {
	
	// DESCOMENTAR UNICAMENTE LA FUNCION QUE SE DESEA EJECUTAR
	
	//pedirLadosTriangulo();
	pedirNumeros();
	//calcularPromedio();
}

// IMPLEMENTACIONES

// TRIANGULOS 
void pedirLadosTriangulo() {
	cout << "Ingrese los lados de un triangulo." << endl;
	double lado1;
	double lado2;
	double base;
	cout << "Ingrese lado1: ";
	cin >> lado1;
	cout << "Ingrese lado2: ";
	cin >> lado2;
	cout << "Ingrese la base: ";
	cin >> base;
	determinarTipoTriangulo(lado1, lado2, base);
}

void determinarTipoTriangulo(double lado1, double lado2, double base) {
	if (lado1 == lado2 && lado2 == base){
		cout << "Su trinagulo es equilatero" << endl;
		calcularAreaEquilatero(lado1);
	} else if (lado1 != lado2 && lado2 != base && lado1 != base ) {
		cout << "Su trinagulo es escaleno" << endl;
		calcularAreaEscaleno(lado1, lado2, base);
	} else {
		cout << "Su trinagulo es isosceles" << endl;
		calcularAreaIsosceles(lado1, base);
	}
}

void calcularAreaEquilatero(double lado) {
	double area = (sqrt(3) * lado * lado) / 4;
	cout << "El area del triangulo es: " << area << endl;
}

void calcularAreaEscaleno(double lado1, double lado2, double base) {
	double semiPerimetro = (lado1 + lado2 + base) / 2;
	double producto = (semiPerimetro - lado1) * (semiPerimetro - lado2) * (semiPerimetro - base);
	double area = sqrt(semiPerimetro * producto);
	cout << "El area del triangulo es: " << area << endl;
}

void calcularAreaIsosceles(double lado, double base) {
	double area = (base * sqrt(lado*lado - ((base * base) / 4))) / 2;
	cout << "El area  del triangulo es: " << area << endl;
}


// NUMERO MAYOR 
void pedirNumeros() {
	double num1, num2, num3, num4, num5;
	cout << "Ingrese cinco numeros para indicar el mayor de todos" << endl;
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	cout << "Ingrese el tercer numero: ";
	cin >> num3;
	cout << "Ingrese el cuarto numero: ";
	cin >> num4;
	cout << "Ingrese el quinto numero: ";
	cin >> num5;
	mostrarNumeroMayor(num1, num2, num3, num4, num5);
}

void mostrarNumeroMayor(double num1, double num2, double num3, double num4, double num5) {
	double numA = determinarMayor(determinarMayor(num1, num2), determinarMayor(num3, num4));
	double numeroMayor = determinarMayor(numA, num5);
	cout << "El numero mayor es: " << numeroMayor << endl;
}

double determinarMayor(double n1, double n2) {
	double mayor;
	if (n1 >= n2) {
		mayor = n1;
	} else {
		mayor = n2;
	}
	return mayor;
}


// VALOR PROMEDIO
void calcularPromedio() {
	cout << "Ingrese la cantidad de numeros a digitar: ";
	int cantidadNumeros;
	cin >> cantidadNumeros;
	double suma = 0.0;
	double numero;
	for (int i = 0; i < cantidadNumeros; i++) {
		cout << "Ingrese un numero: ";
		cin >> numero;
		suma += numero;
	}
	cout << "El promedio de los numeros es: " << suma / cantidadNumeros << endl;
}

