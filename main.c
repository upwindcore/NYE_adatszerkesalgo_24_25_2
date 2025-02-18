/* Írj egy programot, mely képes egy betűsorozatot kezelni, melyben maximum 5, angol nagybetűs abc-be tartozó
 * betű lehet. Valósítsd meg az alábbi "betűk" típust és a függvényeket: */

/*
void kiir(betuk b) kiírja a betűket:"XCD"
int betukSzama(betuk b)
int ures(betuk b)
int teli(betuk b)
int betesz(betuk b, char c)
char kivesz(betuk b)
betuk letreHoz()
 */


#include <stdio.h>
#include <stdlib.h>

typedef char * betuk;

void kiir(betuk b)
{
    for(int i=0;i<5;i++)
        if(b[i]!='a')
            printf("%c",b[i]);
}
int betukSzama(betuk b)
{
    int db=0;
    for(int i=0;i<5;i++)
        if(b[i]!='a') db++;
    return db;
}
int ures (betuk b)
{
    return !betukSzama(b);
    //Első verzió
    //return betukSzama(b)==0;
    //Másik verzió
    /**if(betukSzama(b)==0)
        //return 1;
    //else return 0;**/
}
int teli (betuk b)
{
    return betukSzama(b)==5;
}
int betesz (betuk b, char c)
{
    if(!teli(b))
    {
        int i=0;
        while(b[i]!='a')
            i++;
        printf("\n%d %c %c",i,b[i],c);
        b[i]=c;
        return 1;
    };
    return 0;
}
char kivesz(betuk b)
{

    int i=0;
    char c;
    while(b[i]=='a')
        i++;
    c=b[i];b[i]='a';
    return b[i];


}
betuk letrehoz()
{
    betuk d=malloc(5);
    d[0]='a';d[1]='a';d[2]='a';d[3]='a';d[4]='a';
    return d;
}
int main()
{

    betuk x=malloc(5);
    x[0]='a';x[1]='a';x[2]='a';x[3]='a';x[4]='a';
    kiir(x);
    printf("\n%d",betukSzama(x));
    printf(ures(x)?"\nUres":"\nNem ures");
    printf(teli(x)?"\nTele":"\nNincs tele");
    //printf(betesz(x,'R')?"\nSiker\n":"\nNincs siker\n");
    kiir(x);
    printf("\n%c\n",kivesz(x));
    kiir(x);
    free(x);
    return 0;
}
