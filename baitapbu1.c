#include <stdio.h>

int main(int argc, char **argv)
{   //Bai 1
    /*int N;
    printf("\nNhap vao so N: ");
    scanf("%d", &N);
    if ( N % 2 ==0 ) {
        printf("So N la so chan\n");
    }
    else {
        printf("So N la so le\n");
    }
     */
     /*if ( N % 2 == 0  && N % 7 == 0) {
         printf("\nSo N chia het cho 2 va 7\n");
         }
         else {
             printf("\nSo N khong chia het cho 2 va 7\n");
         }
          */
    /*int tong=0;
    for ( int i = 1 ; i <= N; i++ ) {
        if ( N % i == 0 ) {
            i++;
            tong++;
        }
        if (tong > 1) {
            printf("So N khong phai la so nguyen to\n");
            
    }
    else { printf ("So N la so nguyen to\n");}
    break;}
     */
    /*
    int a,b;
    printf("Nhap so a,b (a < b): ");
    scanf("%d%d", &a,&b);
    int S = 0;
    if ( a > b) {
        printf("so b phai lon hon so a!\n");
    }
    else {
    for (int i = a; i <= b; i++) 
        {
        S += i;
    }
    printf("tong cua day so la: %d\n", S);}
     */
    /*int N;
    printf(" Nhap so N ( N > 1)");
    scanf("%d", &N);
    int tong = 0;
    int nghiem = 0;
    if ( N < 1) {
        printf(" phai nhap so lon hon 1!");
    }
    else {
        for ( int i = 2; i <= N; i++ ) {
            for ( int j = 2; j <= (1/2)*i ; j++){
                if (i % j == 0) {
                    nghiem++;
                }
               if ( nghiem == 0) {
                   break;
               }
             
            } tong += i;
        }
       printf(" tong cua cac so nguyen to la : %d", tong);}
    getchar();*/
//bai3
int t[10];
for ( int i = 0; i <= 10; i++) {
    printf(" nhap so nguyen t[%d] = ", i);
    scanf("%d", &t[i]);
} 
    /*int sum =0;
    for ( int i = 0; i <= 10 ; i++){
        sum += t[i];
    }
    printf(" tong cua cac so nguyen la: %d \n", sum);*/
    /*
    int sum = 0;
    for (int i=0; i < 10 ; i++){
    if ( t[i] % 3 == 0 && t[i] % 6 == 0){
        sum += t[i];
    }
    }
    printf(" tong cua cac so chia het cho 3 va 6 la: %d \n", sum);*/
    /*
    int sum = 0;
    for (int i=0; i < 10 ; i++){
    if ( t[i] % 3 == 0 && t[i] % 7 == 0){
        sum += t[i];
    }
    }
    printf(" tong cua cac so chia het cho 3 va 7 la: %d \n", sum);
     * */
     
    
    getchar();
return 0;
}
