#include<stdio.h>
int main(void){
	int a,b,c,d;
	scanf("%d",&a);
	
	for(b=a;b>=1;b--){
		for(c=1;c<=b-1;c++)
		{
			printf(" ");
		}
		for(c=b;c<=a;c++){
			printf("*");
		}
		printf("\n");
	}
}
