/*
Nome:      Filmes de Ação
ID:        2611
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   209 Bytes
Submissao: 27/12/17 10:20:33
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT M.id, M.name 
FROM movies AS M, genres AS G
WHERE G.description = 'Action' AND G.id = M.id_genres;