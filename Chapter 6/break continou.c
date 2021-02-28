#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	
	for(b=1;b<=a;b++){
		if(b % 10 == 0){
			continue;
		}
		else if(b==42){
			printf("ERROR\n");
			break;
		}
			printf("%d\n",b);
	}
	return 0;
}
