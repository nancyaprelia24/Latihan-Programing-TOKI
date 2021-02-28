#include<stdio.h>
#include<math.h>
int main(){
	int x1,x2,y1,y2,a,b;
	scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
	
	a=x1-x2;
	b=y1-y2;
	
	if(a<0 && b<0){
		printf("%d\n",(-1*a)+(-1*b));
	}
	else if(a<0 && b>0){
		print("%d\n",(-1*a)+(b));
	}
}
