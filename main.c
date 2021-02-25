#include <stdio.h>

/*
2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =,> ou < a cada pergunta. 
    Utilize o comando if-else.
*/

int main()
{
    char c;
    double x=50,y=x/2;
    for( ; ; )
    {
        printf ("Pense em um numero de 1 a 99\n\n");
        printf("Seu numero eh maior(>), menor(<) ou igual(=) a: %.0lf\t",x);
        scanf(" %c", &c);
        if (c == '>')
        {
            x=x+y; // 50+25=75
            y=y/2; // 25/02=12.5
            if(x>=99.2) //não deixa ultrapassar 99
            {
                x=x-1; //subtrai -1
            }
            else if(x<=0.2) //não vai abaixo de zero
            {
                x=x+1; //adiciona +1
            }
        }
        else if (c == '<')
        {
            x=x-y; //Recebe 50-25=25
            y=y/2;
            if(x>=99.2)//não vai além 100
            {
                x=x-1;//subtrai -1
            }
            else if(x<=0.2) //não vai até zero
            {
                x=x+1;//adiciona +1
            }
        }
        else if(c == '=')
        {
            printf("\n O NUMERO QUE VOCEH PENSOU EH = %.0lf\n",x);
            break;
        }
    }
        printf("*****************FIM DO PROGRAMA*****************");
}