#include<stdio.h>
//#include<iostream>
int main() {
	char hoten[50];
	int tuoi; 
	char lop[50]; 
	printf("Moi ban nhap vao ho va ten: ");
	gets(hoten);
	printf("Moi ban nhap vao tuoi: ");
	scanf("%d", &tuoi);
	fflush(stdin);
	printf("Moi ban nhap vao : ");
	gets(lop);
	printf("chao ban, \" %s \" %d tuoi, lop %s\n", hoten, tuoi, lop);



}
