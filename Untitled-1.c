#include <stdio.h>
int main() {
    printf("Viet nam co bao nhieu dan toc anh em ?\n");
    printf("a. 52\n");
    printf("b. 54\n");
    printf("c. 56\n");
    printf("d. 58\n");
    printf("Nhap dap an cua ban: ");
    char DapAn;
    scanf(" %c", &DapAn);
    switch(DapAn) {
        case 'a':
            printf("Sai roi ban oi !\n");
            break;
        case 'b':
            printf("Qua chuan luon.\n");
            break;
        case 'c':
            printf("Sai roi ban oi !\n");
            break;
        case 'd':
            printf("Sai roi ban oi !\n");
            break;
        default:
            printf("Dap an khong hop le!\n");
    }
}