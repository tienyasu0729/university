#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

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

int main(){
	printf("")
}


