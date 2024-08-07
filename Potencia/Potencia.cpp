#include <iostream>

/*

¿Que es una potencia?

Una potencia es el resultado de multiplicar un numero por si mismo, una serie de veces

Al numero que estamos multiplicando se le llama base
La cantidad de veces que multiplicamos ese numero se le llama exponente

lo podemos escribir de la siguiente forma: 2^3 = 8

2*2*2 = 8

*/


int potencia(int base, int exponente) {

	int resultado = 1;
	for (int i = 0; i < exponente; i++) {
		resultado = resultado * base;
	}

	return resultado;

}


int main()
{
	std::cout << "La potencia 2^3 es: " << potencia(2, 3) << std::endl;
	std::cout << "La potencia 5^2 es: " << potencia(5, 2) << std::endl;
	std::cout << "La potencia 2^1 es: " << potencia(2, 1) << std::endl;
	std::cout << "La potencia 2^0 es: " << potencia(2, 0) << std::endl;
}
