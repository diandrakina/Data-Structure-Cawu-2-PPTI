#include<stdio.h>
/*Review Pointer and Array*/

/*
POINTER

*/
int passByReference(int arr[]){
	//fungsi ini akan mendapatkan alamatnya;
	int array=0;
	for(int i=0; i<5; i++){
		array+=arr[i];
	}
	return array;
}

int main(char *pr, int *u){
	int x;
	int a, b, c;
	
	//passing by reference
	x = scanf("%d %d %d", &a, &b, &c);
	
	printf("%d\n\n", x); //x itu menghitung berapa inputan yang dimasukin (x=3 karena ada 1. a, 2. b, dan 3. c
	
	int y;
	int *py;
	py = &y;
	y = 10;
	*py = 10;
	//&a return alamat a dan masukkin ke pa sebagai value
	
	printf("%d\n", &py);
	printf("%d\n\n", y);
	
	//coba soal
	int w  = 10;
	int *p = &w;
	
	printf ("%d\n", *p);
	
	w = 17;
	*p = 20;
	
	printf ("%d\n\n", w);

/*
ARRAY 
secara memori, dia pasti berurutan
*/
	int aa[5] = {0, 1, 2, 3, 4};
	int bb[3][3] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
	
	printf("%d\n", bb[0]); //return address dari bb
	printf("%d\n\n", bb[1][2]); 
		
	/*
	a[0]= integer
	b[0]= array 1 dimensi pertama
	kalau mau akses array 2 dimensi (elemen), cetak b[0][0]
	*/
	
	printf("%d\n", passByReference(aa));
	
	int d[100000];
	int i, check;
//	printf("Jika mau input, type 1\n");
//	scanf("%d", &check);
	//bisa dimasukkan ke looping atau ke fungsi
	while(true){
		printf("Jika mau input, ketik 1\n");
		scanf("%d", &check);
		
		if(check==1){
			scanf("%d", &d[i]);
			i++;
		}else{
			printf("Size array = %d\n", i);
			break;
		}
	}
	
	return 0;
}
