
#include <stdio.h>
#include <string.h>

struct sinhvien {
    char mssv[50];
    char ten[50];
    char nganh[50];
    float diemtb;
};

struct sinhvien ds[50];
int n = 0;

void nhapxuat();
void sapxep();
void timkiem();
void hocbong();

int main() {
    int chon;

    do {
        printf("\n===== Menu Lab 8 =====\n");
        printf("1. Nhap va xuat danh sach sinh vien\n");
        printf("2. Sap xep sinh vien theo diem tang dan\n");
        printf("3. Tim kiem sinh vien theo MSSV\n");
        printf("4. Xuat sinh vien nhan hoc bong theo nganh\n");
        printf("5. Thoat chuong trinh\n");
        printf("Chon Chuc Nang: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                nhapxuat();
                break;

            case 2:
                sapxep();
                break;

            case 3:
                timkiem();
                break;

            case 4:
                hocbong();
                break;

            case 5:
                printf("Ket thuc chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (chon != 5);

    return 0;
}

// Bai 1: Nhap va xuat sinh vien
void nhapxuat() {
    printf("Nhap so luong sinh vien (1-50): ");
    scanf("%d", &n);

    while (n < 1 || n > 50) {
        printf("So luong khong hop le, nhap lai: ");
        scanf("%d", &n);
    }

    for (int i = 0; i < n; i++) {
        printf("\nSinh vien thu %d\n", i + 1);

        printf("MSSV: ");
        scanf("%49s", ds[i].mssv);

        printf("Ten sinh vien: ");
        scanf(" %49[^\n]", ds[i].ten);

        printf("Nganh hoc: ");
        scanf(" %49[^\n]", ds[i].nganh);

        printf("Diem trung binh: ");
        scanf("%f", &ds[i].diemtb);

        while (ds[i].diemtb < 0 || ds[i].diemtb > 10) {
            printf("Diem phai tu 0 den 10, nhap lai: ");
            scanf("%f", &ds[i].diemtb);
        }
    }

    printf("\n===== Danh sach sinh vien =====\n");

    for (int i = 0; i < n; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("MSSV: %s\n", ds[i].mssv);
        printf("Ten sinh vien: %s\n", ds[i].ten);
        printf("Nganh hoc: %s\n", ds[i].nganh);
        printf("Diem trung binh: %.2f\n", ds[i].diemtb);
    }
}

// Bai 2: Sap xep diem tang dan
void sapxep() {
    if (n == 0) {
        printf("Vui long nhap danh sach sinh vien truoc!\n");
        return;
    }

    struct sinhvien temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].diemtb > ds[j].diemtb) {
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    printf("\n===== Danh sach sau khi sap xep =====\n");

    for (int i = 0; i < n; i++) {
        printf("\nMSSV: %s\n", ds[i].mssv);
        printf("Ten sinh vien: %s\n", ds[i].ten);
        printf("Nganh hoc: %s\n", ds[i].nganh);
        printf("Diem trung binh: %.2f\n", ds[i].diemtb);
    }
}

// Bai 3: Tim sinh vien theo MSSV
void timkiem() {
    if (n == 0) {
        printf("Vui long nhap danh sach sinh vien truoc!\n");
        return;
    }

    char macantim[50];
    int timthay = 0;

    printf("Nhap MSSV can tim: ");
    scanf("%49s", macantim);

    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].mssv, macantim) == 0) {
            printf("\nTim thay sinh vien:\n");
            printf("MSSV: %s\n", ds[i].mssv);
            printf("Ten sinh vien: %s\n", ds[i].ten);
            printf("Nganh hoc: %s\n", ds[i].nganh);
            printf("Diem trung binh: %.2f\n", ds[i].diemtb);

            timthay = 1;
            break;
        }
    }

    if (timthay == 0) {
        printf("Khong tim thay sinh vien co MSSV: %s\n", macantim);
    }
}

// Bai 4: Danh sach hoc bong theo nganh
void hocbong() {
    if (n == 0) {
        printf("Vui long nhap danh sach sinh vien truoc!\n");
        return;
    }

    int cohocbong = 0;

    for (int i = 0; i < n; i++) {
        if (ds[i].diemtb >= 8.0) {
            int dainnganh = 0;

            for (int j = 0; j < i; j++) {
                if (strcmp(ds[i].nganh, ds[j].nganh) == 0
                    && ds[j].diemtb >= 8.0) {
                    dainnganh = 1;
                }
            }

            if (dainnganh == 0) {
                printf("\nNganh: %s\n", ds[i].nganh);

                for (int j = 0; j < n; j++) {
                    if (strcmp(ds[i].nganh, ds[j].nganh) == 0
                        && ds[j].diemtb >= 8.0) {
                        printf("- %s - %s - Diem trung binh: %.2f\n",
                               ds[j].mssv,
                               ds[j].ten,
                               ds[j].diemtb);

                        cohocbong = 1;
                    }
                }
            }
        }
    }

    if (cohocbong == 0) {
        printf("Khong co sinh vien nao dat hoc bong.\n");
    }
}
    