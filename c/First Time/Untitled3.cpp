#include<stdio.h>
int main(){
	int a; 
	agains:
	printf("Enter a: ");
	scanf("%d", &a);
	fflush(stdin);
	if (a == 1){
	printf("One");
	}else if (a == 2){
	printf("Two");
	}else if (a == 3){
	printf("Three");
	}else if (a == 4){
		printf("Four");
	}else {
		printf("Can not read this number: %d", a);
		goto agains;
	}
}
