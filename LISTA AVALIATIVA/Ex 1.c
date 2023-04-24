#include<stdio.h>
    
    int main()
    {
        int a,b,c,d,dif;
        
        printf("Informe os valores de A, B, C e D: ");
        scanf("%d%d%d%d",&a,&b,&c,&d);

        dif = (a*b-c*d);

        printf("%d * %d - %d * %d",a,b,c,d);
        printf("= %d",dif);
        
        return 0;
    }