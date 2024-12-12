#include<stdio.h>

void nhapMaTran(int a[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap phan tu a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void inMaTran(int a[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}

void inGocMaTran(int a[100][100], int n, int m) {
    printf("Cac phan tu o goc ma tran:\n");
    printf("%d %d\n", a[0][0], a[0][m-1]);
    printf("%d %d\n", a[n-1][0], a[n-1][m-1]);
}

void inDuongBien(int a[100][100], int n, int m) {
    printf("Cac phan tu nam tren duong bien:\n");
   
    for (int j = 0; j < m; j++) {
        printf("%d ", a[0][j]);
    }
    
    for (int i = 1; i < n; i++) {
        printf("%d ", a[i][m-1]);
    }
    
    for (int j = m-2; j >= 0; j--) {
        printf("%d ", a[n-1][j]);
    }
    
    for (int i = n-2; i > 0; i--) {
        printf("%d ", a[i][0]);
    }
    printf("\n");
}

void inDuongCheo(int a[100][100], int n, int m) {
    printf("Cac phan tu nam tren duong cheo chinh va phu:\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][n-i-1]);
    }
    printf("\n");
}

int laSoNguyenTo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0){
        	return 0;
        }
	}
    return 1;
}

void inSoNguyenTo(int a[100][100], int n, int m) {
    printf("Cac phan tu la so nguyen to:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (laSoNguyenTo(a[i][j])) {
                printf("%d\t", a[i][j]);
            }
        }
    }
    printf("\n");
}

int main(){
	int a[100][100], n, m, choice;

    printf("Nhap so hang va so cot cua ma tran: ");
    scanf("%d%d", &n, &m);
	
	do{
		printf("-------MENU-------\n");
		printf("1. Nhap gia tri phan tu\n");
		printf("2. In gia tri cac phan tu cua mang\n");
		printf("3. In ra cac phan tu o goc theo ma tran\n");
		printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
		printf("5  In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
		printf("6.  IN ra  cac phan tu la so nguyen to theo ma tran\n");
		printf("7. Thoat\n");
		printf(" Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				nhapMaTran(a,n,m);
				break;
			case 2:
				inMaTran( a,n,m);
				break;
			case 3:
				inGocMaTran(a,n,m);
				break;
			case 4:
				inDuongBien(a,n,m);
				break;
			case 5:
				inDuongCheo(a,n,m);
				break;
			case 6:
				inSoNguyenTo(a,n,m);
				break;
			case 7:
				break;
		}
	}while(choice != 7);
	
	
	return 0;
}

