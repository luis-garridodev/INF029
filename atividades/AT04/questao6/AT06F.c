	#include<stdio.h>
	#include<stdlib.h>

	void lertresLetras(char string[]) {
	char letra1;
	char letra2;
	char letra3;
	int i;
	printf("digite tres letras:\n ") ;
	fflush(stdin);
	scanf("%s", &letra1) ;

	string[0]=letra1;
	printf("digite tres letras:\n ") ;
	fflush(stdin);
	scanf("%s", &letra2) ;
	string[1]=letra2;
	printf("digite tres letras:\n ") ;
	fflush(stdin);
	scanf("%s",&letra3) ;
	string[2]=letra3;
	for(i=0;i<3;i++){
	 printf("letras da string:%c\n",string[i]);
	 
	 
	}
	}

	int main(){
	char string[4];
	lertresLetras(string);
	printf("As letras sao: %s\n", string);



	}



	


    
    
    
    
    
    











  


    
    
    
    
    
    











  