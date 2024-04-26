#include<stdio.h>

void tungXucXac(int n){
	int result;
	int throw = 1;
	int xuc1;
	int xuc2;
	do{
		xuc1 = rand()%6+1;
		xuc2 = rand()%6+1;
		result = xuc1 + xuc2;
		printf("Result of throw %d: %d + %d = %d", throw, xuc1, xuc2, result);
		throw++;
	}while(thow != n);
}

int main(){
	int n;
	printf("Total sought: ");
	scanf("%d", &n);
	tungXucXac(n);
}
