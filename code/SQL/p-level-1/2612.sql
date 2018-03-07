/*
Nome:      Os Atores Silva
ID:        2612
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.002s
Tamanho:   398 Bytes
Submissao: 27/12/17 10:30:24
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT DISTINCT ON (M.id) M.id, M.name
FROM 
  movies AS M, 
  genres AS G,
  actors AS A,
  movies_actors AS MA
WHERE 
  MA.id_movies = M.id AND 
  MA.id_actors = A.id AND
  G.description = 'Action' AND
  M.id_genres = G.id AND
  (A.name = 'Marcelo Silva' OR A.name = 'Miguel Silva');