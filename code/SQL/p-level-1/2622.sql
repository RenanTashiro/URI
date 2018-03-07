/*
Nome:      Pessoas jurídicas
ID:        2622
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   194 Bytes
Submissao: 27/12/17 11:07:09
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT C.name
FROM
  customers AS C,
  legal_person AS L
WHERE
  C.id = L.id_customers;