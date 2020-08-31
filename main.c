//SEFA ENES ERGİN-sefaenesergin@gmail.com
//Klavyeden girilecek 0 ile 999 arasında bir tam sayının, yazıyla ifade eden ( örneğin 49, 'kırkdokuz' gibi ) program.


#include<stdio.h>
    int main( void )
    {
        int sayi,birler,onlar,yuzler;
        printf("Lütfen 1-999 arasında bir sayı giriniz.");
        scanf("%d",&sayi);
        birler=sayi%10;
        onlar=(sayi/10)%10;
        yuzler=(sayi/100);
        
        
        switch (yuzler) {
            case 1:
                if(sayi==100)
                printf(" yüz");
                break;
            case 2:
                printf("iki yüz");
                break;
            case 3:
                printf("üç yüz");
                break;
            case 4:
                printf("dört yüz");
                break;
            case 5:
                printf("beş yüz");
                break;
            case 6:
                printf("altı yüz");
                break;
            case 7:
                printf("yedi yüz");
                break;
            case 8:
                printf("sekiz yüz");
                break;
            case 9:
                printf("dokuz yüz");
                break;
            default:
                break;
        }
        switch (onlar) {
            case 1:
                printf(" bir");
                break;
            case 2:
                printf(" yirmi");
                break;
            case 3:
                printf(" otuz");
                break;
            case 4:
                printf("kırk");
                break;
            case 5:
                printf(" elli");
                break;
            case 6:
                printf(" altmış");
                break;
            case 7:
                printf(" yetmiş");
                break;
            case 8:
                printf(" seksen");
                break;
            case 9:
                printf(" doksan");
                break;
            default:
                break;
        }
        switch (birler) {
            case 1:
                printf("bir");
                break;
            case 2:
                printf(" iki");
                break;
            case 3:
                printf(" üç");
                break;
            case 4:
                printf(" dört");
                break;
            case 5:
                printf(" beş");
                break;
            case 6:
                printf(" altı");
                break;
            case 7:
                printf(" yedi");
                break;
            case 8:
                printf(" sekiz");
                break;
            case 9:
                printf(" dokuz");
                break;
            default:
                break;
        }
        
        
        return 0;
        
    }
