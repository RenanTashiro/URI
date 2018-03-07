/*
Nome:      Quantidades Entre 10 e 20
ID:        2621
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   282 Bytes
Submissao: 27/12/17 11:03:47
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT PROD.name
FROM
  products AS PROD,
  providers AS PROV
WHERE
  PROD.amount <= 20 AND
  PROD.amount >= 10 AND
  PROD.id_providers = PROV.id AND
  PROV.name LIKE 'P%';