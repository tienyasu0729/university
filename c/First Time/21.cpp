#include<stdio.h>
//void sum(int a, int b, int *result){
//	*result = a+b;
//}
//void change (int n){
//n +=10;
//}
//
//void changeByP (int *n){
//*n +=10;
//}

void array(int *a, int n){
//	printf("%d\n", a);
	int i;
	int max = *a;
	printf("\nMang co cac phan tu la: ");
	for (i = 0; i < n ; i++){
		printf("%d ", *(a+i));
		if(max < *(a+i)){
			max = *(a+i);
		}
	}
	printf("\n\nSo lon nhat la : %d", max);
}

//void array(int a[5]){
//	int i;
//	int max = a[0];
//	printf("\nMang co cac phan tu la: ");
//	for (i = 0; i < 5 ; i++){
//		printf("%d ", a[i]);
//		if(max < a[i]){
//			max = a[i];
//		}
//	}
//	printf("\n\nSo lon nhat la : %d", max);
//}
int main(){
//	int a = 5;
//	int b = 10;
//	int result;
//	sum(a,b,&result);
//	printf("Tong la = %d",result );

	int i;
	int a[100];
	int n;
	int max = *a;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	for (i = 0; i < n ; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", a+i);	
	}
	array(a,n);
	
}


