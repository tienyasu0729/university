#include<stdio.h>
#include <stdlib.h>

int main(){
	int stt = 1;
	int dem = -1;
	char* arr;
	arr = (char*) malloc (100000 * sizeof(char));
	do{
		dem++;
		printf("Nhap ki tu thu %d \n", stt);
		arr[dem] = getchar();
		stt++;
	}while(arr[dem] != 13);
	
	
}
