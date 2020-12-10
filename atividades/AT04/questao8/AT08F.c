#include<stdio.h>
#include<stdlib.h>
#include<math.h>




typedef struct cadastro{
	
	char nome[50];
	int idade;
	int datadenascimento;
	char sexo;
}cadastro;

cadastro cadastrodepessoa(){
	cadastro n;
	printf("digite o nome :\n");
	scanf("%s",n.nome);
	printf("digite a idade :\n");
	scanf("%d",&n.idade);
	printf("digite a data de nascimento :\n");
	scanf("%d",&n.datadenascimento);
	printf("digite o sexo:\n");
	scanf(" %c",&n.sexo);
	
	
	return n;
} 

void imprimecadastro(cadastro n){
	printf("nome:%s\n",n.nome);
	printf("idade:%d\n",n.idade);
	printf("data de nascimento:%d\n",n.datadenascimento);
	printf("sexo:%c\n",n.sexo);
}

int main(){
	cadastro principal;
	
	principal=cadastrodepessoa();
	
	imprimecadastro(principal);
	system("pause");
	return 1;
}

