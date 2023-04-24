#include<stdio.h>

int main()
{
    int n1, maior, menor;

    printf("Digite um numero inteiro e positivo, para finalizar o programa basta apenas digitar um numero negativo: ");
    scanf("%d", &n1);
    system("cls");
    maior = n1; 
    menor = n1;

    while (n1 >= 0)
    {
        printf("Digite um numero inteiro e positivo, para finalizar o programa basta apenas digitar um numero negativo: ");
        scanf("%d", &n1); 
        system("cls");
        if (n1 >= 0){
            if (n1 > maior) {
                maior = n1;
            }
            if (n1 < menor) {
                menor = n1;
            }
        }
    }
    
    printf("O maior numero informado foi %d e menor foi %d\n", maior,menor);
    
    return 0;
}