#include<stdio.h>
#include<stdlib.h>

void lertresLetras(char string[][50]) {
	
	//char string[3][50];
	
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			
			printf("digite tres letras:\n ") ;
			
			fflush(stdin);
			scanf("%s",&string[i][j]);
			
			
		}
	}
	
	
	
	
	
	
}

int main(){
	
	int i,j;
	char string[2][50];
	
	lertresLetras(string);
	
	for(i=0;i<2;i++){
		
		for(j=0;j<2;j++){
			
			printf("frases da string: %s\n",string[i][j]);
			
			
		}
	}
}






