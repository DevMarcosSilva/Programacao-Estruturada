#include<stdio.h>
    int main(int argc, char const *argv[])
    {
        int n1,i;
        
        printf("Informe um numero :");
        scanf("%d",&n1);
        if (n1%3==0)
        {
            printf("%d e divisivel por 3",n1);
        }if (n1%5==0)
        {
            printf("\n%d e divisivel por 5\n",n1);
        }else if (n1%3==1&&n1%5==1)
        {
         printf("\n%d nao e divisivel po 3 nem por 5",n1);
        }
         
        
        
        return 0;
    }
    