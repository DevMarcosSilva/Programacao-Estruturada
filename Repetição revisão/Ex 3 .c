#include<stdio.h>
    int main(int argc, char const *argv[])
    {
        int n,i;
        printf("Informe o numero: ");
        scanf("%d",&n);
        system("cls");
        printf("Os %d primeiros numeros naturais impares sao: \n",n);
        for ( i = 0; i < n+n; i++)
        {   i=i+1;
            
            printf("%d ",i);
        }
        
        return 0;
    }
    