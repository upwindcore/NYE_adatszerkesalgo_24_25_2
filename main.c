// A döntés

/*
Algoritmus Dontes_1(N, X, van)
    van:=hamis
    Ciklus i:= 1...N
        van:= van vagy T(X[i])
    Ciklus
Algoritmus
 */

#include <stdio.h>

int T(int a)
{
    int p=1;
    for(int o=2; o<=a/2; o++)
        if(a%o==0)p=0;
        //p=p&&a%o;
    return p;
}

void Dontes_1(int N, int *X, int *van)
{
    *van=0;
    for (int i; i<N; i++)
        *van= *van || T(X[i]);
}


int main()
{
    int t[]={4, 6, 24, 45, 65};
    int db=sizeof(t)/sizeof(t[0]);
    int letezik;
    Dontes_1(db, t, &letezik);
    printf(letezik?"Van":"Nincs");

    return 0;
}