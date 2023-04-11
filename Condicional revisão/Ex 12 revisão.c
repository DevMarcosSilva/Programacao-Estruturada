#include<stdio.h>
    
    int main()
    {
        float x,y;
        
        printf("Informe o valor de X: ");
        scanf("%f",&x);
        system("cls");
        printf("Agora Informe o valor de Y: ");
        scanf("%f",&y);
        system("cls");

        if (x>0 && y>0)
        { printf("Quadrante 1!");            
        }else if (y>0 && x<0)
        { printf("Quadrante 2!");
        }else if (y<0 && x<0)
        { printf("Quadrante 3!");
        }else if (y<0 && x>0)
        { printf("Quadrante 4!");
        }else if (y==0&&x==0)
        {printf("Origem!");
        }else if ( y==0 && x<0)
        {printf("Eixo X ! ");
        }else if (x==0 && y<0)
        {printf("Eixo Y !");
        }else
        printf("Caracter invalido!");
        return 0;
    }
    