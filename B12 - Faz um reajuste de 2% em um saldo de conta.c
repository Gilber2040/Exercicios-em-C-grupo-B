#include <stdio.h>
#include <stdlib.h>

main(void)
{
	float saldo, saldo2;
	printf("Digite seu saldo: ");
	scanf("%f", &saldo);
	saldo2 = saldo + saldo * 0.02;
	printf("Saldo com reajuste: %f\n\n\n", saldo2);
	
	system("pause");
	return 0;
}
