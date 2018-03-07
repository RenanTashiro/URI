/*
Nome:      Locações de Setembro
ID:        2614
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   296 Bytes
Submissao: 27/12/17 10:39:23
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT C.name, R.rentals_date 
FROM customers AS C, rentals AS R
WHERE 
  C.id = R.id_customers AND 
  EXTRACT(MONTH FROM R.rentals_date) = 9 AND
  EXTRACT(YEAR FROM R.rentals_date) = 2016;