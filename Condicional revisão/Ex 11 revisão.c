#include<stdio.h>
    
    int main(int argc, char const *argv[])
    {   
        int n1,n2,n3,x;

        printf("Digite 3 numeros inteiros: ");
        scanf("%d%d%d",&n1,&n2,&n3);
        printf("Agora informe a media desejada: \n 1-Geometrica\n 2-Poderada\n 3-Harmonica\n 4-Aritimetica\n");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
          x = n1*n2*n3;
         printf("A media Geometrica e %d",x);
            break;
        case 2:
          x = (n1+2*n2+3*n3)/6;
         printf("A media Poderada e %d",x);
            break;
        case 3:
          x = ((1/n1)+(1/n2)+(1/n3))/1;
         printf("A media Harmonica e %d",x);
            break;
        case 4:
          x = (n1+n2+n3)/3;
         printf("A media Aritimetica e %d",x);
            break;        
        default:printf("opcao invalida!");
            break;
        }
        return 0;
    }
    