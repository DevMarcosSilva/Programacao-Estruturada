#include<stdio.h>
    int main()
    {   
        float n[49];
        int i,numero[49];

        for ( i = 0; i < 50; i++)
        {
           printf("Informe o numero do aluno: ");
           scanf("%d",&numero[i]);
           printf("Agora informe a nota do %d aluno \n",numero[i]);
           scanf("%f",&n[i]);
           system("cls");
        }printf("\n\n");
        for ( i = 0; i < 50; i++)
        {
            printf("a nota do %d aluno foi %0.1f \n",numero[i],n[i]);
        }
        
        system("pause");
        
        return 0;
    }
    