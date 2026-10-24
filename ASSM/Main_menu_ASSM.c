#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
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
void chucnang4() {
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
        scanf("%f", &tienvay);
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
}
void chucnang7() {
    double phanTramTraTruoc;
    double tienXe = 500000000;
    double tienTraTruoc, tienVay;
    double laiSuatThang = 0.072 / 12;
    int soThang = 24;
    double tienTraHangThang;

    printf("Nhap phan tram tra truoc (0 - 100): ");
    scanf("%lf", &phanTramTraTruoc);

    if (phanTramTraTruoc < 0 || phanTramTraTruoc > 100) {
        printf("Phan tram khong hop le!\n");
        return;
    }

    tienTraTruoc = tienXe * phanTramTraTruoc / 100;
    tienVay = tienXe - tienTraTruoc;

    tienTraHangThang = tienVay * laiSuatThang
        * pow(1 + laiSuatThang, soThang)
        / (pow(1 + laiSuatThang, soThang) - 1);

    printf("Tien tra truoc: %.0f VND\n", tienTraTruoc);
    printf("Tien vay: %.0f VND\n", tienVay);
    printf("Tien tra hang thang: %.0f VND\n",
           tienTraHangThang);   
}
char* hocLuc(float diem) {
    if (diem >= 9.0)
        return "Xuat sac";
    else if (diem >= 8.0)
        return "Gioi";
    else if (diem >= 6.5)
        return "Kha";
    else if (diem >= 5.0)
        return "Trung binh";
    else
        return "Yeu";
}
void chucnang8(){
struct SinhVien {
    char hoTen[100];
    float diem;
};
    struct SinhVien sv[100], temp;
    int n, i, j;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("So luong khong hop le!\n");
        return;
    }

    for (i = 0; i < n; i++) {
        printf("\nNhap ho ten sinh vien %d: ", i + 1);
        scanf(" %99[^\n]", sv[i].hoTen);

        printf("Nhap diem: ");
        scanf("%f", &sv[i].diem);

        if (sv[i].diem < 0 || sv[i].diem > 10) {
            printf("Diem khong hop le!\n");
            return;
        }
    }

    // Sap xep diem giam dan
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (sv[i].diem < sv[j].diem) {
                temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }

    printf("\n===== DANH SACH SINH VIEN =====\n");
    printf("%-25s %-10s %-15s\n",
           "Ho ten", "Diem", "Hoc luc");

    for (i = 0; i < n; i++) {
        printf("%-25s %-10.2f %-15s\n",
               sv[i].hoTen,
               sv[i].diem,
               hocLuc(sv[i].diem));
    }
}
void chucnang9() {
    int a, b, x, y;
    int soTrung = 0;

    srand(time(NULL));

    a = rand() % 15 + 1;

    do {
        b = rand() % 15 + 1;
    } while (b == a);

    printf("=== GAME FPOLY-LOTT (2/15) ===\n");
    printf("Nhap so thu nhat (1-15): ");
    scanf("%d", &x);

    printf("Nhap so thu hai (1-15): ");
    scanf("%d", &y);

    if (x < 1 || x > 15 || y < 1 || y > 15 || x == y) {
        printf("Du lieu khong hop le!\n");
        return;
    }

    if (x == a || x == b)
        soTrung++;

    if (y == a || y == b)
        soTrung++;

    printf("\nHai so trung thuong la: %d va %d\n", a, b);

    if (soTrung == 0)
        printf("Chuc ban may man lan sau!\n");
    else if (soTrung == 1)
        printf("Chuc mung ban da trung giai nhi!\n");
    else
        printf("Chuc mung ban da trung giai nhat!\n");
}
void chucnang10() {
    int a, b, c, d;
    int tu, mau, ucln, i;

    printf("Nhap phan so thu nhat:\n");
    printf("Nhap tu so: ");
    scanf("%d", &a);
    printf("Nhap mau so: ");
    scanf("%d", &b);

    printf("Nhap phan so thu hai:\n");
    printf("Nhap tu so: ");
    scanf("%d", &c);
    printf("Nhap mau so: ");
    scanf("%d", &d);

    if (b == 0 || d == 0) {
        printf("Mau so phai khac 0!\n");
        return;
    }

    // Phep cong
    tu = a * d + b * c;
    mau = b * d;
    ucln = 1;

    for (i = 1; i <= (tu < 0 ? -tu : tu) && i <= mau; i++) {
        if (tu % i == 0 && mau % i == 0)
            ucln = i;
    }

    printf("Tong = %d/%d\n", tu / ucln, mau / ucln);

    // Phep tru
    tu = a * d - b * c;
    mau = b * d;
    ucln = 1;

    for (i = 1; i <= (tu < 0 ? -tu : tu) && i <= mau; i++) {
        if (tu % i == 0 && mau % i == 0)
            ucln = i;
    }

    printf("Hieu = %d/%d\n", tu / ucln, mau / ucln);

    // Phep nhan
    tu = a * c;
    mau = b * d;
    ucln = 1;

    for (i = 1; i <= (tu < 0 ? -tu : tu) && i <= mau; i++) {
        if (tu % i == 0 && mau % i == 0)
            ucln = i;
    }

    printf("Tich = %d/%d\n", tu / ucln, mau / ucln);

    // Phep chia
    if (c != 0) {
        tu = a * d;
        mau = b * c;
        ucln = 1;

        for (i = 1; i <= (tu < 0 ? -tu : tu) && i <= (mau < 0 ? -mau : mau); i++) {
            if (tu % i == 0 && mau % i == 0)
                ucln = i;
        }

        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }

        printf("Thuong = %d/%d\n", tu / ucln, mau / ucln);
    } else {
        printf("Khong the chia cho phan so co tu so bang 0!\n");
    }

    return;
}

int main() {
    int luaChon = 0;

    do {
        printf("\n=================== MENU CHUC NANG ===================\n");
        printf("1. Kiem tra so nguyen, nguyen to, chinh phuong\n");
        printf("2. Tim Uoc so chung va Boi so chung cua 2 so\n");
        printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien hang thang\n");
        printf("5. Chuc nang doi tien \n");
        printf("6. Tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Chuong trinh vay tien mua xe\n");
        printf("8. Sap xep thong tin hoc luc sinh vien\n");
        printf("9. Xay dung game FPOLY-LOTT (2/15)\n");
        printf("10. Chuong trinh tinh toan phan so\n");
        printf("0. Thoat chuong trinh\n");
        printf("======================================================\n");
        printf("Vui long chon chuc nang (0-10): ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                chucnang1();
                break;
            case 2:
                chucnang2();
                break;
            case 3:
                chucnang3();
                break;
            case 4:
                chucnang4();
                break;
            case 5:
                chucnang5();
                break;
            case 6:
                chucnang6();
                break;
            case 7:
                chucnang7();
                break;
            case 8:
                chucnang8();
                break;
            case 9:
                chucnang9();
                break;
            case 10:
                chucnang10();
                break;
            case 0:
                printf("Cam on ban da su dung chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
                break;
        }
    } while (luaChon != 0);

    return 0;
}
