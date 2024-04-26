#include<stdio.h>
#include<string.h>

int main(){
	int n;
	int m;
	char *nhap;
	nhap = (char *)
	char arr[n][m];
	printf("Nhap so hang cua ma tran: ");
    scanf("%d", &n);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &m);
     for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Nhap phan tu arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);

            // Tìm ph?n t? l?n nh?t trong ma tr?n
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    printf("Ma tran vua nhap la: \n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
