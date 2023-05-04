#include<stdio.h>
#include<math.h>
    int main()
    {
        float valor;
        int cent1,cent5,cent10,cem;

        printf("Digite o valor : ");
        scanf("%f",&valor);

        
        cent5=valor/0.5;
        cent10=valor/10;
        
       
        if (fmod(valor,100)==0)
        {      cem=valor/100; 
                printf("%0.2f reais corresponde a %0.f notas de 100 reais\n",valor,cem);
        }else printf("%0.2f reais corresponde a %0.2f notas de 100 reais\n",valor,cem);
        
        
        if (cent1=fmod(valor,50))
        {   cent1=valor/50;
           printf("%0.2f reais corresponde a %0.2f notas de 50 reais\n",valor,cent1);
        }else printf("%0.2f reais corresponde a %0.2f notas de 50 reais\n",valor,cent1);
        
        
        
        
        
        
        printf("%0.2f reais corresponde a %0.2f moedas de 5 centavo\n",valor,cent5);
        printf("%0.2f reais corresponde a %0.2f moedas de 10 centavo\n",valor,cent10);
        
        return 0;
    }
    