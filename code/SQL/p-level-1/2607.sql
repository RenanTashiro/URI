/*
Nome:      Cidades em Ordem Alfabética
ID:        2607
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   173 Bytes
Submissao: 27/12/17 09:42:51
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT 
DISTINCT ON (city) 
city 
FROM providers
ORDER BY city ASC;