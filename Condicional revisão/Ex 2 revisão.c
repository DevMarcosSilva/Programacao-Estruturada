#include<stdio.h>

    int main()
    {
         float n1,n2;
         
         printf("Digite o primeiro e o segundo numero: ");
         scanf("%f%f",&n1,&n2);
         system("cls");
         
         if (n1>n2)
         {  printf("%0.1f e maior que %0.1f !", n1,n2);
     }else if (n1 == n2)
         {
            printf("%0.1f e %0.1f sao iguais!",n1,n2);
            }else{
            printf("%0.1f e maior que %0.1f ",n2,n1);
            }
         }
    