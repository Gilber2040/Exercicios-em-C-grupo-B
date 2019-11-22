#include <stdio.h>
#include <stdlib.h>

main(void)
{
	float n1, n2, resultado;
	printf("Digite o numero 1: ");
	scanf("%f",&n1);
	printf("Digite o numero 2: ");
	scanf("%f",&n2);
	resultado = n1+n2;
	printf("\nSoma: %f", resultado);
	resultado = n1-n2;
	printf("\nSubtracao: %f", resultado);
	resultado = n1*n2;
	printf("\nMultiplicacao: %f", resultado);
	resultado =n1/n2;
	printf("\nDivisao: %f\n\n\n", resultado);
	
	system("pause");
	return 0;
}
