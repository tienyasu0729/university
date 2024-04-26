#include<stdio.h>
int main(){
    int a; 
    agains:
	printf("Enter a: ");
	scanf("%d", &a);
	fflush(stdin);
	switch(a){
		case 1:
			printf("One");
			break;
		case 2:
			printf("Two");
			break;
		case 3:
			printf("Three");
			break;
		case 4:
			printf("Four");
			break;
		default:
			
			printf("Can not read this number: %d \n", a);
			goto agains;
			
		}
}
