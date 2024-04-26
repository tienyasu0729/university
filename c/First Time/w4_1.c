#include <stdio.h>
#include <math.h>

void cauBa(int n){
	int sum;
	int i;
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			sum += i;
			if(sum <= n){
				printf("%d ", i);
			}else{
				sum -= i;
			}
		}
	}
	if(sum != n){
		printf("So %d khong phai la so hoan hao.", n);
	}
}

int main(){
	int n;
	printf("Nhap so nguyen : ");
	scanf("%d", &n);
	printf("Cac uoc cua %d la: ", n);
	cauBa(n);
}
