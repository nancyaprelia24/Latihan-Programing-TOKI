#include<stdio.h>
int main(){
	int a ;
	a=7;
if (a <= 3) {
    a = a + 3;
}
if (a <= 10) {
    a = a + 10;
}
if (a <= 20) {
    a = a + 20;
} else if (a <= 40) {
    a = a + 40;
}
printf("%d\n", a);
}
