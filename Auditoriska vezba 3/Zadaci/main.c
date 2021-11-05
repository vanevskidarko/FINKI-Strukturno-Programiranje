#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Zadaca 1
    /*
    char ch;
    int rez;
    printf("vnesete znak:");
    scanf("%c", &ch);
    rez = (ch >= 'a') && (ch <= 'z');
    printf("%d",rez);
    return 0;
    */
    //Zadaca 2
    /*
    int x,y,z;
    printf("Vnesete gi x i y");
    scanf("%d%d", &x,&y);
    z = x++ + --y +(x<y);
    printf("z = %d\n",z);
    */

    //Zadaca 5 cena na proizvod + ddv
    /*
    float cena;
    printf("Vnesete cena na proizvod");
    scanf("%f", &cena);
    printf("Vkupna cena na proizvodot e %.3f\n",cena*1.18);
    */

    //Zadaca 6 cela suma + kamata
    /*
    float cena, kamata, rata, vkupno;
    int brojRati;
    printf("Vnesete ja cena na proizvodot");
    scanf("%f", &cena);
    printf("Vnesete broj na rati");
    scanf("%d", &brojRati);
    printf("Vnesete ja kamtata: ");
    scanf("%f", &kamata);
    vkupno = cena*(1+kamata/100);
    rata = vkupno/brojRati;
    printf("edna rata ke iznesuva %.2f\n", rata);
    printf("Vkupna isplaetna suma ke bide %.2f\n", vkupno);
    */

    //Zadaca 7
    int broj;
    printf("Vnesete tricifren broj");
    scanf("%d", &broj);
    printf("Najznacen broj e %d\n", broj/100);
    printf("A najmalku znachaen broj e %d\n", broj%10);
    return 0;
}
