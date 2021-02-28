#include<stdio.h>

int temp = 0;
int main(){
	int a,b,c,hasil;
	scanf("%d",&a);
	for(b=0;b<a;b++){
		scanf("%d",&c);
		temp += c;
		hasil = temp;
		c++;
	}
	printf("%d\n",hasil);
	return 0;
};
