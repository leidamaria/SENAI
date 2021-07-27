
/*---- 
3. Fazer um programa que solicita um nC:mero decimal e imprime o
correspondente em hexa e octal. 
Por Leida Maria
-----*/

#include <stdio.h>

int calculaOctal (int num);
int calculaHexa (int num);
char converteLetra(int num);


int main ()
{
  float numero;
  printf ("Digite um numero decimal: ");
  scanf ("%f", &numero);
  int num = numero;
  if (num < 8)
    {
      printf ("Octal equivalente: %d", num);
    }
  else
    {
      calculaOctal (num);
    }
  
  if (num < 10)
    {
      printf ("\nHexadecimal equivalente: %d", num);
    }
    
    else if (num <= 15)
            {
                printf("\nHexadecimal equivalente: %c", converteLetra(num));
            }
        else 
            {
                calculaHexa (num);
            }
  return (0);
}

int calculaOctal (int num)
{

  int nr_octal[10];
  int i = 0;
  int resul;
  while (num >= 8)
    {
      resul = num / 8;
      int resto = num % 8;
      nr_octal[i] = resto;
      num = resul;
      i++;
    }
  printf ("Octal equivalente: %d", resul);
  for (int x = i - 1; x >= 0; x--)
    {
      printf ("%d", nr_octal[x]);
    }

}

int calculaHexa (int num)
{

  int nr_hexa[10];
  int i = 0;
  int resul;
  while (num >= 16)
    {
      resul = num / 16;
      int resto = num % 16;
      nr_hexa[i] = resto;
      num = resul;
      i++;
    }
    if (resul<10)
        { printf ("\nHexa equivalente: %d", resul);}
    else if (resul<16) 
        {      
            char r = converteLetra(resul);
            printf ("%c", r);
        }
    
    {
    for (int x = i - 1; x >= 0; x--)
        {
            if(nr_hexa[x]>9)
              {
                char l = converteLetra(nr_hexa[x]);
                printf ("%c", l);
                
              }else
              {printf ("%d", nr_hexa[x]);}
        }
    }
}

char converteLetra(int num)

{
    char letra;
    if (num==10)
        {
            letra = 'A';
        }
    else if (num==11)
        {
            letra = 'B';
        }
    else if (num==12)
        {
            letra = 'C';
        }
    else if (num==13)
        {
            letra = 'D';
        }
    else if (num==14)
        {
            letra = 'E';
        }
    else if (num==15)
        {
            letra = 'F';
        }
    return(letra);
}


