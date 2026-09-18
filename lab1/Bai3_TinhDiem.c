#include <stdio.h>
int main() {
    //khai bao gia tri
    char MSSV[] = "PS51673"; 
    char hoten[] = "Vuong Quang Minh";
    float toan = 8.5;
    float ly = 6.5;
    float hoa = 9.5;
    // tinh diem trung binh
    float diemTB = (toan*2 + ly +hoa)/4;
    //xuat ket qua
    printf("Nhap ma so sinh vien: %s\n", MSSV);
    printf("Ho va Ten: %s\n", hoten);
    printf("Diem trung binh: %.2f\n", diemTB);
    return 0;
}