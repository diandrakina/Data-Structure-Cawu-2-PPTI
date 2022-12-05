#include<stdio.h>
int main(){
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	int hapus; 
	printf("Pilih posisi elemen yang mau dihapus : ");
	scanf("%d", &hapus);
	
	for(int i=hapus-1; i<size-1; i++){
		arr[i] = arr[i+1];
	}
	size--;
	
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
