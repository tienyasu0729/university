#include <stdio.h >
#include <string.h> 
int menu(); 
int tinhSHCN(int a, int b); 
int demSLXH(int n); 
void in7KTG(char str[]); 
void sapxepMang(float arr[], int s); 
int main(){
	int luachon; 
	int a, b, n,s; 
	char str[100];
	float arr[100]; 
	luachon = menu();
	printf("Nhap vao lua chon: ");
	scanf("%d", &luachon);
	switch (luachon){
		case 1: 
			printf("S = %d ",tinhSHCN(a, b));
			break;
		case 2: 
			printf("Nhap vao so n: ");
			scanf("%d",&n); 
			printf("So lan xuat hien cua so lon nhat trong n la : %d", demSLXH(n));
			break;
		case 3: 
			printf("Nhap vao chuoi ");
			scanf("%s", &str);
			in7KTG(str);
			break; 
		case 4: 
			  sapxepMang(arr, s);
		default :
			printf("Nhap sai: Nhap lai"); 
			 
	}
} 
int menu(){
	int luachon;
	printf("===========Menu=========\n");
	printf("1 - Tinh dien tich hinh chu nhap. \n");
	printf("2 - Dem so lan xuat hien cua so lon nhat trong so n nhap tu ban phim.\n");
	printf("3 - In ra 7 ki tu giua trong chuoi nhap vao. \n");
	printf("4 - Sap xep mang so thuc theo thu tu giam dan duoc nhao vao. \n");
	return luachon; 
} 
int tinhSHCN(int a, int b){
	int s;  
	printf("Nhap vao a: \n");
	scanf("%d", &a);
	printf("nhap vao b: \n");
	scanf("%d", &b);
	s = a*b;
	return s; 
}
int demSLXH(int n){
	int dem= 0; 
	int du, digit, max = 0; 
	do{
	digit = n % 10;
	if (digit > max) {
		max = digit;
		dem++; 
	}
	n = n/10;
	}while (n> 0);
	return dem; 
} 
void in7KTG(char str[]){
	int i; 
	int len = strlen(str);
	int doan = len/2; 
	for (i = doan - 3 ; i<= doan + 3 ; i++)
	printf("%c", str[i]); 
}
void sapxepMang(float arr[], int s){
	int i, j, tam; 
	printf("Nhap vao so luong phan tu cua mang :");
	scanf("%d", &s); 
	for (i = 0; i < s ; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%f", &arr[i]); 
		fflush(stdin);
		printf("Phan tu arr[%d] vua nhap la = %.2f\n", i,arr[i]);
	} 
	
	for (i = 0; i< s ; i++){
		for (j = i ; j < s ; j++ ){
			if(arr[j] > arr[i]) {
				tam = arr[i];
				arr[i]= arr[j];
				arr[j] = tam; 
			}
		} 
	}  
	printf("mang da sap xep la : \n");
	for (i = 0; i< s ; i++){
		printf("arr[%d] = %.2f", i, arr[i]); 
	} 
}
