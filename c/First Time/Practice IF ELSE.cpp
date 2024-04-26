#include<stdio.h>
#define tiengio 100
#define minluong 150
int main(){
	float gio;
	float phucap;
	float tong;
	printf("Enter your hours: ");
	scanf("%f", &gio);
	printf("\nEnter your allowance: ");
	scanf("%f", &phucap);
	tong = gio * tiengio + phucap;
	if (tong > minluong){
		printf("Luong nhan duoc : %.2f $", tong);
	}else{
		printf("Luong nhan duoc : %d $", minluong);
	}
	
}	
