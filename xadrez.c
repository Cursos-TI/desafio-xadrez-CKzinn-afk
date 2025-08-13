#include <stdio.h>

int main(){
    int bispo = 1;
    int rainha  = 1;



//Movimento da torre 5 vezes a direita usando for
for (int torre = 1; torre <= 5; torre++)
{
    printf("Direita\n");
}

//Movimento do bispo cinco casas na diagonal usando while
while (bispo <= 5)
{
   printf("Cima\n");
   printf("Direita\n");
    bispo++;
}

//Movimento da rainha 8 casas a esquerda usando do-while
do
{
    
    printf("Esquerda\n");
    rainha++;
} while (rainha <= 8);
















return 0;

}
