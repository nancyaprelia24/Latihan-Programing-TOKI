#include<stdio.h>
int main(void){
	int a,b,c,e=-1;
	scanf("%d",&a);
	
	for(b=a;b<=1;b++)
	{
		for(c=1;c<=b;c++)
		{
			e= e + 1;
			if(e == 10)
			{
				e=0;
			}
		printf("%d",e);	
		}
		printf("\n");
		}
	}
