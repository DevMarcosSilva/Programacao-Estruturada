#include<stdio.h>

    int main()
    {
         float n1,n2;
         
         printf("Digite o primeiro numero : ");
         scanf("%f",&n1);
         system("cls");
         printf("Digite o segundo numero : ");
         scanf("%f",&n2);
        system("cls");
         if (n1>n2)
         {  printf("%0.1f e maior que %0.1f !", n1,n2);
            
         }else
            printf("%0.1f e maior que %0.1f ",n2,n1);
            
        return 0;
    }
    