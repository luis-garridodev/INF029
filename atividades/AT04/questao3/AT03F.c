#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fatorial(int nf){
	int a=nf;
	int conta=1;
	
	
	if(nf<=0){
	    
		return -1;
	}	
	for(int i=a;i>1;i--){
		
		conta=conta*i;
	    
	}
	return conta;
}







int main(){
	int resultado;
	
	int numero;
	printf("digite o fatorial:\n");
	scanf("%d",&numero);
	resultado=fatorial(numero);
	
	if(resultado == -1){
	printf("Não é possível calcular o fatorial do número informado\n");}
	else{
		printf("resposta da questao:%d\n",resultado);
	}
	
	system("pause");
	return 1;
	
	
}





