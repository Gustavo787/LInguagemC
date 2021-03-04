#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Cálculo da média
	@author Professor José de Assis
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	printf("Cálculo da média\n");
	//variáveis
	float nota1,nota2,media;
	//entrada
	printf("Digite a nota 1: ");
	scanf("%f",&nota1);
	printf("Digite a nota 2: ");
	scanf("%f",&nota2);
	//processamento
	media = (nota1 + nota2) / 2;
	//saída
	printf("Resultado: %.1f\n", media);
	system("pause");
	return 0;
}
