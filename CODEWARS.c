#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch1,ch2,ch3;
    printf(" 1:-español\n 2:-English\n");
    scanf("%d",&ch1);
    switch(ch1)
    {
        case 2:
            printf("You have chosen English\n");
            printf("\nSelect your Problem\n");
            printf("1 for Agriculture related problems\n");
            printf("2 for Technical problems\n");
            printf("3 for Computer software related problems\n");
            scanf("%d",&ch2);
            switch(ch2)
            {
            case 1:
                printf("\nFrequently Asked questions:\n");
                printf("I have a lot of pests and insects in my field--1\n");
                printf("Need Fertilizer recommendations? --2\n");
                scanf("%d",&ch3);
                switch(ch3)
                {
                case 1:
                    printf("Bharat Rasayan\nCyfluthrin\nM-Cresol\n");
                    printf("One of these can be used to reduce pests\n");
                    printf("Contact:6309557702 if your problem still exists\n");
                    break;
                case 2:
                    printf("Urea\nAmmonium Chloride\nCalcium ammonium Nitrate\n");
                    printf("Depending on your soil one these fertilizers can be used\n");
                    printf("Contact:6309557702 if your problem still exists\n");
                    break;
                default:
                    printf("Contact:6309557702 if your problem still exists");
                    break;
                }
                break;
            case 2:
                printf("Contact:9966288883 if your problem still exists");
                break;
            case 3:
                printf("Contact:8686687702 if your problem still exists");
                break;
            }
        case 1:
            printf("Has elegido español\n");
            printf("\nSeleccione su problema\n");
            printf("1 para problemas relacionados con la agricultura\n");
            printf("2 para problemas técnicos\n");
            printf("3 para problemas relacionados con el software informático\n");
            scanf("%d",&ch2);
            switch(ch2)
            {
            case 1:
                printf("\nPreguntas frecuentes:\n");
                printf("Tengo muchas plagas e insectos en mi campo.--1\n");
                printf("¿Necesita recomendaciones de fertilizantes? --2\n");
                scanf("%d",&ch3);
                switch(ch3)
                    {
                    case 1:
                        printf("Bharat Rasayan\nCyfluthrin\nM-Cresol\n");
                        printf("Uno de estos se puede utilizar para reducir las plagas.\n");
                        printf("Contacto:6309557703 si su problema persiste\n");
                        break;
                    case 2:
                        printf("Urea\nAmmonium Chloride\nCalcium ammonium Nitrate\n");
                        printf("Dependiendo de su suelo, se pueden usar estos fertilizantes.\n");
                        printf("Contacto:6309557703 si su problema persiste\n");
                        break;
                    default:
                        printf("Contacto:6309557703 si su problema persiste\n");
                        break;
                    }
                    break;
            case 2:
                printf("Contacto: 9966288883 si su problema persiste\n");
                break;
            case 3:
                printf("Contacto: 8686687702 si su problema persiste\n");
                break;
            }
    }
return 0;
}
