/*
Nome:      Produtos Importados
ID:        2618
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   338 Bytes
Submissao: 27/12/17 10:52:12
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT PROD.name, PROV.name, C.name
FROM 
  products AS PROD, 
  providers AS PROV, 
  categories AS C
WHERE
  PROD.id_providers = PROV.id AND
  PROD.id_categories = C.id AND
  PROV.name = 'Sansul SA' AND
  C.name = 'Imported';