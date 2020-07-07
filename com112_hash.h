
struct aluno
{
	int matricula;
	char nome[30];
	float n1, n2;
};

typedef struct hash Hash;

Hash* criaHash(int TABLE_SIZE);
int liberaHash(Hash* ha);
int valorString(char *str);
int inserir(Hash* ha, struct aluno al);
int busca(Hash* ha, int mat, struct aluno* al);

