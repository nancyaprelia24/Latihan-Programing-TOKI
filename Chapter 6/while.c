#include<stdio.h>

int main(){
	char inputan[100];
	
	while(getchar() != EOF){
		scanf("%s",&inputan);
		printf("%s\n", &inputan);
	}
	return 0;
}
