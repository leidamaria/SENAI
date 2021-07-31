
/*---- 
Faca um programa em C que o usuário digite o numero de quilometros, a quantidade 
de litros de gasolina que o carro usou para rodar esse número de quilometros. 
Em posse desses dois dados calcule o consumo em km/L que o carro tem. 
Esse programa deve rodar sem parar, nao ter fim. 
Mande o link para o GITHUB com o seu programa la. 
Por Leida Maria
-----*/

#include <stdio.h>

int TRUE = 1;
float km, litros;

int main ()
{
    do
    {
        printf ("\n\nQuilometros rodados: ");
        scanf ("%f", &km);
        printf ("Gasolina consumida: ");
        scanf ("%f", &litros);
        printf ("Consumo por quilometro rodado: %f", litros/km);
    } while(TRUE);

}
