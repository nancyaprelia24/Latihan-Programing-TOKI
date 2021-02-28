#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int  a,b,c,x1,x2,y1,y2,x,y;
	scanf("%d %d %d %d"),&x1,&x2,&y1,&y2;
	
	a= x1-x2;
	b= y1-y2;
	
	c=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("%d\n",c);
	return 0;
}

