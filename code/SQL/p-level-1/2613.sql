/*
Nome:      Filmes em Promoção
ID:        2613
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   199 Bytes
Submissao: 27/12/17 10:33:04
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT M.id, M.name 
FROM movies AS M, prices AS P
WHERE M.id_prices = P.id AND P.value < 2.00;