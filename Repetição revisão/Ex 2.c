#include<stdio.h>
    int main(int argc, char const *argv[])
    {
        int n,i;
        printf("Informe  o numero: ");
        scanf("%d",&n);

        for ( i = n; i >= 0 ; i--)
        {
           printf("%d ",i);
        }
        
        return 0;
    }
    