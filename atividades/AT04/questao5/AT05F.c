	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>




	typedef struct numeros{
		
		int n1;
		int n2;
		int n3;
		int n4;
	}lista;

	lista setlista(){
		lista n;
		
		
		printf("digite o numero 1 :\n");
		scanf("%d",&n.n1);
		printf("digite o numero 2 :\n");
		scanf("%d",&n.n2);
		printf("digite o numero 3 :\n");
		scanf("%d",&n.n3);
		printf("digite o numero 4:\n");
		scanf("%d",&n.n4);
		
		
		return n;
	} 
	void imprimelista(lista n){


	printf("numero 1:%d\n",n.n1);
		
		printf("numero 2:%d\n",n.n2);
		printf("numero 3:%d\n",n.n3);
		printf("numero 4:%d\n",n.n4);
		
		
		
		
		
	}
	int main(){
		lista principal;
	   
		principal=setlista();
		imprimelista(principal);
		system("pause");
		return 1;
		
	}