#include<stdio.h>
#include<stdlib.h>
#include<math.h>




typedef struct numeros{
	
	int n1;
	int n2;
	int n3;
	int n4;
}lista;

lista setlista(int n1,int n2,int n3,int n4){
    lista n;
	
    
	printf("digite o numero 1 :\n");
	scanf("%d",&n1);
	printf("digite o numero 2 :\n");
	scanf("%d",&n2);
	printf("digite o numero 3 :\n");
	scanf("%d",&n3);
	printf("digite o numero 4:\n");
	scanf("%d",&n4);
	
	
	return n;
} 
void imprimelista(lista n){
	
	int num1;
	int num2;
	int num3;
	int num4;
	
	
    
	printf("numero 1:%d\n",num1);
	
	printf("numero 2:%d\n",num2);
	printf("numero 3:%d\n",num3);
	printf("numero 4:%d\n",num4);
	
	
    
    
    
}
int main(){
    lista principal;
    int num1;
	int num2;
	int num3;
	int num4;
	principal=setlista(num1,num2,num3,num4);
	imprimelista(principal);
	system("pause");
	return 1;
	
}