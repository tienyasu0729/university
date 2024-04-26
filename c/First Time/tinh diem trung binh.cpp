#include<stdio.h>
int main(){
	int toan;
	int ly;
	int hoa;
	float diemtrungbinh;
	printf("Nhap vao day diem toan cua ban: ");
	scanf("%d", &toan);
	printf("\nNhap vao day diem ly cua ban: ");
	scanf("%d", &toan);
	printf("\nNhap vao day diem hoa cua ban: ");
	scanf("%d", &toan);
	diemtrungbinh = (float)(toan + ly + hoa)/3;
	printf("Diem trung binh cua ban la : %.2f \n", diemtrungbinh);
//	if(diemtrungbinh < 4){
//		printf("F");
//	}else if(diemtrungbinh < 5.5){
//		printf("D");
//	}else if(diemtrungbinh < 7){
//		printf("C");
//	}else if(diemtrungbinh < 8.5){
//		printf("B");
//	}else { 
//		printf("A");
//	}
	if(diemtrungbinh < 4){
		printf("Fail");
	}else{
		printf("Pass");
	}
}
