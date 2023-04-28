#include<stdio.h>
    int main()
    {   
        float n[30];
        int i;

        for ( i = 0; i < 30; i++)
        {
           printf("Informe a nota do aluno %d :",i+1);
           scanf("%f",&n[i]);
        }printf("\n\n");
        for ( i = 0; i < 30; i++)
        {
            printf("a nota do %d aluno foi %0.2f \n",i+1,n[i]);
        }
        
        
        
        return 0;
    }
    