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
    if (SoDien <= 50) TienDien = SoDien * 1678;
            else if (SoDien <= 100) TienDien = 50*1678 + (SoDien-50)*1734;
            else if (SoDien <= 200) TienDien = 50*1678 + 50*1734 + (SoDien-100)*2014;
            else if (SoDien <= 300) TienDien = 50*1678 + 50*1734 + 100*2014 + (SoDien-200)*2536;
            else if (SoDien <= 400) TienDien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (SoDien-300)*2834;
            else TienDien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (SoDien-400)*2927;
            
    if (SoDien >= 0){
    printf("So tien dien phai dong: %.2f VND\n", TienDien);
    }
    // Xử lý, tính toán VÀ Hiển thị kết quả
return 0;
}