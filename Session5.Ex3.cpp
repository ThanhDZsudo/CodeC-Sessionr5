#include <stdio.h>

int main() {
    int a, sum = 0;
    printf("Vui long nhap vao mot so nguyen duong: ");
    scanf("%d", &a);
    if (a > 0){
        for (int i = 1; i <= a; i++){
            sum += i;
        }
        printf("Tong tat ca cac so tu 1 den %d la: %d\n", a, sum);
    } else{
        printf("So nhap vao khong phai la so nguyen duong\n");
    }
}

