#include <stdio.h>
#include <math.h>
void chucnang1() {
    float x;
    printf("x: ");
    scanf("%f", &x);
   //kiem tra so nguyen
    if (x == (int)x) {
        printf("%.0f la so nguyen\n", x);
    }else {
        printf("%.2f khong phai la so nguyen\n", x);
    }
    //kiem tra so nguye to
    int n = (int)x;
    int Languyento = 1;
    if (n < 2) {
        Languyento = 0;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                Languyento = 0;
                break;
            }
        }
    }
    if (Languyento == 1) {
        printf("%d co phai la so nguyen to: co\n", n);
    } else {
        printf("%d co phai la so nguyen to: khong\n", n);
    }
    // kiem tra so chinh phuong
    int can = sqrt(n);
    if (n >= 0 && can * can == n) {
        printf("%d x la so chinh phuong\n", n);
    } else {
        printf("%d khong phai la so chinh phuong\n", n);
    }
}
void chucnang2() {
        int x, y;
        int UCLN = 1;
        int BCNN;

        printf("Nhap x: ");
        scanf("%d", &x);

        printf("Nhap y: ");
        scanf("%d", &y);
    //tim UCLN
     for (int i = 1; i <= x && i <= y; i++) {
        if (x % i == 0 && y % i == 0) {
            UCLN = i;
        }
     }
// Tim bcnn
     BCNN = x * y / UCLN;
     printf("UCLN cua %d va %d la: %d\n", x, y, UCLN);
     printf("BCNN cua %d va %d la: %d\n", x, y, BCNN);
} 
void chucnang3() {
    int gioBatDau, gioketThuc;
    int soGio;
    double tien;
    do {
        printf("So gio bat dau: ");
        scanf("%d", &gioBatDau);
        printf("So gio ket thuc: ");
        scanf("%d", &gioketThuc);
        if (gioBatDau < 12 || gioketThuc > 23 || gioketThuc < gioBatDau) {
            printf("Nhap sai gio, vui long nhap lai\n");
        }
    } while (gioBatDau < 12 || gioketThuc > 23 || gioketThuc < gioBatDau);

    soGio = gioketThuc - gioBatDau;
    if (soGio <= 3) {
        tien = soGio * 150000;
    } else {
        tien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
    }
    if (gioBatDau >= 14 && gioBatDau <= 17) {
        tien = tien * 0.9;
    }
    printf("So gio da su dung: %d\n", soGio);
    printf("So tien phai tra: %.0f\n", tien);
}
void chucnaang4() {
    float kwh;
        float tien = 0;

        do {
            printf("Nhap so kwh tieu thu: ");
            scanf("%f", &kwh);

            if (kwh < 0) {
                printf("So kwh tieu thu khong hop le\n");
            }
        } while (kwh < 0);

        if (kwh <= 50) {
            tien = kwh * 1678;
        } else if (kwh <= 100) {
            tien = 50 * 1678 + (kwh - 50) * 1734;
        } else if (kwh <= 200) {
            tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
        } else if (kwh <= 300) {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
        } else if (kwh <= 400) {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
        } else {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
        }

        printf("Tien dien: %.0f VND\nDien Tieu Thu: %.0f kwh\n", tien, kwh);
}
void chucnang5() {
    int tien;
    int menhgia[] = {200, 100, 50, 20, 10, 5, 2, 1};
    int soto;

    do {
        printf("Nhap so tien can do: ");
        scanf("%d", &tien);
        if (tien <= 0) {
            printf("So tien khong hop le, vui long nhap lai\n");
        }
    } while (tien <= 0);

    for (int i = 0; i < 8; i++) {
        soto = tien / menhgia[i];
        if (soto > 0) {
            printf("%d to %d\n" , soto , menhgia[i]);
        }
        tien = tien % menhgia[i];
    }
}
void chucnang6() {
    float tienvay;
    float laisuat = 0.05;
    float tiengoc;
    float tienlai;
    float tienphaitra;
    float tienconlai;

    do {
        printf("Nhap so tien can vay: ");
        scanf("%lf", &tienvay);
        if (tienvay <= 0)
            printf(" So tien vay khong hop le, vui long nhap lai\n");
    } while (tienvay <= 0);
    tiengoc = tienvay / 12;
    tienconlai = tienvay;

    printf("\nkyhan\tLaipPhaitra\tGocPhaiTra\tSoTienPhaiTra\tSoTienConLai\n");

    for (int i = 1; i <= 12; i++) {
        tienlai = tienconlai * laisuat;
        tienphaitra = tiengoc + tienlai;
        tienconlai = tienconlai - tiengoc;
        printf("%d\t%.0f\t%.0f\t%.0f\t%.0f\n", 
            i, tienlai, tiengoc, tienphaitra, tienconlai);
    }
void chucnang7() {}
}