#include<stdio.h>
#include<stdlib.h>
//1.tim phan tu co trong mang
int timptu(int *a,int n,int k);
//2.tinh tong cac phan tu co trong mang
int tong(int *a,int n);
//3.tinh trung binh cong 
float TBC(int *a,int n);
//4.tim min max trong mang
void minMax(int *a,int n);
void nhapmang(int *a,int n);

int main(){
	int n,*a,k;
	printf ("nhap n=");
	scanf ("%d",&n);
	a =(int*)malloc(n * sizeof(int));
	if (a==NULL){
		printf ("cap phat vung nho khong thanh cong");
		exit(0);
	}
	nhapmang(a,n);
	printf("nhap phan tu can tim:");
	scanf ("%d",&k);
	if (timptu(a,n,k)==1)
		printf ("\nco phan tu %d trong mang.",k);
	else
		printf ("\nkhong co phan tu %d trong mang.",k);
	printf ("\ntong la:%d",tong(a,n));
	printf ("\nTBC la:%f",TBC(a,n));
	minMax(a,n);		
}
void nhapmang(int *a,int n){
	int i;
	for (i=0;i<n;i++){
		printf ("a[%d]=",i);
		scanf ("%d",a+i);
	}
	
}
int timptu(int *a,int n,int k){
	int i;
	for (i=0;i<n;i++)
		if (*(a+i)==k)
			return 1;	
	return 0;		
}
int tong(int *a,int n){
	int i,sum=0;
	for (i=0;i<n;i++)
		sum=sum + *(a+i);
	return sum;
}
float TBC(int *a,int n){
	int tbsum,i,dem=0;
	for (i=0;i<n;i++)
		dem++;
	tbsum=tong(a,n)/dem;
	return tbsum;
}
void minMax(int *a,int n){
	int i;
	int min = *a;
	int max = *a;
	for(i=0; i < n; i++){
		if(min > a[i]){
			min = a[i];
		}
		if(max < a[i]){
			max = a[i];
		}
	}
	printf("\nSo nho nhat la: %d", min);
	printf("\nSo nho nhat là: %d", max);

}
