#include<stdio.h>
#include<stdlib.h>

void lertresLetras(char string[3]) {
	
	printf("digite a primeira letra:\n ") ;
	scanf("%c", &string[0]) ;
	getchar();
	fflush(stdin);
	
	printf("digite a segunda letra:\n ") ;
	scanf("%c", &string[1]) ;
	getchar();
	fflush(stdin);
	
	printf("digite a terceira letra:\n ") ;
	scanf("%c", &string[2]) ;
	getchar();
	fflush(stdin);
	
}

int main(){
	char string[4];
	lertresLetras(string);
	printf("As letras sao: %s\n", string);
	
	
	
}












































