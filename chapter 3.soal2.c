#include<stdio.h>
int main(){
	char a[100];
	scanf("%[^\t\n]s",a);
	printf("%s\n",a);
	return 0;
}
