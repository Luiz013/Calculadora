#include <iostream>
#include <cmath>
#include <locale.h>

double soma(double numA, double numB) {
	return numA+numB;
}

double mult(double numA, double numB) {
	return numA*numB;
}

double div(double numA, double numB) {
	return numA/numB;
}
double sub(double numA, double numB) {
	return numA-numB;
}


double expo (double numA, double numB) {
	double numC, resultado;
	numC = 1;
	if (exp == 0){
		return numA;
	}
	else {
		resultado = numA;
		while (numC < numB) {
			resultado = resultado * numA;
			numC = numC + 1;
			}
		return resultado;}
		
}


int main(int argc, char **argv,int base, int exp) {
	
    setlocale(LC_ALL, "Portuguese");

	char operacao;
	double numA, numB;
	double resultados;
	

	std::cout << "Digite um Número:";
	std::cin >> numA;
	std::cout << "Digite a operação:";
	std::cin >> operacao;
	std::cout << "Digite outro Número:";
	std::cin >> numB;
	
		switch (operacao) {
		case '+':
		    resultados = soma(numA, numB);
		    break;
		case '/':
		    resultados = div(numA, numB);
		    break;
		case '*':
		    resultados = mult(numA, numB);
		    break;
		case '-':
		    resultados = sub(numA, numB);
		    break;
		case '^':
			resultados = expo(numA, numB);
			break;
			
			default:
			break;
		      
	}
	
	std::cout << resultados << std::endl;
}
