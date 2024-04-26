#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generateFloatArr(float *arr, int n, float min, float max);
void displayIntArr(float *arr,int n);
int main(){
	float *arr;
	int n;
	printf("Nhap vao so luong phan tu: ");
	scanf("%d",&n);
	arr = (float*)malloc(n*sizeof(int));
	float min,max;
	printf("Nhap vao min: ");
	scanf("%f",&min);
	printf("Nhap vao max: ");
	scanf("%f",&max);	
	generateFloatArr(arr,n,min,max);
	displayIntArr(arr,n);
}
void generateFloatArr(float *arr, int n, float min, float max){
	int i;
	srand(time(0));	
	for(i=0; i<n ; i++)
		*(arr+i) = min + ((float)rand() / (RAND_MAX/(max-min)));
}
void displayIntArr(float *arr, int n){
	int i;
	for(i=0;i<n; i++)
		printf("a[%d] = %.2f \n",i,*(arr+i));
}
