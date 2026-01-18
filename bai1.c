/******************************************************************************
 * Họ và tên: [Trương Minh Việt]
 * MSSV:      [PS48885]
 * Lớp:       [COM108]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main() {
    float diem;
    // Khai báo biến
    printf("Nhap diem cua sinh vien (0 - 10): ");
    scanf("%f", &diem);
    // Nhập dữ liệu
    if (diem < 0 || diem > 10) {
        printf("Diem so khong hop le! Vui long nhap tu 0 den 10.\n");
    } 
    else {
        // Xử lý, tính toán và Hiển thị kết quả
        if (diem >= 9) {
            printf("Hoc luc: Xuat sac\n");
        } else if (diem >= 8) {
            printf("Hoc luc: Gioi\n");
        } else if (diem >= 6.5) {
            printf("Hoc luc: Kha\n");
        } else if (diem >= 5) {
            printf("Hoc luc: Trung binh\n");
        } else if (diem >= 3.5) {
            printf("Hoc luc: Yeu\n");
        } else {
            printf("Hoc luc: Kem\n");
        }
    }
    return 0;
}