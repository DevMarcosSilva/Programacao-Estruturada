#include<stdio.h>

    int main()
    {   
        int sal,prestacao;
        
        printf("Digite o valor do seu salario : ");
        scanf("%d",&sal);
        printf("Digite o valor da prestacao: ");
        scanf("%d",&prestacao);
        
        if (prestacao > sal*0.20)
        {   printf("emprestimo nao concedido !");
            
        }else 
        printf("emprestimo concedido");
        
        return 0;
    }
    