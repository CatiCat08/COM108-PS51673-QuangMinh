#include <stdio.h>
int main () {
    float diemToan, diemLy, DiemHoa, DiemTB;
    // nhap diem
    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);
    printf("Nhap diem Hoa: ");
    scanf("%f", &DiemHoa);
    // tinh diem trung binh
      DiemTB = (diemToan * 3 + diemLy * 2+ DiemHoa)/6;
    //xuat diem
    printf("Diem Toan: %.2f\n", diemToan);
    printf("Diem Ly: %.2f\n", diemLy);
    printf("Diem Hoa: %.2f\n", DiemHoa);
    printf("Diem trung binh: %.2f\n", DiemTB);
    return 0;
}
