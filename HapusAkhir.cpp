#include<stdio.h>
//NAMANYA ADALAH STACKS, TUJUAN DIA HAPUS DATA TERAKHIR DALAM SEBUAH ARRAY 
int main(){
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	arr[size-1]=0;
	size--;
	
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
