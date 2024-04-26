#include <stdio.h>


int ucln(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}

int main() {
    int choice, a, b;
    do {
        printf("Menu:\n");
        printf("1. Tinh UCLN\n");
        printf("2. Tinh BCNN\n");
        printf("3. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap a: ");
                scanf("%d", &a);
                printf("Nhap b: ");
                scanf("%d", &b);
                printf("UCLN cua %d va %d la %d\n", a, b, ucln(a, b));
                break;
            case 2:
                printf("Nhap a: ");
                scanf("%d", &a);
                printf("Nhap b: ");
                scanf("%d", &b);
                printf("BCNN cua %d va %d la %d\n", a, b, bcnn(a, b));
                break;
            case 3:
                printf("Tam biet!\n");
                break;
            default:
                printf("Ban chon sai, moi chon lai!\n");
        }
    } while (choice != 3);

    return 0;
}

