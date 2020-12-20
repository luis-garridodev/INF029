#include <stdio.h>
#include <stdlib.h>
//reorganizar structs
/*================ INICIO Struscts =================*/

typedef struct aluno
{

	int matricula;
	char nome[30];
	char sexo;
	int datadenascimento[10];
	int cpf;

} cadastro;

typedef struct professor
{

	int matricula;
	char nome[30];
	char sexo;
	int datadenascimento[10];
	int cpf;

} cadasProf;

typedef struct disciplinas
{

	char nome[30];
	int codigo;
	int semestre;
	char professor[30];

} materia;

/*================ FIM Struscts =================*/

/*================ INICIO declaraco de funcao =================*/
void leitordecadastro(cadastro n);

/*================ FIM declaracao de funcao =================*/

/*================ INICIO DE PROCEDIMENTOS =================*/


void listarprofessor()
{
	cadasProf p;
	int i;
	int x;
	printf("digite o numero de matricula:\n");
	scanf("%d", &p.matricula);
	for (i = 0; i < 30; i++)
	{
		printf("digite o nome do professor:\n");
		scanf("%s", p.nome);
	}
	printf("digite m para homem ou f para mulher:\n");
	scanf(" %c ", &p.sexo);

	for (x = 0; x < 10; x++)
	{
		printf("digite data de nascimento do professor:\n");
		scanf("%d", p.datadenascimento);
	}
	printf("digite o seu cpf\n:");
	scanf("%d", &p.cpf);
}
void listarmateria()
{
	materia m;
	printf("digite o nome da materia:\n");
	scanf("%s", m.nome);

	printf("digite o codigo:\n");
	scanf("%d", &m.codigo);

	printf("digite o semestre:\n");
	scanf("%d", &m.semestre);

	printf("digite o professor:\n");
	scanf("%s ", m.professor);
}

void cadastrarAluno()
{
	printf("Fazer o cadastro do aluno\n");
  
	cadastro n;


	printf("digite o numero de matricula:\n");
	scanf("%d", &n.matricula);

		printf("digite o nome do aluno:\n");
		scanf("%s", n.nome);
	
	


		printf("digite data de nascimento do aluno:\n");
		scanf("%d", n.datadenascimento);
	
	printf("digite o seu cpf\n:");
	scanf("%d", &n.cpf);

printf("digite m para homem ou f para mulher:\n");
	scanf("%c", &n.sexo);
  
   getchar();

  fflush(stdin);
  
     



}

void listarAlunos(cadastro n)
{
  
	printf("Fazer a listagem dos alunos\n");
  printf("numero de matricula:%d\n", n.matricula);
    printf("nome do aluno:%s\n", n.nome);
  printf("data de nascimento do aluno:%d\n",*n.datadenascimento);
  printf("cpf do aluno:%d\n", n.cpf);
  printf("sexo do aluno:%c\n", n.sexo);

}

void excluirAluno()
{
	printf("Fazer a exclusÃ£o do aluno\n");
}

void operacoesAluno()
{cadastro imprime;
	int menu;
	printf("### Aluno ####\n");

	do
	{
		printf("Opcao deseja ?\n");
		printf("[0] -> Voltar\n");
		printf("[1] -> Cadastrar\n");
		printf("[2] -> Listar\n");
		printf("[3] -> Excluir\n");

		scanf("%d", &menu);

		switch (menu)
		{
		case 1:
		{
			cadastrarAluno();
     
			break;
		}

		case 2:
		{
			listarAlunos( imprime);
			break;
		}
		case 3:
		{
			excluirAluno();
			break;
		}
		}
	} while (menu != 0);
}

/*================ INICIO MAIN =================*/

int main()
{
	cadastro c;
	int menu;
	materia a;
	cadasProf d;
  

	//menu de interaco excluir, cadastra e listaraluno

	do
	{
		printf("Opcao deseja ?\n");
		printf("[1] -> Aluno\n");
		printf("[2] -> Professor\n");
		printf("[3] -> Disciplina\n");
		printf("[-1] -> Sair\n");
		scanf("%d", &menu);

		switch (menu)
		{
		case 1:
		{
			operacoesAluno();
     
      
			break; //todo case precisa do break
		}
		case 2:
		{
			printf("opcoes de professor\n");
			break;
		}
		case 3:
		{
			printf("opcoes de disciplina\n");
			break;
		}
		}
	} while (menu != -1);
}