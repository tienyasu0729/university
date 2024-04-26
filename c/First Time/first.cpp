#include <stdio.h>
#include <conio.h>
int main (){
	int m = 1;
	long l = 1000;
	float y = 0.5f;
	short s = 32;
	printf("variable m : at addr: %u, value : %d, size : %d \n", &m ,m , sizeof(m));
	printf("variable l : at addr: %u, value : %d, size : %d \n", &l ,l , sizeof(l));
	printf("variable y : at addr: %u, value : %y, size : %d \n", &y ,y , sizeof(y));
	printf("variable s : at addr: %u, value : %d, size : %d \n", &s ,s , sizeof(s));
	getchar();
	return 0;
}
