#include <stdio.h>
#include <stdlib.h>

main(void)
{
	int n1, n2, n3;
	printf("Digite o valor A ");
	scanf("%d",&n1);
	printf("Digite o valor B ");
	scanf("%d",&n2);
	printf("Digite o valor C ");
	scanf("%d",&n3);

	if (n1 == n2 && n2 == n3 && n3 == n1) {
	printf("Os valores compoem um triangulo equilatero\n");
	}
	else if (n1 == n2 || n2 == n3 || n3 == n1) {
	printf("Os valores compoem um triangulo isosceles\n");
	}
	else if (n1 != n2 && n2 != n3 && n3 != n1){
	printf("Os valores compoem um triangulo escaleno\n");
	}
	else
	printf ("Os valores nao formam um triangulo\n");

	system("pause");
	return 0;
}
