/*
Nome:      Representantes Executivos
ID:        2605
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   240 Bytes
Submissao: 27/12/17 09:28:58
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
 SELECT PROD.name, PROV.name 
 FROM products AS PROD, providers AS PROV
 WHERE PROD.id_categories = 6 AND PROV.id = PROD.id_providers;
