//Escreve um Currículo Vitae formatado
//em linguagem C++ e que, basicamente,
//faz nada.
#include <iostream>
using namespace std;

//Protípo das funcoes
void dadosPessoais( void );
void formacaoEscolar( void );
void cursosComplementares( void );

int main( void )
{
    dadosPessoais();
    formacaoEscolar();
    cursosComplementares();
}

void dadosPessoais( void )
{
    string nome = "Renan Tashiro";
    string RA = "40032";
    string RG = "13.442.761-2";
    string CPF = "088.059.679-12";

    string bairro_rua = "Maria Luiza, Hyeda Baggio Mayer";
    int numero = 229;
    char complemento = 'B';

    string telefone = "(45)3035-5880";
    string email = "renantashiro@hotmail.com";
}
void formacaoEscolar( void )
{
    string ensino_medio = "Colegio SESI PR/2013";
    bool completo = true;
}

void cursosComplementares( void )
{
    string curso_tecnico = "Redes de Computadores SENAI - CASCAVEL";
}
