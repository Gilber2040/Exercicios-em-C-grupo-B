#include <stdio.h>
#include <stdlib.h>

main(void)
{
	char nome[100], telefone[100], endereco[100];
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite seu telefone: ");
	scanf("%s",&telefone);
	printf("Digite seu endereco: ");
	scanf("%s", &endereco);
	printf("\nDados:\n\n");
	printf("Nome: %s\n", nome);
	printf("Telefone: %s\n", telefone);
	printf("Endereco: %s\n\n\n", endereco);

	system("pause");
	return 0;
}
