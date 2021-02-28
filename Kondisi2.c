#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a>=0 && a%2 == 0){
		printf("%d\n",a);
	}else if(a%2 != 0 && a<0 ){
		printf("\n");
	}
	return 0;
}
