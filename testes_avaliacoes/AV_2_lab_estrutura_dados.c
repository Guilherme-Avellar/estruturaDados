#include <stdio.h>
#include <stdlib.h>


typedef struct pontos_do_grafico
{
    float matriz[10][3];

} pontos;

void apresentar_pontos(float cordenadas[]) 
{

    printf("\n\n(%.2f, %.2f, %.2f)\n\n", cordenadas[0], cordenadas[1], cordenadas[2]);


}


/*void apresentar_distancia_cordenadas(float cordenadas[][])
{
    float distancia = 0, vetor_maior[3], vetor_menor[3];
    int i = 0;
    
     condicional para primeira linha da matriz
        for(i = 0; i < 3; i++)
        {
            vetor_menor[i] = cordenadas[i];
        }

     calcular a distancia e fazer if para verificar qual e o maior ponto do centro


}
*/

int main()
{

    struct pontos_do_grafico p;
    

    srand(time(NULL));

    int i, j;



    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 3; j++)
        {
            p.matriz[i][j] = 50 - rand()%(100);
        }

        apresentar_pontos(p.matriz[i]);
    }

    apresentar_distancia_cordenadas(p.matriz)
    



    return 0;
}