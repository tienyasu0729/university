#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int checkChoose(int numberOfChoose){
	int choose = 0;
	int check = 1;
	do{
			scanf("%d", &choose);
			if(choose <= numberOfChoose && choose > 0){
				check = 0;
			}else{
				printf("\n- Nhap sai roi, xin nhap lai: ");
			}		
		}while(check == 1);
	return choose;
}

void generateFloatArr(int *arr, int n, int min, int max){
	int i;
//	srand(time(0));	
	for(i=0; i<n ; i++)
//		*(arr+i) = min + ((float)rand() / (RAND_MAX/(max-min)));
		*(arr+i) = rand()% (max-min+1)+min;
}
void displayIntArr(int *arr, int n){
	int i;
	for(i=0;i<n; i++)
//		printf("a[%d] = %.2f \n",i,*(arr+i));
		printf("a[%d] = %d \n",i,*(arr+i));

}
void swap(int* min, int* max){
	int sp = *min;
	*min = *max;
	*max = sp;
}


int main(){
	int *arr;
	int n;
	int min,max;
	while(true){
	printf("\n----- MENU -----\n1. tao mang int ngau nhien\n2. hien thi mang\n3. Exit.\n- Nhap lua chon cua ban: ");
	int choose = checkChoose(3);
	switch(choose){
		case 1:
    		printf("Nhap vao so luong phan tu: ");
			scanf("%d",&n);
			arr = (int*)malloc(n*sizeof(int));
			printf("Nhap vao min: ");
			scanf("%d",&min);
			printf("Nhap vao max: ");
			scanf("%d",&max);
			if(min > max){
				swap(&min, &max);
			}	
			generateFloatArr(arr,n,min,max);
				break;
		case 2:
    		displayIntArr(arr,n);
			break;
		case 3:
			exit(0);
			break;
		}
	}
}

