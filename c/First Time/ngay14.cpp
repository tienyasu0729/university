#include<stdio.h>
#include<string.h>

int main(){
	int i;
	char *arr;
	arr = (char *)malloc(1000 * sizeof(char));
	do{
		printf("Nhap vao mang ban muon thao tac: ");
		gets(arr);
		printf("----- MENU -----\n1. In ra do dai cua mang\n2. In ra mang dao nguoc\n3. Nhap vao mang 2, so sanh 2 mang\n4. Noi mang 2 vao mang 1\n5. Thoat");
		
	}while(true);
}
