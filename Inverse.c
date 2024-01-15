#include <stdio.h>

int pgcd_euclide(int a, int P, int *u, int *v)
{
    if (a == 0)
    {
        * u= 0;
        *v = 1;
        return P;
    }

    int _u, _v;
    int pgcd = pgcd_euclide(P % a, a, &_u, &_v);

    *u = _v - (P/a) * _u;
    *v = _u;

    return pgcd;
}

int main(){
int a , P, u, v;
   printf("*******************  Calcul de l'inverse de a modulo P  ********************\n");
   printf("Donnez le nombre \n");
   scanf("%d", &a);
   printf("Donnez le modulo\n");
   scanf("%d", &P);

   if (pgcd_euclide(a, P, &u, &v) == 1) {
    printf("l'inverse de   %d   modulo    %d    est :  %d ",a,P,u);
   }
  else {
    printf("%d   n'admet pas un inverse modulo   %d    ",a,P);
  }

return 0;
}
