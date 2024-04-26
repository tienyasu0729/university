#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int n;
	int choose;
	char *arr;
	printf("Nhap n phan tu trong mang: ");
	scanf("%d", &n);
	fflush(stdin);
	arr = (char *)malloc(n * sizeof(char));
	printf("Nhap mang: ");
	gets(arr);
	fflush(stdin);
	while(1 == 1){
		printf("----- MENU -----\n1. Sap xep cac phan tu trong mang theo thu tu tang dan tu trai qua phai\n2. Sap xep cac phan tu trong mang theo thu tu giam dan tu trai qua phai\n 3. Tim trong mang vua nhap co gia tri 7 hay khong, neu khong tra ve NO\n 4. Thoat\n");
		printf("Nhap lua chon cua ban: ");
		choose = checkChoose(4);
		switch(choose){
			case 1:
				tangDan(arr);
				break;
			case 2:
				giamDan(arr);
				break;
			case 3:
				timKiem(arr);
				break;
			case 4:
				exit(0);
				break;
		}
	}
}

int checkChoose(int numberOfChoose){
	int choose = 0;
	int check = 1;
	do{
			scanf("%d", &choose);
			if(choose <= numberOfChoose && choose > 0){
				check = 0;
			}else{
				printf("\nKhong tim thay lua chon, xin nhap lai: ");
			}		
		}while(check == 1);
	return choose;
}

void tangDan(char *arr){
	int i;
	int k;
	char temp;
	for(k=i=0; i < strlen(arr); i++){
		for(k=0; k < strlen(arr); k++){
			if(arr[i] < arr[k]){
				temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;
			}
		}
	}
	printf("Mang sau khi sap xep tang dan la: %s\n", arr);
}

void giamDan(char *arr){
	int i;
	int k;
	char temp;
	for(k=i=0; i < strlen(arr); i++){
		for(k=0; k < strlen(arr); k++){
			if(arr[i] > arr[k]){
				temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;
			}
		}
	}
	printf("Mang sau khi sap xep giam dan la: %s\n", arr);
}

void timKiem(char *arr){
	int i;
	if(strchr(arr, '7') == NULL){
		printf("NO\n");
	}else{
		printf("YES\n");
	}
}






