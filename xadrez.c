#include <stdio.h>
//Movimento para a torre, 5 casas a direita
void movertorre(int casas) {
    if (casas > 0) {
        printf("direita\n");
        movertorre(casas - 1);
    }
}
//Movimento do bispo 5 casas na diagonal, ou seja, direita e para cima
void moverbispo(int casas) {
    if (casas > 0)
    {
        for (int casac = 0; casac < 1; casac++)
        {
            printf("Cima\n");
                for (int casad = 0; casad < 1; casad++)
                {
                    printf("Direita\n");
                }
                
        }
    moverbispo(casas - 1);
    }
}
    

//Movimento da rainha 8 casas a esquerda
void moverrainha(int casas){
    if (casas > 0) {
        printf("Esquerda\n");
        moverrainha(casas - 1);
    }
}

    int main() {
        printf("***Movimento do Cavalo***\n");
        //movimento em L do cavalo, duas acima e uma a direita
        for (int cavaloc = 0; cavaloc < 3; cavaloc++)//Loop Externo
        {
            for (int cavalod = 0; cavalod < 1; cavalod++)//Loop interno
            {
                    if (cavaloc < 2)
                {
                     printf("Cima\n");
                     continue; //volta pro proximo cavaloc
                }
                printf("Direita\n");
                break; //Ja terminou o L do cavalo sai
            }
            
        }
        

        printf("***Movimento da Torre***\n");
        movertorre(5); 
        printf("***Movimento da Rainha***\n");
        moverrainha(8);
        printf("***Movimento do Bispo***\n");
        moverbispo(5);
        return 0;




    }


/*Bispo 5 casas para a diagonal direita pra cima 
torre 5 casas para a direita
rainha 8 casas a esquerda
cavalo em l, duas para cima e uma para direita*/


   
