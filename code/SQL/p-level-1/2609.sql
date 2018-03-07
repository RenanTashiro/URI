/*
Nome:      Produtos por Categorias
ID:        2609
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   218 Bytes
Submissao: 27/12/17 09:57:59
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT 
C.name, SUM(P.amount)
FROM categories as C, products AS P 
WHERE C.id = P.id_categories
GROUP BY C.name;