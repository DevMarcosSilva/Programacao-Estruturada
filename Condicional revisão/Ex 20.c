#include<stdio.h>
    int main(int argc, char const *argv[])
    {
        float n1,n2,n3,n4,media,p1,p2,p3,p4,exame=0,mediafinal=0;
    
        printf("informe as 4 notas: ");
        scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

        p1=n1*2;
        p2=n2*3;
        p3=n3*4;
        p4=n4*1;
        media=(p1+p2+p3+p4)/4;

        printf("media %0.2f \n",media);
        if (media>= 7.0)
        {
            printf("Aluno aprovado!");
        }else if (media<5)
        {
            printf("Aluno reprovado!");
        }else if (media>=5.0 && media<=6.9)
        {
            printf("Aluno em exame!\n");
            printf("Informe a nota do exame! ");
            scanf("%f",&exame);
            printf("Nota do exame %0.2f!\n",exame);
            mediafinal=(exame+media)/2;
            if (mediafinal>=5.0)
            {   printf("Sua media final foi %0.2f\n",mediafinal);
                printf("Aluno Aprovado!");
                
            }else if (mediafinal<5)
            {
                
                printf("Sua media final foi %0.2f \n",mediafinal);
                printf("Aluno reprovado!");
            }
            
            
        }else printf("erro");
            

        return 0;
    }
    