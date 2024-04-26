#include<stdio.h>
#include<math.h>
int main(){
	float x;
	printf("Nhap vao day x : ");
	scanf("%f", &x);
	if(x > 0){
		printf("x la : %.2f", x);
		printf("can bac hai cua x la : %.2f", sqrt(x));
	}else{
		printf("x la : %.2f", x);
		printf("\nx^2 la : %.2f", x*x);
	}
}
