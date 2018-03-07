/*
Nome:      Nenhuma Locação
ID:        2616
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   228 Bytes
Submissao: 27/12/17 10:46:29
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT C.id, C.name 
FROM customers AS C
WHERE NOT EXISTS 
  (SELECT 1 
   FROM locations 
   WHERE C.id = id_customers);