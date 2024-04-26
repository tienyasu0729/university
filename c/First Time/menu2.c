#include<stdio.h>
#include<math.h>
#include <stdlib.h>

void hoanDoiDauVaCuoi(){ 
int n, lastDigit, firstDigit, newNumber;
printf("\n--- HOAN DOI CHU SO DAU VA CUOI CUA N ---");
    printf("Nhap n: ");
    scanf("%d", &n);

    lastDigit = n % 10;
    firstDigit = n;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    int m = pow(10, (int)log10(n));
    newNumber = lastDigit * m + ( ((n % m) - lastDigit )) + firstDigit;	

    printf("So sau khi hoan doi la: %d\n", newNumber);
}

void timSoDaoNguocCuaN(){ 
printf("\n--- TIM SO DAO NGUOC CUA N ---");
	int n;
	int nAfter = 0;
	printf("\nNhap n: ");
	scanf("%d", &n);
	while(n != 0){
		nAfter = nAfter	* 10 + (n % 10);
		n /= 10;
	}
	printf("Dao nguoc cua n la: %d", nAfter);
}

void inRaNgayCuaThang(){
	printf("\n--- IN RA NGAY CUA THANG ---");
	int nam;
	int thang;
	int ngay;
	
	printf("\nNhap nam cua thang can kiem tra: ");
	scanf("%d", &nam);
	do{
	printf("\nNhap thang can kiem tra: ");
	scanf("%d", &thang);
	}while(thang > 12 || thang < 0);
	switch(thang){
		case 2:
			if(nam % 4 == 0){
				printf("Thang 2 co 29 ngay.");
			}else{
				printf("Thang 2 co 28 ngay.");
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Thang %d co 30 ngay.", thang);
			break;
		default : 
			printf("Thang %d co 31 ngay.", thang);
	}
}

void tinhSoLuongVaTongCacChuSo(){
	printf("\n--- TINH TONG VA SO LUONG CAC CHU SO CUA N ---");
	int tong = 0;
	int sl = 0;
	int d;
	int x;
    printf("Nhap so nguyen: ");
    scanf("%d", &x);
    while (x > 0) {
    	d = x % 10;
        tong += d; 
        sl ++;
        x /= 10; 
    }
    printf("Tong cac chu so la: %d\n", tong);
    printf("So luong cac chu so la: %d\n", sl);
}

void soNguyenToNhoHonN(){
	printf("\n--- IN RA CAC SO NGUYEN TO NHO HON N ---");
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

int checkChoose(int numberOfChoose){
	int choose = 0;
	int check = 1;
	do{
			scanf("%d", &choose);
			if(choose <= numberOfChoose && choose >= 0){
				check = 0;
			}else{
				printf("\nKhong tim thay lua chon, xin nhap lai: ");
			}		
		}while(check == 1);
	return choose;
}

int main(){
	int loop = 1;
	int choose;
	while(loop == 1){
	printf("\n\n----- MENU -----\n1. In ra cac so nguyen to nho hon n\n2. In ra ngay cua thang\n3. Tim so dao nguoc cua n\n4. In ra tong cac chu so, so luong chu so cua n\n5. Hoan doi chu so dau voi so cuoi cua 1 so\n0. Exit.\n");
	printf("Nhap su lua chon cua b: ");
	choose = checkChoose(5);
	fflush(stdin);
	switch(choose){
		case 1:
			soNguyenToNhoHonN();
			break;
		case 2:	
			inRaNgayCuaThang();
			break;
		case 3:
			timSoDaoNguocCuaN();
			break;
		case 4:
			tinhSoLuongVaTongCacChuSo();
			break;
		case 5:
			hoanDoiDauVaCuoi();
			break;
		case 0:
			exit(0);
			break;
	}
	}
}
