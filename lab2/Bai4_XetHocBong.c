#include <stdio.h>
int main () {
    float diemTB;
    int HanhKiem;
    // nhap du lieu
    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTB);
    printf("Nhap hanh kiem (1: Tot, 0: Khac): ");
    scanf("%d", &HanhKiem);
    // kiem trai dieu kien hoc bong
    int DieuKienDiem = diemTB >= 8;
    int DieuKienHanhKiem = HanhKiem == 1;
    // xet hoc bong bang toan tu logic &&
    int HocBong = DieuKienDiem && DieuKienHanhKiem;
    //xuat ket qua
    printf(" Dieu kien diem trung binh >= 8: %d\n", DieuKienDiem);
    printf("Dieu kien hanh kiem tot: %d\n", DieuKienHanhKiem);
    printf("Ket qua xet hoc bong (1: dat, 0: khong dat): %d\n", HocBong);
    return 0;
}