#include <stdio.h>

int main(){
    int target = 42;
    int input;
    for (input = -1;input != target;){
        printf("Nhap vao mot so nguyen: ");
        scanf("%d", &input);
        
        if (input == target) {
            break;
        } else {
            printf("Hay thu lai\n");
        }
    }
    printf("Ban da nhap dung so %d\n", target);
}

