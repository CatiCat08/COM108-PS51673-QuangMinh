#include <stdio.h>
#define PI 3.14159
int main() {
    double ChieuDai, ChieuRong, BanKinh; 
    double ChuViHCN, DienTichHCN;
    double ChuViHinhTron, DienTichHinhTron;
    //nhap hinh chu nhat
    scanf("%lf", &ChieuDai);
    scanf("%lf", &ChieuRong);
    //nhap hinh tron
    scanf("%lf", &BanKinh);
    //tinh hinh chu nhat
    ChuViHCN = (ChieuDai + ChieuRong) * 2;
    DienTichHCN = ChieuDai * ChieuRong;
    //tinh hinh tron
    ChuViHinhTron = 2 * PI * BanKinh;
    DienTichHinhTron = PI * BanKinh * BanKinh;
    //xuat ket qua
    printf("Chu vi hinh chu nhat: %.2f\n", ChuViHCN);
    printf("Dien tich hinh chu nhat: %.2f\n", DienTichHCN);
    printf("Chu vi hinh tron: %.2f\n", ChuViHinhTron);
    printf("Dien tich hinh tron: %.2f\n", DienTichHinhTron);
    return 0;
}