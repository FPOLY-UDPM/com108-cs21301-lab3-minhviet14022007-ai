/******************************************************************************
 * Họ và tên: [Trương Minh Việt]
 * MSSV:      [PS48885]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
#include <math.h>2
int main(){
    int choice;
    // Khai báo biến
printf("========== MENU CHUONG TRINH ==========\n");
    printf("1. Chuong trinh tinh hoc luc\n");
    printf("2. Chuong trinh giai phuong trinh\n");
    printf("3. Chuong trinh tinh tien dien\n");
    printf("0. Thoat\n");
    printf("=======================================\n");
    printf("Moi ban chon chuc nang (0-3): ");
    scanf("%d", &choice);
    // Nhập dữ liệu
if (choice == 1) {
        float diem;
        printf("\n--- TINH HOC LUC ---\n");
        printf("Nhap diem (0-10): ");
        scanf("%f", &diem);
        
        if (diem >= 9) printf("Hoc luc xuat sac\n");
        else if (diem >= 8) printf("Hoc luc gioi\n");
        else if (diem >= 6.5) printf("Hoc luc kha\n");
        else if (diem >= 5) printf("Hoc luc trung binh\n");
        else if (diem >= 3.5) printf("Hoc luc yeu\n");
        else printf("Hoc luc kem\n");
    } else if (choice == 2) {
        float a, b, c, delta;
        printf("\n--- GIAI PHUONG TRINH (Ax^2 + Bx + C = 0) ---\n");
        printf("Nhap a: "); scanf("%f", &a);
        printf("Nhap b: "); scanf("%f", &b);
        printf("Nhap c: "); scanf("%f", &c);

        if (a == 0) {
            if (b == 0) {
                if (c == 0) printf("Vo so nghiem\n");
                else printf("Vo nghiem\n");
            } else {
                printf("Nghiem x = %.2f\n", -c/b);
            }
        } else {
            delta = b*b - 4*a*c;
            if (delta < 0) printf("Vo nghiem\n");
            else if (delta == 0) printf("Nghiem kep x = %.2f\n", -b/(2*a));
            else {
                printf("x1 = %.2f\n", (-b+sqrt(delta))/(2*a));
                printf("x2 = %.2f\n", (-b-sqrt(delta))/(2*a));
            }
        }
    } else if (choice == 3) {
        float kwh, tien;
        printf("\n--- TINH TIEN DIEN ---\n");
        printf("Nhap so kWh: ");
        scanf("%f", &kwh);
        
        if (kwh <= 50) tien = kwh * 1678;
        else if (kwh <= 100) tien = 50*1678 + (kwh-50)*1734;
        else if (kwh <= 200) tien = 50*1678 + 50*1734 + (kwh-100)*2014;
        else if (kwh <= 300) tien = 50*1678 + 50*1734 + 100*2014 + (kwh-200)*2536;
        else if (kwh <= 400) tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (kwh-300)*2834;
        else tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (kwh-400)*2927;
        
        printf("Tien dien phai dong: %.0f dong\n", tien);

    } else if (choice == 0) {
        printf("Da thoat chuong trinh.\n");
    } else {
        printf("Chuc nang khong ton tai!\n");
    }
   // Xử lý, tính toán VÀ Hiển thị kết quả
    return 0;
}

  

