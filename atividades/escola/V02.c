#include <stdio.h>
#include <stdlib.h>
#define TAM 5
//reorganizar structs
/*================ INICIO Struscts =================*/
//projeto escola V1,irá ser atualizado na v2//
typedef struct cad
{
	
	int matricula;
	char nome[31];
	char sexo[2];
	char datadenascimento[11];
	int cpf;
	
} Aluno;

typedef struct professor
{
	
	int matricula;
	char nome[31];
	char sexo[2];
	char datadenascimento[11];
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
void leitordecadastro(Aluno n);

/*================ FIM declaracao de funcao =================*/

/*================ INICIO DE PROCEDIMENTOS =================*/




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

void cadastrarAluno(Aluno listaAlunos[TAM], int *contAluno)
{
	printf("Fazer o cadastro do aluno\n");
	
	printf("digite o numero de matricula:\n");
	scanf("%d", &listaAlunos[*contAluno].matricula);
	
	printf("digite o nome do aluno:\n");
	scanf("%s", listaAlunos[*contAluno].nome);
	getchar();
	
	fflush(stdin);
	
	printf("digite data de nascimento do aluno:\n");
	scanf("%s", listaAlunos[*contAluno].datadenascimento);
	getchar();
	
	fflush(stdin);
	
	printf("digite o seu cpf:\n");
	scanf("%d", &listaAlunos[*contAluno].cpf);
	
	printf("digite m para homem ou f para mulher:\n");
	scanf("%s", listaAlunos[*contAluno].sexo);
	
	getchar();
	
	fflush(stdin);
	*contAluno = *contAluno + 1;
	
}

void listarAlunos(Aluno listaAlunos[TAM], int *contAluno)
{
	printf("Lista dos alunos\n");
	for(int i=0;i<*contAluno;i++){
		printf("## Aluno %d ##\n", i + 1);
		printf("numero de matricula:%d\n", listaAlunos[i].matricula);
		printf("nome do aluno:%s\n", listaAlunos[i].nome);
		printf("data de nascimento do aluno:%s\n",listaAlunos[i].datadenascimento);
		printf("cpf do aluno:%d\n", listaAlunos[i].cpf);
		printf("sexo do aluno:%s\n", listaAlunos[i].sexo);
	}
	
}

void excluirAluno()
{
	printf("Fazer a exclusÃƒÂ£o do aluno\n");
}

void operacoesAluno(Aluno listaAlunos[TAM], int *contAluno)
{
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
			case 0:
			break;
			case 1:
			{
				cadastrarAluno(listaAlunos, contAluno);
				
				break;
			}
			
			case 2:
			{
				listarAlunos(listaAlunos, contAluno);
				break;
			}
			case 3:
			{
				excluirAluno();
				break;
			}
			default:
			printf("opcao invalida");
		}
	} while (menu != 0);
}
//começo de operações para professor//

void cadastroprofessor(cadasProf listaprofessor[TAM],int *contprofessor)
{
	
	printf("Fazer o cadastro do aluno\n");
	
	printf("digite o numero de matricula:\n");
	scanf("%d", &listaprofessor[*contprofessor].matricula);
	
	printf("digite o nome do aluno:\n");
	scanf("%s", listaprofessor[*contprofessor].nome);
	getchar();
	
	fflush(stdin);
	
	printf("digite data de nascimento do aluno:\n");
	scanf("%s", listaprofessor[*contprofessor].datadenascimento);
	getchar();
	
	fflush(stdin);
	
	printf("digite o seu cpf:\n");
	scanf("%d", &listaprofessor[*contprofessor].cpf);
	
	printf("digite m para homem ou f para mulher:\n");
	scanf("%s", listaprofessor[*contprofessor].sexo);
	
	getchar();
	
	fflush(stdin);
	*contprofessor = *contprofessor + 1;
	
}
void listarprofessor(cadasProf listaprofessor[TAM],int *contprofessor){
	
	printf("Lista dos alunos\n");
	for(int i=0;i<*contprofessor;i++){
		printf("## Aluno %d ##\n", i + 1);
		printf("numero de matricula:%d\n", listaprofessor[i].matricula);
		printf("nome do aluno:%s\n", listaprofessor[i].nome);
		printf("data de nascimento do aluno:%s\n",listaprofessor[i].datadenascimento);
		printf("cpf do aluno:%d\n", listaprofessor[i].cpf);
		printf("sexo do aluno:%s\n", listaprofessor[i].sexo);
		
	}
}















void operacoesprofessor(cadasProf listaprofessor[TAM] ,  int *contprofessor){
	
	int menu;
	printf("### professor ####\n");
	
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
			case 0:
			break;
			case 1:
			{
				cadasProf(listaprofessor , contprofessor);
				
				break;
			}
			
			case 2:
			{
				cadasProf(listaprofessor ,  contprofessor);
				break;
			}
			case 3:
			{
				excluirAluno();
				break;
			}
			default:
			printf("opcao invalida");
		}
	} while (menu != 0);
	
	
	
	
	
}

/*================ INICIO MAIN =================*/

int main()
{
	Aluno c;
	int menu;
	materia a;
	cadasProf d;
	Aluno listaAlunos[TAM];
	int contAluno = 0;
	cadasProf listaprofessor[TAM];
	int contprofessor=0;
	
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
				operacoesAluno(listaAlunos, &contAluno);
				
				
				break; //todo case precisa do break
			}
			case 2:
			{
				printf("opcoes de professor\n");
				operacoesprofessor(listaprofessor,&contprofessor);
				
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
