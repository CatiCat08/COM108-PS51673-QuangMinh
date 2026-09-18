#include <stdio.h>
int main() {
    // khai bao va gian gia tri truc tiep
    int a = 20;
    int b = 15;
    // gia tri truoc khi hoan vi
    printf("truoc khi hoan vi: a = %d, b = %d\n", a, b);  
    // hoan vi khi su dung so trung gian
    a = a + b;
    b = a - b;
    a = a - b;
    // gia tri sau khi hoan vi
    printf("sau khi hoan vi: a = %d, b = %d\n", a, b);
    return 0;
}