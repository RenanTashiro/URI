/*
Nome:      Categorias com Vários Produtos
ID:        2623
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   359 Bytes
Submissao: 27/12/17 11:11:45
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT P.name, C.name
FROM
  products AS P,
  categories AS C
WHERE
  P.amount > 100 AND
  P.id_categories = C.id AND
  (P.id_categories = 1 OR
   P.id_categories = 2 OR
   P.id_categories = 3 OR
   P.id_categories = 6 OR
   P.id_categories = 9);