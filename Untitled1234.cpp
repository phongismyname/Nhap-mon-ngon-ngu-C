#include <stdio.h>

int main(void){
    //khai bao bien a kieu so nguyen
    int a;
    //khoi tao gia tri bien a
    a = 7;
    //khai bao va tao bien
    int b = 8;
    //khai bao nhieu bien va khoi tao
    int c = 1, d = 3;
    //khai bao bien
    int e, f, g;
    printf("Bien a = %d va Bien b = %d",a,b);
    e= a + b ;
    printf("\n");
    printf("Tong a + b =%d",e);
    printf("\n");
    printf("Tong a + b = %d",a,b,e);
    getchar();
    return 0;
}
