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

typedef struct novo
{
	int matricula;
	char nome[31];
	char sexo[2];
	char datadenascimento[11];
	int cpf; 
}vazio;

/*================ FIM Struscts =================*/

/*================ INICIO declaraco de funcao =================*/
void leitordecadastro(Aluno n);
void listarmateria();

/*================ FIM declaracao de funcao =================*/

/*================ INICIO DE PROCEDIMENTOS =================*/






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

void excluirAluno(Aluno listaAlunos[TAM], int *contAluno){ 
  	int matricula;
  	int cont;
	int pesquisa;
	printf("Digite a matricula do aluno que deseja excluir\n");
	listarAlunos(listaAlunos,contAluno);
	scanf("%d" ,&matricula);
	pesquisa = pesuisarAluno(matricula, contAluno, listaAlunos);

	if (pesquisa >= 0){ //achou
		for(cont = pesquisa; cont < *contAluno; cont++){
		      listaAlunos[cont].matricula=listaAlunos[cont+1].matricula;
		      strcpy(listaAlunos[cont].sexo,listaAlunos[cont+1].sexo);
		      strcpy(listaAlunos[cont].datadenascimento,listaAlunos[cont+1].datadenascimento);
		      strcpy(listaAlunos[cont].nome,listaAlunos[cont+1].nome);
		      listaAlunos[cont].cpf= listaAlunos[cont+1].cpf;
		}
		*contAluno = *contAluno - 1;
		printf("Exclusão feita com sucesso \n");

	}else{

		printf("aluno nao encontrado")
	}

}


int pesquisaraluno(int procura, int *contaluno , Aluno listaAlunos[]){
	
	
    for(int i=0; i<*contaluno; i++){
		if(listaAlunos[i].matricula == procura){
			return i;
		}
		
		else{
		
			//printf(" Matricula Inexistente\n"); 
			
			return -1;
			
		}  
	}
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
		printf("[4] ->verificar\n");
		
		
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
			case 4:
			{
				int pesquisa;
				vazio Vazio;
				int procura;
				
				printf("Numero da matricula que deseja procurar \n");
				scanf("%d" ,&procura);
				
				pesquisa = pesquisaraluno(procura,contAluno , listaAlunos);
				if (pesquisa >= 0){
					printf(" Matricula: % d \n Nome : %s \n Dt de nascimento:%s \n" , listaAlunos[pesquisa].matricula , listaAlunos[pesquisa].nome , listaAlunos[pesquisa].datadenascimento);
					printf("  Cpf: %d  \n Sexo : %s \n" ,listaAlunos[pesquisa].cpf,listaAlunos[pesquisa].sexo);
				}
				else{
					printf(" Matricula: % d \n Nome : %s \n Dt de nascimento:%s \n" , Vazio.matricula = -1 , Vazio.nome , Vazio.datadenascimento);
					printf("  Cpf: %d  \n Sexo : %s \n" ,Vazio.cpf = '\0',Vazio.sexo);
				}
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
	
	printf("Fazer o cadastro do professor\n");
	
	printf("digite o numero de matricula:\n");
	scanf("%d", &listaprofessor[*contprofessor].matricula);
	
	printf("digite o nome do professor:\n");
	scanf("%s", listaprofessor[*contprofessor].nome);
	getchar();
	
	fflush(stdin);
	
	printf("digite data de nascimento do professor:\n");
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
	
	printf("Lista dos professores\n");
	for(int i=0;i<*contprofessor;i++){
		printf("## professor %d ##\n", i + 1);
		printf("numero de matricula:%d\n", listaprofessor[i].matricula);
		printf("nome do professor:%s\n", listaprofessor[i].nome);
		printf("data de nascimento do professor:%s\n",listaprofessor[i].datadenascimento);
		printf("cpf do professor:%d\n", listaprofessor[i].cpf);
		printf("sexo do professor:%s\n", listaprofessor[i].sexo);
		
	}
}

void validardata(cadasProf listaprofessor[TAM] , int *contprofessor){
	int data[10];
	int dia[2];
	int mes[2];
	int ano[4];
	int somadia;
	int somames;
	int somaano;
	int i;
	somadia=dia[0]+dia[1];
	
	
	for(i=0;i<10;i++){
		printf("digite a data\n");
		scanf("%d",&data[i]);
		
		
		dia[0]=data[0]*10;
		dia[1]=data[1];
		somadia=data[0]+data[1];
		mes[0]=data[2]*10;
		mes[1]=data[3];
		somames=data[2]+data[3];
		ano[0]=data[4]*1000;
		ano[1]=data[5]*100;
		ano[2]=data[6]*10;
		ano[3]=data[7];
		somaano=ano[0]+ano[1]+ano[2]+ano[3];
		if((somadia>31&&somames>12)||(somadia>28&&somames==02)){
			
			printf("data incorreta\n");
			break;
			
		}
		if((somadia>31&&somames==1)||(somadia>31&&somames==3)||(somadia>31&&somames==5)||(somadia>31&&somames==7)||(somadia>31&&somames==8)||(somadia>31&&somames==10)||(somames==12)){
			printf("data incorreta\n");
			break;
		}
		else if((somadia>30&&somames==4)||(somadia>30&&somames==6)||(somadia>30&&somames==9)||(somadia>30&&somames==11)){
			printf("data incorreta\n");
			break;
			
			
		}
		else{
			printf("data correta\n");
			switch(somames){
				case 1:
				printf("dia %d de janeiro de %d",somadia,somaano);
				case 2:
				printf("dia %d de fevereiro de %d",somadia,somaano);
				case 3:
				printf("dia %d de março de %d",somadia,somaano);
				case 4:
				printf("dia %d de abril de %d",somadia,somaano);
				case 5:
				printf("dia %d de maio de %d",somadia,somaano);
				case 6:
				printf("dia %d de junho de %d",somadia,somaano);
				case 7:
				printf("dia %d de julho de %d",somadia,somaano);
				case 8:
				printf("dia %d de agosto de %d",somadia,somaano);
				case 9:
				printf("dia %d de setembro de %d",somadia,somaano);
				case 10:
				printf("dia %d de outubro de %d",somadia,somaano);
				case 11:
				printf("dia %d de novembro de %d",somadia,somaano);
				case 12:
				printf("dia %d de dezembro de %d",somadia,somaano);
				
				
				
				
				
			}
			
			
		}
		break;
		
	}
	
	
	
	
}






void pesquisarmatricula(cadasProf listaprofessor[TAM] , int *contprofessor){
	int procura;
	int sair = 1;
	
	
    do
    { 
		printf("Numero da matricula que deseja procurar \n");
		scanf("%d" ,&procura);
		
		for(int i=0; i<*contprofessor; i++){
			if(listaprofessor[i].matricula == procura)
			printf(" Matricula Correta: \n %d \n" , listaprofessor[i].matricula);
			else{
				printf(" Matricula Inexistente\n");  
			}  
		}
		printf(" Para Continuar: digite qualquer numero\n Sair: digite 0\n ");  
		scanf("%d" , &sair);  
	}while(sair!=0);
	
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
		printf("[4] -> Listar Matricula\n");
		
		scanf("%d", &menu);
		
		switch (menu)
		{	
			case 0:
			break;
			case 1:
			{
				cadastroprofessor(listaprofessor , contprofessor);
				
				break;
			}
			
			case 2:
			{
				listarprofessor(listaprofessor ,  contprofessor);
				break;
			}
			case 3:
			{
				excluirAluno();
				break;
			}
			case 4:
			{
				pesquisarmatricula(listaprofessor,contprofessor);
				break;
			}
			default:
			printf("opcao invalida");
		}
	} while (menu != 0);
	
	
	
	
	
}

