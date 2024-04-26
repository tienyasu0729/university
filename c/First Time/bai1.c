#include<stdio.h>
int main(){
	int a; 
	int b;
	printf("Enter a: ");
	scanf("%d", &a);
	fflush(stdin);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("tong cua a va b : %d\n", a+b);
	printf("hieu cua a va b : %d", a-b);

}
