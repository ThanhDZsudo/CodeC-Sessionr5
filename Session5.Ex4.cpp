#include <stdio.h>

int main() {
    int a;
    do {
    printf("Nhap so tu 1 den 10: ");
    scanf("%d",&a);
	}while (a < 1 || a > 10);
	printf("\nBang cuu chuong %d:\n");
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n",a,i,a*i);
        }
}

