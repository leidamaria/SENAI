
/*----
2. Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9 

-----*/

#include <stdio.h>

int main()
{
    printf ("Início da tabuada \n");
    printf ("-------- \n");
    int valor;
    for (int num1=1; num1<=9; num1++)
    {    
        printf ("\n[Número %d] \n", num1);
        for (int num2=0; num2<=9; num2++) 
        {
            printf ("%d X ",num1);
            printf ("%d = ",num2);
            printf ("%d \n",num1*num2);
            
        }
        printf ("----------- \n");
    }
    printf ("Fim da tabuada \n");
    return 0;
}
