    
#include <stdio.h>
#include <string.h>

// Bai 1: Dem nguyen am va phu am
void bai1() {
    char s[100];
    int nguyenAm = 0, phuAm = 0;

    printf("Nhap chuoi: ");
    scanf(" %[^\n]", s);

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c >= 'a' && c <= 'z') {
            c = c - 32;
        }

        if (c >= 'A' && c <= 'Z') {
            if (c == 'A' || c == 'E' || c == 'I'
                || c == 'O' || c == 'U') {
                nguyenAm++;
            } else {
                phuAm++;
            }
        }
    }

    printf("Nguyen am: %d\n", nguyenAm);
    printf("Phu am: %d\n", phuAm);
}

// Bai 2: Dang nhap
void bai2() {
    char username[30];
    char password[30];

    printf("Nhap username: ");
    scanf("%29s", username);

    printf("Nhap password: ");
    scanf("%29s", password);

    if (strcmp(username, "admin") == 0 &&
        strcmp(password, "12345") == 0) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap that bai!\n");
    }
}

// Bai 3: Sap xep 5 chuoi
void bai3() {
    char s[5][30];
    char temp[30];

    for (int i = 0; i < 5; i++) {
        printf("Nhap chuoi thu %d: ", i + 1);
        scanf("%29s", s[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(s[i], s[j]) > 0) {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("Danh sach sau khi sap xep:\n");

    for (int i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }
}

// Bai 4: Doi thap phan sang thap luc phan
void bai4() {
    int n;
    char hexa[20];
    char bangChuSo[] = "0123456789ABCDEF";
    int i = 0;

    printf("Nhap so nguyen khong am: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("So khong hop le!\n");
        return;
    }

    if (n == 0) {
        printf("Ket qua: 0\n");
        return;
    }

    while (n > 0) {
        int du = n % 16;
        hexa[i] = bangChuSo[du];
        i++;
        n = n / 16;
    }

    printf("Ket qua: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexa[j]);
    }

    printf("\n");
}

// Menu chinh
int main() {
    int chon;

    do {
        printf("\n===== MENU LAB 7 =====\n");
        printf("1. Dem nguyen am va phu am\n");
        printf("2. Dang nhap\n");
        printf("3. Sap xep 5 chuoi\n");
        printf("4. Doi sang he thap luc phan\n");
        printf("5. Thoat\n");
        printf("Chon Chuc Nang(1-5): ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                bai1();
                break;

            case 2:
                bai2();
                break;

            case 3:
                bai3();
                break;

            case 4:
                bai4();
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
