 #include <stdio.h>
int main(){
   int i ,tab[10], max;
   
max = tab[0];
for ( i = 0; i < 10; i++)
{
    printf("enter an integer: ");
    scanf("%d", &tab[i]);    

    if (max<tab[i])
    {
        max = tab[i];  
    }
}

printf("the maximum is: %d", max);

return 0;
}
