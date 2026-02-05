#include <stdio.h>
#include <stdlib.h> // Rastgele sayılar için 
#include <time.h>   // Farklı rastgele sayılar üretebilmek için zaman 
#include <locale.h> // Türkçe değer için

int main() {
    
    // Konsolun Türkçe karakterleri düzgün göstermesi için
    setlocale(LC_ALL, "Turkish"); 

    // 1. Rastgele sayı üreteci için tohum atalım
    // Bunu yapmazsak her oyunda aynı sayıyı tutar :)
    srand(time(NULL)); 

    // 2. Aklından 1-100 arası bir sayı tut
    int gizliSayi = (rand() % 100) + 1;

    int tahmin;
    int tahminHakki = 5;
    int bildiMi = 0; // Oyunu kazanıp kazanmadığını anlamak için

    printf("--- SAYI TAHMİN OYUNU (1-100) ---\n");
    printf("Gizli sayıyı bulmak için %d hakkın var.\n\n", tahminHakki);

    // 3. tahminleri alalım
    for (int i = 0; i < 5; i++) {
        
        printf("Kalan hak: %d. Tahminin: ", tahminHakki - i);
        scanf("%d", &tahmin);

        // Durum 1: Tutturdu!
        if (tahmin == gizliSayi) {
            printf("Tebrikler, doğru tahmin!\n");
            bildiMi = 1; // Kazandı diye not alıyoruz
            break;       // Döngüye gerek kalmadı, buradan çık
        }
        // Durum 2: Aşağıda kaldı
        else if (tahmin < gizliSayi) {
            printf("Daha büyük bir sayı giriniz!\n");
        }
        // Durum 3: Yüksekten uçtu
        else {
            printf("Daha küçük bir sayı giriniz!\n");
        }
    }

    // 4. Döngü bitti. 
    // Eğer 'bildiMi' hala 0 ise, 5 hakkı da bitmiş ve bulamamış demektir.
    if (bildiMi == 0) {
        printf("\nTahmin hakkın bitti. Doğru sayı: %d idi.\n", gizliSayi);
    }

    return 0; // İşimiz bitti
}