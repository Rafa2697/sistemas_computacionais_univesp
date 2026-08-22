# Ponteiros

forma geral: tipo * identificado;

## Operadores de ponteiros

Precedência:
-   maior precedência
    -   ()[]++(pós) -- (pós)
    -   !~++(pré) -- (pré) - (unário)(cast)*(unário) &(unário) sizeof
    -   */%
    -   +-
    -   << >>
-   Menor precedência
    -   ;

## operador &

&: Operador unário. Devolve o endereço de memória do seu operando. Seu uso mais comum é durante inicializações de ponteiros. 

ex.:

````
int *p, acm = 35;
p = &acm; // p recebe "o endereço de " acm
````

O valor de p é 1292 e o conteúdo é o valor do endereço apontado por p. Outro modo de inicializar:

````
p = 0;
p = NULL; // equivale a p = 0
````

## operador *

*: operador unário. Devolve o valor da variavel apontada( o conteúdo do apontador)

ex.:
````
int *p, q, acm = 35;
p = &acm;
q = *p; // A variável que recebe o valor da variável "no endereço" p
````
O valor de q é 35 (valor da variável apontada por p)