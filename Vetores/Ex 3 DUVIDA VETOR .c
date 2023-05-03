#include<stdio.h>   
    int main()
    {
        char letra[31];
        int i;

        
        printf("Digite uma palavra com ate 30 letra: ");
        for ( i = 1; i < 31; i++)
        {   
            scanf("%c",&letra[i]);
           
        }
        for ( i = 30; i >= 0 ; i--)
        {
            printf("%c ",letra[i]);
        }
        
        
        return 0;
    }
    