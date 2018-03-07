/*
Nome:      Fornecedor Ajax SA
ID:        2617
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   246 Bytes
Submissao: 27/12/17 10:48:55
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT PROD.name, PROV.name 
FROM products AS PROD, providers AS PROV
WHERE 
    PROD.id_providers = PROV.id AND 
    PROV.name = 'Ajax SA';