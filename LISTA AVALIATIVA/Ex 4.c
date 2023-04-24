#include<stdio.h>
    int main()
    {
        float x,y;

        printf("Informe os valores de X e Y: ");
        scanf("%f%f",&x,&y);

        if (x>0 && y>0)
        {printf("Quadrande 1!");
        }else if (y>0 && x<0)
        {printf("Quadrante 2!");
        }else if (x<0 && y<0)
        {printf("Quadrante 3!");
        }else if (x>0 && y<0)
        {printf("Quadrante 4!");
        }else if (y == 0 && x == 0)
        {printf("Origem!");
        }else if (x = 0 && y>0 || y<0)
        {printf("Eixo Y!");
        }else if (y = 0 && x>0 || x<0)
        {printf("Eixo X!");
        }else printf("CARACTER INVALIDO FAVOR DIGITAR SOMENTE NUMEROS!");
        
        
        
        
        
        
        
        return 0;
    }
    