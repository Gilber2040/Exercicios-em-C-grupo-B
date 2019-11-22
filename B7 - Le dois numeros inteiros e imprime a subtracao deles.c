#include <stdio.h>
#include <stdlib.h>

main(void)
{
	int n1, n2, sub;
	printf("Digite o numero 1: ");
	scanf("%d", &n1);
	printf("Digite o numero 2: ");
	scanf("%d", &n2);
	sub = n1-n2;
	printf("Resultado da subtracao: %d\n\n", sub);
	
	system("pause");
	return 0;
}
