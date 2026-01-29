#include <stdio.h>
#include <string.h>

struct SINHVIEN {
    char mssv[10];
    char hoten[30];
    int namsinh;
    float diem;
    char malop[10];
};

typedef struct SINHVIEN SV;

void nhapSV(SV *a);
void xuatSV(SV a);
void nhapDSSV(SV a[], int n);
void xuatDSSV(SV a[], int n);

int main() {
    SV a[100];
    int n;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    nhapDSSV(a, n);
    xuatDSSV(a, n);

    return 0;
}

void nhapDSSV(SV a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("\nNhap sinh vien thu %d\n", i+1);
        nhapSV(&a[i]);
    }
}

void xuatDSSV(SV a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("\nSinh vien thu %d: ", i+1);
        xuatSV(a[i]);
    }
}

void nhapSV(SV *a) {
    printf("\nNhap MSSV: ");
    scanf("%s", a->mssv);

    getchar(); 

    printf("Nhap ho ten: ");
    fgets(a->hoten, sizeof(a->hoten), stdin);
    a->hoten[strcspn(a->hoten, "\n")] = '\0';

    printf("Nhap nam sinh: ");
    scanf("%d", &a->namsinh);

    printf("Nhap diem: ");
    scanf("%f", &a->diem);

    printf("Nhap ma lop: ");
    scanf("%s", a->malop);
}

void xuatSV(SV a) {
    printf("%s\t%s\t%d\t%.2f\t%s\n",a.mssv, a.hoten, a.namsinh, a.diem, a.malop);
}

