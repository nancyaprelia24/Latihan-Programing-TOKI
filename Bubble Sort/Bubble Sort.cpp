#include<stdio.h>

int bubble_sort(arr []){
	int BS = arr.lenght;
	int temp;
	
	for (i=BS-1 ; i>=1; i++){
		for(int j = 0; j<i; j++){
			if(arr[j]>arr[j+i]){
				temp = car[j];
				arr[i] = arr [j+1];
				arr [j+i] = temp;
			}
		}
	}
	return arr;
}
