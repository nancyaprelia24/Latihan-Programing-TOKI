#include<iostream>
using namespace std;

int main(){
	
	int a,b,c,e=-1;
	cin>>a;
	
	for(b=1; b<=a; b++)
	{ //baris
		for (c=1; c<=b; c++)
		{ //kolom
			e=e+1; // e yang awalnya -1 akan menjadi 0
			
			if(e==10){
				e=0;
			}
			cout<<e; //menampilkan hasil
		}
		cout<<endl;
	}
	return 0;
}
