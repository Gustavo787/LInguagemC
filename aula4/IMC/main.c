#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
    Cálculo do IMC
    @Gustavo dos Santos
*/
int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
printf("d888888b.88b  d88.  .o88b. \n");
printf(" `88'   88'YbdP`88 d8P  Y8\n");
printf("  88    88  88  88 8P \n");    
printf("  88    88  88  88 8b \n");    
printf(" .88.   88  88  88 Y8b  d8 \n");
printf("Y888888PYP  YP  YP  `Y88P' \n");
printf("\n\n");
//Varaiaveis
float imc,peso,altura;
//entrada
printf("Digite o seu peso em kg: ");
scanf("%f",&peso);
printf("Digite a sua altura em metos: ");
scanf("%f",&altura);
//processamento
imc = peso / (altura * altura);
//saida
printf("IMC: %.2f\n", imc);
//Status de acordo com a tabele do IMC
if (imc < 17){
	printf("Muito abaixo do peso\n");
} else if (imc < 18.5){
	printf("Abaixo do peso\n");
} else if (imc < 25){
	printf("Peso normal\n");
} else if (imc < 30){
	printf("Acima do peso\n");
} else if(imc < 35){
	printf("Obesidade I\n");
} else if(imc < 40){
	printf("Obesidade II (Severa)\n");
} else {
    printf("Obesidade III (Mórbida)\n");
}
system("pause");
return 0;

}
