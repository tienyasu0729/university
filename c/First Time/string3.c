#include <stdio.h>
#include <stdlib.h>
int kt (char str[],char c);
int main (){
	char str[10000]="hello";
	int i;
	int dem;
	char c;
	printf ("\nnhap ki tu can tim:");
	scanf ("%c",&c);
	if (kt (str,c) ==1)
		printf("co ki tu %c trong mang",c);
	else
		printf("khong co ki tu %c trong mang",c);

}
int kt (char str[],char c){
		int i,find;	
		for (i=0;str[i]!=0;i++){
		if (c==str[i]){
			return	find=1;
		}
		else 
			i++;			
		}
	return find=0;
}

