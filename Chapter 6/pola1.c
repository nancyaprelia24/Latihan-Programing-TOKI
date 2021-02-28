#include<stdio.h>
int main(void){
	int a ,b ,c;
	scanf("%d %d",&a , &b);
	
	for (c=1 ; c<=a ; c++){
	if(c > 1)	{ printf(" ");}
		if (c % b == 0)	{ printf("*");}
		else { printf("%d",c);}
	}
	printf("\n");
}
