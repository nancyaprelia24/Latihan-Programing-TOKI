#include <stdio.h>
int main(){
	int a,b;
	
	scanf("%d",&a);
	
	for(b=1;b<=a;b++){
		if(a % b == 0){
			printf("%d\n",a/b);
		}
	}
}
