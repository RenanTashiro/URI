/*
Nome:      Pedidos no Primeiro Semestre
ID:        2620
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   288 Bytes
Submissao: 27/12/17 11:00:42
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT C.name, O.id
FROM
  customers AS C, 
  orders AS O
WHERE
  C.id = O.id_customers AND
  EXTRACT(YEAR FROM O.orders_date) = 2016 AND
  EXTRACT(MONTH FROM O.orders_date) <= 6;