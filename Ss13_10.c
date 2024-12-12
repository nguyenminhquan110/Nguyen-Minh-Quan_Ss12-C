#include<stdio.h>
int b, c;

void nhapMang(int a[], int n){
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n){
    printf("Cac phan tu cua mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}



void themPhanTu(int a[], int *n, int b, int c){
    
    if (b < 0 || b > *n) {
        printf("Vi tri them khong hop le\n");
        return;
    }
    (*n)++;

    for (int i = *n - 1; i > b; i--) {
        a[i] = a[i - 1];
    }

    a[b] = c;
}

void suaPhanTu(int a[], int n, int b, int c){
    
    if (b < 0 || b >= n){ 
        printf("Vi tri sua khong hop le\n");
        return;
    }

    a[b] = c;
}

void xoaPhanTu(int a[], int *n, int b,int c){
    
    if (b < 0 || b >= *n){
        printf("Vi tri xoa khong hop le!\n");
        return;
    }

    
    for (int i = b; i < *n - 1; i++){
        a[i] = a[i + 1];
    }

    
    (*n)--;
}

void a1(int *c, int *d) {
    int temp = *c;
    *c = *d;
    *d = temp;
}

void sapXep(int a[], int n, int e) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((e == 1 && a[j] > a[j + 1]) || (e == 0 && a[j] < a[j + 1])) {
                a1(&a[j], &a[j + 1]);
            }
        }
    }
}

int timKiem(int a[], int n, int c) {
    for (int i = 0; i < n; i++) {
        if (a[i] == c) {
            return i; 
        }
    }
    return 1; 
}
int main(){
	int a[100],n,i,chose;
	printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int b, c;
    int e;
	do{
		printf("-------MENU-------\n");
		printf("1. Nhap gia tri phan tu\n");
		printf("2. In gia tri cac phan tu dang quan ly\n");
		printf("3. Them 1 phan tu vao vi tri chi dinh\n");
		printf("4. Sua 1 phan tu o vi tri chi dinh\n");
		printf("5  Xoa 1 phan tu o vi tri chi dinh\n");
		printf("6. Sap xep cac phan tu (Khi lua chon menu cha thi hien thi menu con)\n \n a. Giam dan\n \n b. Tang dan\n");
		printf("7. Tim kiem phan tu nhap vao\n");
		printf("8. Thoat\n");
		printf(" Lua chon cua ban: ");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				nhapMang(a,n);
				break;
			case 2:
				xuatMang(a,n);
				break;
			case 3:
                printf("Nhap vi tri can them: ");
                scanf("%d", &b);
                printf("Nhap gia tri can them: ");
                scanf("%d", &c);

                themPhanTu(a, &n, b, c);

                for (int i = 0; i < n; i++){
                printf("%d",a[i]);
            }
            printf("\n");
				break;
			case 4:
				printf("Nhap vi tri can sua: ");
                scanf("%d", &b);
                printf("Nhap gia tri can sua: ");
                scanf("%d", &c);

                suaPhanTu(a, &n, b, c);

                for (int i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
				break;
			case 5:
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &b);
                printf("Nhap gia tri can xoa: ");
                scanf("%d", &c);

                xoaPhanTu(a, &n, b, c);

                for (int i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
				break;
			case 6:
				sapXep(a, n,1);
				
				break;
			case 7:
				printf("Nhap gia tri can tim: ");
                scanf("%d", &c);

                e = timKiem(a, n, c);
                if (e == -1) {
                    printf("Khong tim thay\n");
                } else {
                    printf("Tim thay tai vi tri: %d\n", e);
                }
				break;
			case 8:
			    break;		
		}
		if (chose >= 1 && chose <= 2) {
            printf("Mang sau khi sap xep: ");
            for (int i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
        }
	}while(chose != 8);
	
	
	return 0;
}

