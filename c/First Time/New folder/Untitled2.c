#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i;
	char arr[3];
//	printf("nhap :");
//	gets(arr);
	for(i=0; i<=5; i++){
		printf("nhap :");
		scanf("%c", &arr[i]);
		fflush(stdin);
	}
	for(i=0; i<=5; i++){
		printf("%c", arr[i]);
	}
	printf("%s\n", arr);
	printf("%d", strlen(arr));
}
