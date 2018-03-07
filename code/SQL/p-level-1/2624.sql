/*
Nome:      Quantidades de Cidades por Clientes
ID:        2624
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   191 Bytes
Submissao: 27/12/17 11:16:00
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT COUNT(*) 
FROM 
  (SELECT city
  FROM customers
  GROUP BY city)
AS SUBQUERY;