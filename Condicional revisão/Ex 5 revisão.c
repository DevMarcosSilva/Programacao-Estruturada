#include<stdio.h>
#include<math.h>
    int main()
    {
       int n1,quadrado,raiz;
        printf("Digite um numero : ");
        scanf("%d",&n1);

        if (n1>0)
        {   quadrado = pow(n1,2);
            raiz = sqrt(n1);
            printf("O resultado de %d elevado ao quadrado e %d e a raiz de %d e %d",n1,quadrado,n1,raiz);
        }
            else
        printf("%d nao e positivo",n1);
        
    }
    