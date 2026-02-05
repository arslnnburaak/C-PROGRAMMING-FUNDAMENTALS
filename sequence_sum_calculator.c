#include <stdio.h>

int main() {
    // Dizilerin tanimlanmasi
    int A[5];
    int B[5];
    int C[5];
    int i;

    // A dizisinin elemanlarinin kullanicidan alinmasi
    printf("--- A Dizisinin Elemanlarini Giriniz ---\n");
    for(i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    // B dizisinin elemanlarinin kullanicidan alinmasi
    printf("\n--- B Dizisinin Elemanlarini Giriniz ---\n");
    for(i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    // Toplama islemi: C[i] = A[i] + B[i]
    // Ve sonucun ekrana yazdirilmasi
    printf("\n--- C Dizisi (Sonuc: A + B) ---\n");
    for(i = 0; i < 5; i++) {
        C[i] = A[i] + B[i];
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}
