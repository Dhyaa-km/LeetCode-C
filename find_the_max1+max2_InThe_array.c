#include <stdio.h>
int main(){
int i ,tab[10], max1, max2;
// fill the array
for ( i = 0; i < 10; i++)
{
   printf("tab[%d]: ", i+1);
   scanf("%d", &tab[i]);
}
max1 = tab[0];
max2= tab[0];
for ( i = 0; i < 10; i++)
{

    if (max1<tab[i])
    {
        max2=max1;
        max1= tab[i];
    }
    if (max2<tab[i] && max1>tab[i])
    {
        max2 = tab[i];
    }
}

printf("%d and %d", max1, max2);

    return 0;
}