#include<stdio.h>
    int main(int argc, char const *argv[])
    {
        int n,i;
        printf("Informe o numero: ");
        scanf("%d",&n);

        for ( i = 1; i <= n; i++)
        {   i=n%2;
            i=1;
            printf("%d ",i);
        }
        
        return 0;
    }
    