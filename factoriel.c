#include <stdio.h>
#include <stdlib.h>
#include<string.h>

unsigned long long factoriel(int n)
{
    if(n == 0){
        return 1;
    }else{
      return (n* factoriel(n-1));
    }
}

int main()
{
    int nbr;
    long long fact;

    printf("Entrez un nombre dont vous voulez calculer son factoriel\n");
    scanf("%d", &nbr);

    if(nbr>0){
        fact = factoriel(nbr);
        printf("%d! = %lld\n", nbr, fact);

    }
   return 0;
}
