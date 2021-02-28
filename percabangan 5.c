#include<stdio.h>
int main(){
	int a = -2;
int b = a+a;
int c = b*b;
if (a>b)
    if (c<b)
        printf("%d\n", c);
    else
        printf("%d\n", b);
else
    if (c<a)
        printf("%d\n", c);
    else
        printf("%d\n", a);
}
