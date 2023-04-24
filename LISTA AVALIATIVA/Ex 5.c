#include<stdio.h>
        
    int main()
    {
        int i,num;
        
        printf("Informe o numero: ");
            scanf("%d",&num);
                system("cls");
                    printf("Os divisores de %d sao: \n",num);
        for ( i = 1; i <= num; i++)
        {   if(num%i==0){  
            printf("%d ",i);
           }
        }
        return 0;
    }
    