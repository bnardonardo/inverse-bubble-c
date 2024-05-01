#include <stdio.h>

#define tam        8
#define falso       0
#define verdadeiro  1

int main ()
{
    int vetor[8], i, VouF=falso, guarda, final=tam;
    printf("Entre com o valor do vetor: \n");
    for (i=0; i<tam; i++)
    {
        printf("Elemento %d \n", i);
        scanf("%d", &vetor[i]);
        getchar();
    }
      //metodo bolha
            do{
              VouF = falso;
              for (i=0; i<final; i++)
                  if (vetor[i] > vetor[i-1])
                {
                    guarda = vetor[i];
                    vetor[i] = vetor[i-1];
                    vetor[i-1] = guarda;
                    VouF = verdadeiro;
                }
            }while(VouF);
            printf ("Ordem decrescente/Metodo Pedra\n");
            for (i=0; i<tam; i++) printf("%d \n", vetor[i]);
            //fim metodo bolha
            return(0);
}

