#include <stdio.h>
#include<stdlib.h>
//reorganizar structs 
/*================ INICIO Struscts =================*/

typedef struct aluno{
	
	int matricula;
	char nome[30];
	char sexo;
	int datadenascimento[10];
	int cpf;
	
}cadastro;

typedef struct professor{
	
	int matricula;
	char nome[30];
	char sexo;
	int datadenascimento[10];
	int cpf;
	
}cadasProf;


typedef struct disciplinas{
	
	char nome[30];
	int codigo;
	int semestre;
	char professor[30];
	
	
}materia;


/*================ FIM Struscts =================*/





/*================ INICIO declaraco de funcao =================*/
void leitordecadastro(cadastro n);







/*================ FIM declaracao de funcao =================*/





/*================ INICIO DE PROCEDIMENTOS =================*/

void listaraluno(){
	cadastro n;
	int i;
	int x;
	
	
	
	printf("digite o numero de matricula:\n");
	scanf("%d",&n.matricula);
	for(i=0;i<30;i++){
		printf("digite o nome do aluno:\n");
		scanf("%s",n.nome);
		
		
		
		
	}
	printf("digite m para homem ou f para mulher:\n");
	scanf(" %c ",&n.sexo);
	
	for(x=0;x<10;x++){
		printf("digite data de nascimento do aluno:\n");
		scanf("%d",n.datadenascimento);
		
		
		
		
	}
	printf("digite o seu cpf\n:");
	scanf("%d",&n.cpf);
	
	
	
	
}
void listarprofessor(){
	cadasProf p;
	int i;
	int x;
	printf("digite o numero de matricula:\n");
	scanf("%d",&p.matricula);
	for(i=0;i<30;i++){
		printf("digite o nome do professor:\n");
		scanf("%s",p.nome);
		
		
		
		
	}
	printf("digite m para homem ou f para mulher:\n");
	scanf(" %c ",&p.sexo);
	
	for(x=0;x<10;x++){
		printf("digite data de nascimento do professor:\n");
		scanf("%d",p.datadenascimento);
		
		
		
		
	}
	printf("digite o seu cpf\n:");
	scanf("%d",&p.cpf);
	
	
}
void listarmateria(){
	materia m;
	printf("digite o nome da materia:\n");
	scanf("%s",m.nome);
	
    printf("digite o codigo:\n");
	scanf("%d",&m.codigo);
    
    printf("digite o semestre:\n");
	scanf("%d",&m.semestre);
    
    printf("digite o professor:\n");
	scanf("%s ",m.professor);
	
	
	
	
	
}













/*================ INICIO MAIN =================*/

int main () {
	cadastro c;
	int n, i, x, y;
	int menu;
	materia a;
	cadasProf d;
	
	
	
	//menu de interaco excluir, cadastra e listaraluno
	
	
	do{
		printf("Opcao deseja ?\n");
		printf("[1] -> Cadastro\n");
		printf("[2] -> Listar\n");
		printf("[3] -> Excluir\n");
		printf("[-1] -> sair\n");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:{
				//chamar funcao referente a procedimento 1 pedido na questao
				printf("Cadastrar aluno [1]\n");
				
				printf("Cadastro de Professor [2]\n");
				
				printf("Cadastro de Disciplina [3]\n");
				scanf("%d",&y);
				
				if(y == 1){
					//chamada de funcao
					cadastro n;
				}
				else if(y == 2){
					//chamada de funcao
					cadasProf p;
				}
				else{
					//chamada de funcao
					materia m;
				}
			}
			
			case 2:{
				
			}
			case -1:{
				
				break;
				
			}
			
			
			
			
		}
	}while(x != -1);
	
}