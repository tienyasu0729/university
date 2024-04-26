#include<stdio.h>
#include<math.h>
#include <stdlib.h>

void inTu1DenN(){
	int n;
	int i;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(i = 1; i <= n ; i++){
		printf("%d ",i);
	}
}
void uocSoCuaN(){
	int n;
	int i;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Uoc cua n la: ");
	for(i = 1; i <= n ; i++){
		if(n % i == 0){
			printf("%d, ",i);
		}
	}
}

void timSoNhoNhat(){
	int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    int min = 9; 
    int x = n;
    while (x > 0) {
        int d = x % 10; 
        if (d < min) {
            min = d;
        }
        x = x / 10;
    }

    printf("Chu so nho nhat cua so la: %d\n", min);
}

void soNguyenToNhoHonN(){
	int n;
	int i;
	int k;
	int m;
	int check = 1;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("\nSo nguyen to nho hon %d la: 1, ", n);
	for(k = 2; k <= n; k++){
//		m = sqrt(k);
		for(i = 2; i <= sqrt(k); i++){
			if(k % i == 0){
			check = 0;
			}
		}
// 	if(k % 2 != 0 && k % 3 != 0 && k % 5 != 0 && k % 7 != 0 || k == 2 || k == 3 || k == 5 || k == 7){
// 		printf("%d, ",k);
// 	}
		if(check == 1){
			printf("%d, ",k);
		}else{
			check = 1;
		}
	}
}

int main(){
	printf("1. in cac so tu 1 den n\n2. in ra cac uoc so cua n\n3. in ra so nho nhat trong cac chu so cua n\n4. in ra cac so nguyen to nho hon n\n5. Exit\n");
	int choose;
	printf("Nhap su lua chon cua b: ");
	scanf("%d",&choose);
	fflush(stdin);
	switch(choose){
		case 1:
			inTu1DenN();
			break;
		case 2:	
			uocSoCuaN();
			break;
		case 3:
			timSoNhoNhat();
			break;
		case 4:
			soNguyenToNhoHonN();
			break;
		case 5:
			exit(0);
			break;
	}
}
