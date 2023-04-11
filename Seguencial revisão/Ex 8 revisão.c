#include<stdio.h>

    int main(int argc, char const *argv[])
    {
        int A,B,C,D,DIFERENCA;
        
        printf("Digite 4 valores : ");
        scanf("%d%d%d%d",&A,&B,&C,&D);    

        DIFERENCA = ((A*B) - (C*D));

        printf("%d * %d - %d * %d \n",A,B,C,D);
        printf("Diferenca e : %d",DIFERENCA);
        return 0;
    }
    