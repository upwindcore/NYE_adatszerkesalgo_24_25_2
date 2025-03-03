// Döntés optimálisabban

/*
Algoritmus Dontes_3(N, X, van)
    i:=1
    van:=hamis
    Ciklus (nem T(X[i])) és i<=N
            i:=i + 1
    Ciklus
    van:= i<=N
Algoritmus
 */


#include <stdio.h>

int T(char *s)
{
    return s[0]>='A' && s[0]<='Z';
}

void Dontes_3(int N, char**X, int* van)
{
    int i=0;
    *van=0;
    while ((!T(X[i])) && i<N)
        i++;
    *van=i<N;
}

int main()
{
    char * x[]={"alma", "korte","asdf"};
    int letezik;
    Dontes_3(3, x, &letezik);
    printf(letezik?"Van":"Nincs");

    return 0;
}