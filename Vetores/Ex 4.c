#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,numeros[5],n;

    printf("Informe os 5 elementos: ");
    
    for ( i = 0; i <= 5; i++)
    {scanf("%d",&numeros[i]);
    }
    printf("agaora digite um numero: ");
    scanf("%d",&n);
    for ( i = 0; i <= 5; i++)
    {   
       if (n == numeros[i])
        {
            printf("o %d  apareceu %d vezes",n,numeros[i]+i);
        } 
        
    }
    
    

    return 0;
}
