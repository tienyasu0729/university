#include <stdio.h>
#include <ctype.h>

int main() {
   int num;
   printf("Enter a number: ");
//   if (scanf("%d", &num) != 1) {
//      printf("Error: Invalid input\n");
//      return 1;
//   }
//   printf("You entered: %d\n", num);
//   return 0;
	num = checkChoose(4);
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
