#include <stdio.h>
#include <stdlib.h>
#include "com112_hash.h"
//main deve conter main e menu
int tamanho = 1024;
Hash *tabela = criaHash(tamanho);
struct aluno al;
int comando = 0;

int main()
{
	int op;
	do
	{
		printf("\n-------------Menu-------------\n");
		printf("\nEscolha uma das opcoes:\n1. Criar tabela hash\n2. Liberar tabela hash \n3. Inserir elemento (sem colisao)\n");
		printf("4. Consultar elemento (sem colisao)\n5. Sair\n\n");
		scanf("%d", &op);

		if(op == 1)
		{
			comando = 1;
			system("cls");
			printf("\nTabela criada\n");
			continue;
		}
		if(op == 2)
		{
			system("cls");
			printf("\nA tabela foi liberada!\n\n");
			comando = liberaHash(tabela);
		}
		if(op == 3)
		{
			system("cls");
			struct aluno b;
			if(comando == 0)
			{
				printf("\nNao ha uma tabela criada\n");
				continue;
			}
			printf("\nDigite a matricula que vai ser inserida: \n");
			scanf("%d", &b.matricula);
			printf("\nDigite o nome que vai ser inserido: \n");
			scanf("%s", &b.nome);
			printf("\nDigite as duas notas:  \n");
			scanf("%f", &b.n1);
			scanf("%f", &b.n2);
			inserir(tabela, b);
		}
		if(op == 4)
		{
			if(comando == 0)
			{
				printf("\nNao ha uma tabela criada\n");
				continue;
			}
			system("cls");
			printf("\nDigite uma matricula: \n");
			int mat;
			scanf("%d", &mat);
			if(busca(tabela, mat, &al))
			{
				printf("\n%s, %d\n", al.nome, al.matricula);
			}
			else
			{
				printf("\nAluno nao encontrado\n");
			}
		}
	}
	while(op != 5);
}

