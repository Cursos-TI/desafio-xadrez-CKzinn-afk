#include <stdio.h>

int main(){
    int bispo = 1;
    int rainha  = 1;
    int cavalo = 1;



//Movimento da torre 5 vezes a direita usando for
printf("Torre\n");
for (int torre = 1; torre <= 5; torre++)
{
    printf("Direita\n");
}printf("\n");

//Movimento do bispo cinco casas na diagonal usando while
printf("Bispo\n");
while (bispo <= 5)
{
   printf("Cima\n");
   printf("Direita\n");
    bispo++;

}printf("\n");

//Movimento da rainha 8 casas a esquerda usando do-while
printf("Rainha\n");
do
{
    
    printf("Esquerda\n");
    rainha++;
} while (rainha <= 8);
printf("\n");

//Movimento do Cavalo
printf("Cavalo\n");
while (cavalo--)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n");
    }
    printf("Direita\n");
    
}
printf("\n");














return 0;

}
