#include<stdio.h>
#include<stdlib.h>

int checkChoose(int numberOfChoose){
	int choose = 0;
	int check = 1;
	do{
		try{
			scanf("%d", &choose);
			if(choose >= numberOfChoose || choose <= 0){
				check = 0;
			}else{
				printf("\nBan da nhap sai, xin nhap lai: ");
			}
		}catch(char e){
			printf("\naaaaaaaaaa ");
		}
	}while(check == 1);
	return choose;
}

int main() {
  int number;
  int b;
  printf("Enter an integer: ");
  int result = scanf("%d", &number);
  printf("%d\n",scanf("%d", &b));
  if (result != 1) {
    printf("Invalid input. You did not enter an integer.\n");
  } else {
    printf("You entered: %d\n", number);
  }
  return 0;
}
