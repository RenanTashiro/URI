/*
Nome:      Máscara de CPF
ID:        2625
Resposta:  Accepted
Linguagem: PostgreSQL (psql 9.4.14)
Tempo:     0.001s
Tamanho:   274 Bytes
Submissao: 27/12/17 11:22:11
*/
/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
SELECT 
  FORMAT('%s.%s.%s-%s', 
         SUBSTR(cpf, 1, 3),
         SUBSTR(cpf, 4, 3),
         SUBSTR(cpf, 7, 3),
         SUBSTR(cpf, 10, 2))
FROM natural_person;