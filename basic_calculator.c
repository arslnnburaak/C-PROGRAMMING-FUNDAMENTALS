#include <stdio.h>

int main()
{
    float sayi1;
    float sayi2;
    printf("İlk sayıyı girin: ");
    scanf("%f",&sayi1);
    printf("İkinci sayıyı girin: ");
    scanf("%f",&sayi2);
    printf("%f +%f =%f \n",sayi1,sayi2,sayi1+sayi2);
    printf("%f -%f =%f \n ",sayi1,sayi2,sayi1-sayi2);
    printf("%f X %f =%f ",sayi1,sayi2,sayi1*sayi2);
    return 0;
}