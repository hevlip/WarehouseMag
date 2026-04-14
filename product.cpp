#include <stdio.h>

struct Urun {
    int id;
    char isim[50];
    int stok;
    float fiyat;
    char tarih[20];
};

void urunEkle() {
    struct Urun yeniUrun;
    
    printf("\n--- Yeni Urun Ekleme ---\n");
    
    printf("Urun ID: ");
    scanf("%d", &yeniUrun.id);
    
    printf("Urun Ismi: ");
    scanf("%s", yeniUrun.isim);
    
    printf("Stok Sayisi: ");
    scanf("%d", &yeniUrun.stok);
    
    printf("Fiyat: ");
    scanf("%f", &yeniUrun.fiyat);
    
    printf("Eklendigi Tarih (GG.AA.YYYY): ");
    scanf("%s", yeniUrun.tarih);
    
    printf("\n>>> Urun Basariyla Alindi: %s (ID: %d)\n", yeniUrun.isim, yeniUrun.id);
}

void urunMenu() {
    int secim;

    printf("\n--- Urun Islemleri ---\n");
    printf("1. Urun Ekle\n");
    printf("2. Listele\n");
    printf("3. Sil\n");
    printf("5. Kaydet ve Cikis\n");
    
    printf("Seciminiz: ");
    scanf("%d", &secim);  
    
    switch(secim) {
        case 1:
            urunEkle(); 
            break;
        case 2:
            printf("Listeleme yapiliyor...\n");
            break;
        case 3:
            printf("Silme islemi secildi...\n");
            break;
        case 5:
            printf("Kaydediliyor...\n");
            break;
        default:
            printf("Gecersiz urun islemi!\n");
    }
}

int main() {
    int secim;

    printf("+------------------+   +------------------+   +------------------+\n");
    printf("|      URUN        |   |      SIPARIS      |   |      satis       |\n");
    printf("+------------------+   +------------------+   +------------------+\n\n");
    printf("1 - Urun Islemleri\n");
    printf("2 - Siparis Islemleri\n");
    printf("3 - Kaydet ve Cik\n");
    
    printf("Seciminiz: ");
    scanf("%d", &secim);  
    
    switch(secim){
        case 1: urunMenu(); break;
        case 2: printf("Siparis islemleri\n"); break;
        case 3: printf("Kaydet ve Cik\n"); break;
        default: printf("Gecersiz secim!\n");
    }

    return 0;
}