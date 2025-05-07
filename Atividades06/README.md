## Atividades 06

1. Considere a seguinte função abaixo:
    int result(int n){
        if (n == 1)
            return 2;
        else
            return 2 * result(n - 1);
    }
Faça o teste de execução para result(5) // FEITO EM SALA DE AULA


2. Considere a seguinte função abaixo:
    int recursao (int n){
        if (n <= 10)
            return n * 2;
        else
            return recursao(recursao(n/3));
    }
Faça o teste de execução para recursao(27) // FEITO EM SALA DE AULA


3. Escreva um algoritmo para contar e retornar a profundidade da recursão da função Fibonacci.
Problema inspirado em:
https://www.beecrowd.com.br/judge/pt/problems/view/1029?origem=1

4. A potência de um número (a^n) pode ser definida recursivamente
<img src="/images/Ex04.png" alt="Imagem equação" style="width:100px;height:300px;">
Escreva a função recursiva que recebe um número real a e um número natural n e, sem usar
funções da biblioteca matemática, devolve a n.

5. Escreva uma função recursiva que calcula o produto de a * b, em que a e b são inteiros maiores
que zero. considere que o produto pode ser definido como a somado a si mesmo b vezes, usando
uma definição recursiva temos
<img src="/images/Ex05.png" alt="Imagem equação 2" style="width:100px;height:300px;">