#include <iostream>
using namespace std;
float suma(float num1, float num2);
float resta(float num1, float num2);
float multiplicacion(float num1, float num2);
float division(float num1, float num2);

int main() {
	int operacion, num1, num2;
	cout << "1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n\n";
	cout << "Elige la operacion que deseas realizar: ";
	cin >> operacion;
	system("cls");
	switch (operacion) {
	case 1: 
		cout << "Ingrese el 1er numero: ";
		cin >> num1;
		cout << "Ingrese el 2do numero: ";
		cin >> num2;
		cout << "El resultado es: " << suma(num1, num2);
		break;
	case 2:
		cout << "Ingrese el 1er numero: ";
		cin >> num1;
		cout << "Ingrese el 2do numero: ";
		cin >> num2;
		cout << "El resultado es: " << resta(num1, num2);
		break;
	case 3:
		cout << "Ingrese el 1er numero: ";
		cin >> num1;
		cout << "Ingrese el 2do numero: ";
		cin >> num2;
		cout << "El resultado es: " << multiplicacion(num1, num2);
		break;
	case 4:
		cout << "Ingrese el 1er numero: ";
		cin >> num1;
		cout << "INgrese el 2do numero: ";
		cin >> num2;
		cout << "El resultado es: " << division(num1, num2);
		break;
	}
	return 0;
}

float suma(float num1, float num2) {
	float resultado;
	resultado = num1 + num2;
	return resultado;
}

float resta(float num1, float num2) {
	int resultado;
	resultado = num1 - num2;
	return resultado;
}

float multiplicacion(float num1, float num2) {
	float resultado;
	resultado = num1 * num2;
	return resultado;
}

float division(float num1, float num2) {
	float resultado;
	resultado = num1 / num2;
	return resultado;
}


