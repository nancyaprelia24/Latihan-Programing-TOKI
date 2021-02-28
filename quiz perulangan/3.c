#include<stdio.h>
int main(){
	int n = 100;
int i = 0;
while (n > 1) {
    i = i + 1;
    n = n - (n / 2);
}
printf("%d", i);
}

