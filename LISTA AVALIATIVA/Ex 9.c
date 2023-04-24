#include<stdio.h>

    int main()
    {
        float qtdaabacaxi,qtdamaca,qtdapera,calca,calcm,calcp;
        int escolha,escolha2;
        
        do{
        printf("SELECIONE A FRUTA DESEJADA : \n");
        printf("1- ABACAXI R$ 5,00\n");
        printf("2- MACA R$ 1,00\n");
        printf("3- PERA R$ 4,00\n");
        scanf("%d",&escolha);
        system("cls");
        
        switch (escolha)
        { 
        case 1:
            printf("Informe a Qtda de abacaxis desejados: ");
            scanf("%f",&qtdaabacaxi);
            calca = qtdaabacaxi*5.0;
            system("cls");
            break;
        case 2:
            printf("Informe quantas macas deseja: ");
            scanf("%f",&qtdamaca);
            calcm = qtdamaca*1.0;
            system("cls");
            break;
        case 3:
            printf("Informe quantas peras deseja: ");
            scanf("%f",&qtdapera);
            calcp = qtdapera*4.0;
            system("cls");
        break;    
        default:printf("OPCAO INVALIDA!\n");
            sleep(1);
            break;
        } printf("Para voltar ao menu inicial digite 1 ou 2 para finalizar a compra! \n");
        scanf("%d",&escolha2);
        system("cls");
       
        }while (escolha2==1);
         printf("O total da compra e: R$ %0.2f",calca+calcm+calcp);
        
        return 0;
    }
    