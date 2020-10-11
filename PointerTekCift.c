#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int DiziTek[10],DiziCift[10],Dizi[10];
int main()
{
    srand(time(NULL));
    int teksayi = 0,ciftsayi = 0;
    int *diziPtr =&Dizi;
    int *dizitekPtr =&DiziTek;
    int *diziciftPtr =&DiziCift;
    int i=0;
    while(i<10)
    {

        *(diziPtr+i)=1+rand()%100;
        i++;
    }
    i = 0;
    while(i<10)
    {
        if(*(diziPtr+i)%2==0)
        {
            *(diziciftPtr+ciftsayi)=(*(diziPtr+i));
            ciftsayi++;
        }
        else
        {
            *(dizitekPtr+teksayi)=(*(diziPtr+i));
            teksayi++;
        }
     i++;
    }
    printf("\n*-*-*-*-*Rastgele Sayilar*-*-*-*-*\n");
    i = 0;
    while(i<10)
    {
        printf("%d. Elemani : %d \n",i+1,*(diziPtr+i));
        i++;
    }
    printf("\n*-*-*-*-*Cift Sayilar*-*-*-*-*\n");
    i = 0;
    while(i<ciftsayi)
    {
        printf("%d. Elemani : %d \n",i+1,*(diziciftPtr+i));
        i++;
    }
    printf("\n*-*-*-*-*Tek Sayilar*-*-*-*-*\n");
    i = 0;
    while(i<teksayi)
    {
        printf("%d. Elemani : %d \n",i+1,*(dizitekPtr+i));
        i++;
    }
    return 0;
}
