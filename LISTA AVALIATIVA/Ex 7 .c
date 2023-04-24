#include<stdio.h>
    
    int main()
    {
        int n1,ante1=1,ante2=0,i,atual;

        printf("Informe a quantidade desejada:");
        scanf("%d",&n1);
        system("cls");
        printf("Os %d primeiros numeros da sequencia de fibonacci sao :\n",n1);
        printf("%d ",ante2);
        printf("%d ",ante1);
        
        for ( i = 3; i <= n1; i++)
        {
            atual = ante2+ante1;
            printf("%d ",atual);
            ante2=ante1;
            ante1=atual;
        }
        system("pause");
        return 0;
    }
    
    