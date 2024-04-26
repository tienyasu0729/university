//Cach 2: Dung ham gets

#include<stdio.h>

int tongChuSo(char str[]);

int checkDigit(char kt);

void check(char str[100]);

int count(char arr[100]);

void count1char(char arr[100]);
int main(){

char str[100];

printf("Nhap vao chuoi: ");

gets(str);
check(str);
printf("\nSo luong ki tu: %d", count(str));
count1char(str);
}
void count1char(char arr[100]){
	int count = 0;
	char find;
	int i;
	printf("Nhap ki tu can dem: ");
	scanf("%c", &find);
	for(i = 0; arr[i] != '\0' ; i++){
		if(arr[i] == find){
			count ++;
		}
	}
	if(count != 0){
		printf("Ki tu %c khong co trong chuoi", find);
	}else{
		printf("Phan tu %c xuat hien %d lan.", find, count);
	}
}

void check(char str[100]){
int i;

int valid = 1;

for(i=0; str[i] != '\0'; i++){

if(checkDigit(str[i])==0){

	valid= 0; break;
}
}

if(valid==0){

printf("Du lieu nhap vao khong hop le. ");
}else{

int kq = tongChuSo(str); printf("Tong chu so la: %d", kq);
}
}

int count(char arr[100]){
	int count = 0;
	int i;
	for(i = 0; arr[i] != '\0' ; i++){
		if(arr[i] >='A' && arr[i] <= 'z'){
			count ++;
		}
	}
	return count;
}

int tongChuSo(char str[]){

int i, sum = 0;

int chuSo;

for(i=0;str[i] !='\0'; i++){

chuSo = str[i] - '0';//doi qua gia tri so

sum = sum + chuSo;
}

return sum;
}

int checkDigit(char kt){

if(kt>= '0'&& kt<='9'){
return 1;
}
return 0;
}

