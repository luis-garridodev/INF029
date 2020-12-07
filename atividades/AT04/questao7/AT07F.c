	#include<stdio.h>
	#include<stdlib.h>

		char lertresLetras() {
		
		//char string[3][50];
		
		int i,j;
		
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
					
					printf("digite tres letras:\n ") ;
					scanf("%s",string[i][j]);
				
				
				}
			}
		

		
		return string;
		
		   
	}

	int main(){
			
			int i,j;
		   char **string[3][50];
		   
			string= lertresLetras();
			
			for(i=0;i<3;i++){
				
				for(j=0;j<3;j++){
					
					printf("frases da string: %c\n",string[i][j]);
				
				
				}
			}
	}

	  

			  

