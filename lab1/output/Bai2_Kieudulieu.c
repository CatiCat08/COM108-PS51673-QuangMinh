#include <stdio.h>
int main() {
    int namSinh; //%d
    float diemTB; //%f
    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);
    printf("Nhap diem trung binh:");
    scanf("%f", &diemTB);
    //xuat
    printf("Nam Sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", 2026 - namSinh);
    printf("Diem trung binh: %f\n", diemTB);
    return 0;
}