//começo com perações com matéria//
void cadastromateria(materia listamateria[TAM], int *contmateria)
{
  	printf("Fazer o cadastro da materia\n");
	
	printf("digite onome da materia:\n");
	scanf("%s", listamateria[*contmateria].nome);
	getchar();
	
	fflush(stdin);
	printf("digite o codigo da materia:\n");
	scanf("%d", &listamateria[*contmateria].codigo);
	
	
	printf("digite o semestre:\n");
	scanf("%d", &listamateria[*contmateria].semestre);
	
	
	
	printf("digite o professor que leciona:\n");
	scanf("%s", listamateria[*contmateria].professor);
	
	getchar();
	
	fflush(stdin);
	*contmateria = *contmateria + 1;
	
	
	
	
	
	
}
void listarmateria(materia listamateria[TAM],int *contmateria){
	
	printf("Lista da materia\n");
	for(int i=0;i<*contmateria;i++){
		printf("## professor %d ##\n", i + 1);
		printf("nome da materia:%s\n", listamateria[i].nome);
		printf("codigo da materia:%d\n", listamateria[i].codigo);
		printf("semestre:%d\n",listamateria[i].semestre);
		
		printf("nome do professor:%s\n", listamateria[i].professor);
		
	}
}
void operacoesmateria(materia listamateria[TAM], int *contmateria)
{
	int menu;
	printf("### materia ####\n");
	
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
				cadastromateria(listamateria, contmateria);
				
				break;
			}
			
			case 2:
			{
				listarmateria (listamateria, contmateria);
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
	materia listamateria[TAM];
	int contmateria=0;
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
				operacoesmateria(listamateria, &contmateria);
				break;
			}
		}
	} while (menu != -1);
}
