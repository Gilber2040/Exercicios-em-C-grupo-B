#include <stdio.h>
#include <stdlib.h>

main(void)
{
	float num, resultado;
	printf("Digite o numero: ");
	scanf("%f", &num);
	resultado = num * num;
	printf("Quadrado do numero: %f\n\n\n", resultado);
	
	system("pause");
	return 0;
}
