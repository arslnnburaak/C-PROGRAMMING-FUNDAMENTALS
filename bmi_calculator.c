#include <stdio.h>

int main()
{
    float kg;
    float boy_cm; // Kullanıcıdan cm cinsinden alıyoruz
    float boy_m;  // Metre cinsinden hesaplama için
    float vki;

    printf("BOYUNUZUN UZUNLUĞUNU CM CİNSİNDEN GİRİNİZ: ");
    scanf("%f", &boy_cm); // %f doğru format belirleyici

    printf("KİLONUZU KG CİNSİNDEN GİRİNİZ: ");
    scanf("%f", &kg); // %f doğru format belirleyici

    // VKİ hesaplaması için boyu metreye çevirme: boy_m = boy_cm / 100.0
    boy_m = boy_cm / 100.0; 
    
    // VKİ hesaplama formülü: vki = kg / (boy_m * boy_m)
    vki = kg / (boy_m * boy_m); // Doğru formül ve noktalı virgül

    printf("\n*** Vücut Kitle İndeksiniz (VKİ): %.2f ***\n\n", vki); // VKİ sonucunu göster

    if (vki >= 40) {
        printf("3. DERECE MORBİD OBEZSİNİZ. SAĞLIĞINIZ İÇİN KİLO VERMELİSİNİZ.\n");
    } else if (vki >= 35 && vki <= 39.9) {
        printf("2. DERECE OBEZSİNİZ. SAĞLIĞINIZ İÇİN KİLO VERMELİSİNİZ.\n");
    } else if (vki >= 30 && vki <= 34.9) {
        printf("1. DERECE OBEZSİNİZ (FAZLA KİLOLUSUNUZ). KİLO VERMENİZ SAĞLIKLI KALMANIZA YARDIMCI OLUR.\n");
    } else if (vki >= 25 && vki <= 29.9) {
        // VKİ Sınıflandırmasına göre 25-29.9 arası "Fazla Kilolu" (Pre-obez) olarak geçer. 
        // Kodunuzda bu aralık eksikti, ekledim.
        printf("FAZLA KİLOLUSUNUZ. DİYET VE EGZERSİZ İLE KİLO VERMENİZ ÖNERİLİR.\n");
    } else if (vki >= 18.5 && vki <= 24.9) {
        printf("TEBRİKLER! İDEAL KİLONUZDASINIZ. SAĞLIĞINIZ İÇİN FORMUNUZU KORUYUNUZ.\n");
    } else if (vki < 18.5) { // vki<=18.5 yerine sadece < 18.5 kontrolü daha mantıklı
        printf("NORMAL KİLONUZUN ALTINDASINIZ. DOKTOR GÖZETİMİNDE KİLO ALMALISINIZ.\n");
    }

    return 0;
}
    