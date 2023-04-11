#include<stdio.h>
    int main(int argc, char const *argv[])
    {
        int a,b,c,d;

        printf("Informe os valores de A,B,C e D : ");
        scanf("%d%d%d%d",&a,&b,&c,&d);

        if ((b>c)&&(d>a)&&(c+d>a+b)&&(c&&d>0)&& (a%2==0))
        {
            printf("valores aceitos!");
        }else 
            printf("valores nao aceitos!");
        
        return 0;
    }
    