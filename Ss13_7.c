#include <stdio.h>

void nhapMaTran(int a[100][100], int m, int n){
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void inMaTran(int a[100][100], int m, int n){
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int m, n, a[100][100];

    printf("Nhap so hang: ");
    scanf("%d", &m);
    printf("Nhap so cot: ");
    scanf("%d", &n);

    nhapMaTran(a, m, n);
    printf("Ma tran:\n");
    inMaTran(a, m, n);

    return 0;
}
