#include <stdio.h>
#include <stdlib.h>

main(void)
{
	float n1, n2, n3, media;
	printf("Digite o numero 1: ");
	scanf("%f",&n1);
	printf("Digite o numero 2: ");
	scanf("%f",&n2);
	printf("Digite o numero 3: ");
	scanf("%f",&n3);
	media = (n1+n2+n3)/3;
	printf("Media: %f", media);
	
	system("pause");
	return 0;
}
