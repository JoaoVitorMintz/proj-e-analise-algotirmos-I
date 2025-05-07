## Atividades 04

1. Por que o código abaixo está errado?
    void troca (int *x, int *y) {
        int *temp;
        *temp = *x;
        *x = *y;
        *y = *temp;
    }

2. Escreva uma função XXX que converta minutos em horas-e-minutos. A função recebe um
inteiro mnts e os endereços de duas variáveis inteiras, digamos h e m, e atribui valores
a essas variáveis de modo que m seja menor que 60 e que 60 ∗ h + m seja igual a mnts.
Escreva também uma função main que use a função XXX.

3. Escreva uma função que recebe um vetor com números inteiros e positivos e a quantidade
de elementos no vetor, sua função encontra e devolve o maior valor e o menor valor no
vetor.

4. Escreva uma função yyy que recebe três parâmetros inteiros (hora, minutos, soma_minutos)
os dois primeiros representando uma determinada hora no formato horas:minutos e o parâmetro soma_minuto é o valor que será adicionado a hora:minutos. A sua função faz a soma da horas:minutos com o parâmetro soma_minutos e devolve a hora atualizada.

5. Escreva uma função que recebe um ângulo em graus e devolva o cosseno e seno desse ângulo. Dica: caso necessite, utilize as funções e constante abaixo, lembre-se que o parâmetro informado para função sin e cos é um ângulo em radianos e que 180º = PI radianos
#define PI 3.14
float cos (float x);
float sin (float x);
