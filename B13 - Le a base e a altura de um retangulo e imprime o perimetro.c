#include <stdio.h>
#include <stdlib.h>

main(void)
{
	float base, altura, perimetro, area;
	printf("Digite o valor da base: ");
	scanf("%f", &base);
	printf("Digite o valor da altura: ");
	scanf("%f", &altura);
	perimetro = base + altura;
	area = base * altura;
	printf("Perimetro: %f\n", perimetro);
	printf("Area: %f\n\n\n", area);
	
	system("pause");
	return 0;
}
