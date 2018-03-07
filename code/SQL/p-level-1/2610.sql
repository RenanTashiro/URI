/*
Nome:      Valor Médio dos Produtos
ID:        2610
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   145 Bytes
Submissao: 27/12/17 10:14:13
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT ROUND(AVG(price), 2)
FROM products;