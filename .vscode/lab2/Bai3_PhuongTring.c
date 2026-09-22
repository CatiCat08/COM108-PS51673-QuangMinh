#include <stdio.h>
int main () {
    float a ,b;
    float x;
    // nhap so
    printf("nhap so a:");
    scanf("%f", &a);
    printf("nhap so b:");
    scanf("%f", &b);
    // tinh x
    x = (float)(-b) / a;
    // xuat ket qua
    printf("ket qua x = %.2f\n", x);
    return 0;
}