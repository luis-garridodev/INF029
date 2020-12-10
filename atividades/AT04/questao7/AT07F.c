#include<stdio.h>
#include<stdlib.h>

void lertresLetras(char string[][50]) {
	
	
	int i,j;
	
	for(i=0;i<=2;i++){
		
		printf("digite um nome:\n ") ;
		
		fflush(stdin);
		scanf("%s",string[i]);
		
	}
	
	
}

int main(){
	
	int i,j;
	char string[3][50];
	
	lertresLetras(string);
	
	for(i=0;i<=2;i++){		
		printf("frases da string: %s\n",string[i]);
	}
}







