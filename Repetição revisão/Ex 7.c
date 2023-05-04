#include<stdio.h>
    int main(int argc, char const *argv[])
    {
        int i,valor,soma;

        for ( i = 0; i <2; i++)
        {
            printf("Digite o %d valor ",i+1);
            scanf("%d",&valor);
            soma=valor+=soma;
        }printf("a soma dos valores e de %d ",soma);
        
        return 0;
    }
    