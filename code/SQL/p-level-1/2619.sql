/*
Nome:      Super Luxo
ID:        2619
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.002s
Tamanho:   340 Bytes
Submissao: 27/12/17 10:55:00
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT PROD.name, PROV.name, PROD.price
FROM
  products AS PROD,
  providers AS PROV,
  categories AS C
WHERE
  PROD.price > 1000.00 AND
  PROD.id_categories = C.id AND
  PROD.id_providers = PROV.id AND
  C.name = 'Super Luxury';