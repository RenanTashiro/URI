/*
Nome:      Menores que 10 ou Maiores que 100
ID:        2604
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   164 Bytes
Submissao: 27/12/17 09:20:36
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT id, name FROM products WHERE price < 10 OR price > 100;