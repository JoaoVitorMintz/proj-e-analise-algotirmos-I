void troca (int *x, int *y) {
    int *temp;
    *temp = *x;
    *x = *y;
    *y = *temp;
}

// Porque o código está errado?

/*
O código está errado porque o ao criar a variável temporária *temp,
a mesma recebe o conteúdo de x, porém, recebe como *temp, significa
que o conteúdo de temp recebe o conteúdo de x e não que temp recebe
o conteúdo de x.
*/