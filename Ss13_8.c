#include <stdio.h>

int ucln(int a, int b){
    while (b != 0){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(){
    int a,b,c;
    printf("Nhap 3 so nguyen: ");
    scanf("%d %d %d",&a,&b,&c);

    int ucln_ab = ucln(a,b);
    int ucln_ac = ucln(a,c);
    int ucln_bc = ucln(b,c);

    int ucln_abc = ucln(ucln_ab, c);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n",a,b,ucln_ab);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n",a,c,ucln_ac);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n",b,c,ucln_bc);
    printf("Uoc chung lon nhat cua %d, %d va %d la: %d\n",a,b,c,ucln_abc);

    return 0;
}
