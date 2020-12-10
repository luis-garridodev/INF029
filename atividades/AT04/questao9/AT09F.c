#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define  TAM 20



typedef struct cadastro{
	
	char nome[TAM];
	int idade;
	int datadenascimento[10];
	char sexo;
	int icpf[12];
	char cpf[12];
}cadastro;

/*============== INICIO Declaracao de escopo de variavel ===================*/

cadastro validaSexo(cadastro n);

char validaNomeTamanho(cadastro n);

cadastro validaIdade( cadastro n );

void dataDeNascimento(cadastro n );

void validarCpf ( cadastro n);
cadastro validacpf(cadastro n);
/*============== FIM Declaracao de escopo de variavel ===================*/



/*============== INICIO Funções essenciais (Cadastro e imprimir) ===================*/

cadastro cadastrodePessoa(){
	cadastro n;
	
	printf("digite o nome :\n");
	scanf("%s",n.nome);
	
	printf("digite a idade :\n");
	scanf("%d",&n.idade);
	
	printf("digite a data de nascimento :\n");
	scanf("%d",n.datadenascimento);
	
	printf("digite o sexo:\n");
	scanf(" %c",&n.sexo);
	printf("digite o cpf :\n");
	
	scanf("%s",n.cpf);
	
	validaSexo(n);
	
	validaNomeTamanho(n);
	validacpf(n);
	
	
	return n;
} 

void imprimeCadastro(cadastro n){
	
	printf("nome:%s\n",n.nome);
	
	printf("idade:%d\n",n.idade);
	
	printf("data de nascimento:%d\n",*n.datadenascimento);
	
	printf("sexo:%c\n",n.sexo);
	
	
	for(int i=0;i<13;i++){
		
		printf("%c",n.cpf[i]);
		
	}
	
	
	
	
	
	
	
}




/*============== FIM Funções essenciais (Cadastro e imprimir) ===================*/



/*============== INICIO Verificacao de dados ===================*/

cadastro validaSexo(cadastro n){
	
	
	if((n.sexo == 'f') || (n.sexo == 'F') || (n.sexo == 'm') || (n.sexo == 'M')) 
    printf("Valido\n");
	
	else 
    printf("Invalido\n");
	
	
	return  n;
}

char  validaNomeTamanho(cadastro n) { 
	
	int i;
	
	int numerodeletras;
	
	
	
	for (i=TAM;  n.nome[i] != '\0'; i++){
		
		
		if(i > TAM){
			printf("Invalido");
			}else{
			printf("Valido\n");
		}
		
	}
	return TAM;
}
cadastro validacpf(cadastro n){
	
	
	int i;
	int somador=0;
	int digito1,resultado1,resultado2,digito2,valor;
	for(i=0;i<11;i++){
		n.icpf[i]=n.cpf[i]-48;
		
		
	}
	
	
	for(i=0;i<9;i++)  
	{  
		somador+=n.icpf[i]*(10-i);  
	}  
	
	resultado1=somador%11;
	if( (resultado1==0) || (resultado1==1) )  
	{  
		digito1=0;  
	}  
	
	else  
	{  
		digito1 = 11-resultado1;  
	}  
	
	
	somador=0;  
	
	for(i=0;i<10;i++)  
	{  
		somador+=n.icpf[i]*(11-i);  
	}  
	
	valor=(somador/11)*11;  
	resultado2=somador-valor;  
	
	if( (resultado2==0) || (resultado2==1) )  {  
		digito2=0;  
		} else{  
		digito2=11-resultado2;  
	}  
	
	//RESULTADOS DA VALIDACAO.  
	
	if((digito1==n.icpf[9]) && (digito2==n.icpf[10]))  {  
		printf("\nCPF VALIDADO.\n");  
		} else {  
		printf("Problema com os digitos.\n");  
	}
	
	return n;  
}  









cadastro validaIdade( cadastro n )
{ 
	
	int data[10];
	int i;
	int dia[2];
	int mes[2];
	int ano[4];
	int somadia;
	int somames;
	int somaano;
	data[0]=n.datadenascimento[0];
	data[1]=n.datadenascimento[1];
	data[2]=n.datadenascimento[2];
	data[3]=n.datadenascimento[3];
	data[4]=n.datadenascimento[4];
	data[5]=n.datadenascimento[5];
	data[6]=n.datadenascimento[6];
	data[7]=n.datadenascimento[7];
	data[8]=n.datadenascimento[8];
	somadia=dia[0]+dia[1];
	for(i=0;i<10;i++){
		
		printf(" data:%d\n" ,data[i]);
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
			return n;
		}
		if((somadia>31&&somames==1)||(somadia>31&&somames==3)||(somadia>31&&somames==5)||(somadia>31&&somames==7)||(somadia>31&&somames==8)||(somadia>31&&somames==10)||(somames==12)){
			printf("data incorreta\n");
			break;
			return n;
		}
		else if((somadia>30&&somames==4)||(somadia>30&&somames==6)||(somadia>30&&somames==9)||(somadia>30&&somames==11)){
			printf("data incorreta\n");
			break;
			return n;
			
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
				
				
				return n;
				
				
			}
			
			
		}
		break;
		
	}
	
	
	return n;
	
}
























/*============== FIM Verificacao de dados ===================*/

/*============== INICIO MAIN ===================*/
int main(){
	cadastro principal;
	
	principal = cadastrodePessoa();
	
	imprimeCadastro(principal);
	
	system("pause");
	return 1;
}

/*============== FIM  MAIN ===================*/	