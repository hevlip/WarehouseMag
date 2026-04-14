#include <stdio.h>

int main() {
    int secim;

    printf("+------------------+   +------------------+   +------------------+\n");
    printf("|      URUN        |   |     SIPARIS      |   |      satis       |\n");
    printf("+------------------+   +------------------+   +------------------+\n\n");

    printf("1 - Urun Islemleri\n");
    printf("2 - Siparis Islemleri\n");
    printf("3 - Kaydet ve Cik\n");
    scanf("%d",&secim);  
	printf("%d ",secim);
    
    
    switch(secim){
    	case 1:
    		printf("Urun islemleri");
    	break;
    	
    	case 2:
    	printf("Siparis islemleri");
    	break;
    	
    	case 3:
    	printf("Kaydet ve Cik");
    	break;
    	
    	default:
    		printf("Yanlis secetiniz lutefen menu deki sailar secininz sadece ");
	}

    return 0;
}