#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int menu();
int checkChoose(int numberOfChoose);
int cau1(int topEdge, int bottomEdge, int height);
float cau2(int x, int n);
void cau3(int *arr, int n);
void cau4(char *name, char *id);


int main(){
	int boolean = 1;
	int choice;
	int x;
	int n;
	int *arr;
	char *fullName;
	fullName = (char *)malloc(1000 * sizeof(char));
	char *id;
	id = (char *)malloc(10000 * sizeof(char));
	int topEdge;
	int bottomEdge;
	int height;
	while(boolean == 1){
		choice = menu();
		switch(choice){
			case 1:
				break;
			case 2: 
				printf("Enter x: ");
				scanf("%d", &x);
				printf("Enter n: ");
				scanf("%d", &n);
				printf("Equalt: %.f\n", cau2(x,n));
				break;
			case 3:
				printf("Enter n: ");
				scanf("%d", &n);
				arr = (int *)malloc(n * sizeof(int));
				cau3(arr,n);
				break;
			case 4:
				printf("Enter your Full name: ");
				scanf("%s", fullName);
				printf("Enter your id: ");
				scanf("%s", id);
				cau4(fullName, id);
				break;
			case 5:
				exit(0);
				break;
		}
	}
}



int menu(){
	int choice;
	printf("----- MENU -----\n");
	printf("1. Write a function to calculate area of a trapezoid.\n");
	printf("2. Write a function to calculate the sum of arithmetic sequence\n");
	printf("3. Write a function that generates an array of integers with n elements, where each element has a unique random value.\n");
	printf("4. Write a function to process the student's name and ID information to generate their email address.\n");
	printf("5. Exit.\n");
	printf("Enter your choice: ");
	choice = checkChoose(5);
	return choice;
}

int checkChoose(int numberOfChoose){
	int choose = 0;
	int check = 1;
	do{
		fflush(stdin);
		if(scanf("%d", &choose) != 1){
			printf("Lua chon khong hop le, xin nhap lai: ");	
		}else{
			if(choose <= numberOfChoose && choose > 0){
				check = 0;
			}else{
				printf("Khong tim thay lua chon, xin nhap lai: ");
			}	
		}
	}while(check == 1);
			
	return choose;
}

int cau1(int topEdge, int bottomEdge, int height){
	
}


float cau2(int x, int n){
	float s;
	int i;
	int mau;
	for(i = 1; i <= n; i++){
		mau += i;
		if(i % 2 == 0){
			s += pow(x,n)/mau;
		}else{
			s -= pow(x,n)/mau;
		}
		
	}	
	return s;
}

void cau3(int *arr, int n){
	int i;
	for(i = 0; i < n ; i++){
		arr[i] = rand();
		printf("%d\n", arr[i]);
	}
}

void cau4(char *name, char *id){
	char arr[]= "@fpt.edu.vn";
	strcat(name, id);
	strcat(name, arr);
	printf("Email address: %s\n", name);
	
}









