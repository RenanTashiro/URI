/*
Nome:      Categorias
ID:        2606
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   215 Bytes
Submissao: 27/12/17 09:36:21
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT P.id, P.name 
FROM products AS P, categories AS C
WHERE P.id_categories = C.id AND C.name LIKE 'super%';