/******************************************************************************
 * Họ và tên: [Trương Minh Việt]
 * MSSV:      [PS48885]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main(){
    float SoDien, TienDien;
    // Khai báo biến
    printf("Nhap so dien tieu thu trong thang: ");
    scanf("%f", &SoDien);
    // Nhập dữ liệu
    if (SoDien < 0) {
        printf("So dien tieu thu khong hop le! Vui long nhap so duong.\n");
    } 
    else if (SoDien <= 50) {
        TienDien = SoDien * 1000;
        printf("So tien dien phai dong: %.2f VND\n", TienDien);
    } 
    else {
        TienDien = 50 * 1000 + (SoDien - 50) * 1200;
        printf("So tien dien phai dong: %.2f VND\n", TienDien);
    }
    if (SoDien >= 0){
    printf("So tien dien phai dong: %.2f VND\n", TienDien);
    }
    // Xử lý, tính toán VÀ Hiển thị kết quả
return 0;
}