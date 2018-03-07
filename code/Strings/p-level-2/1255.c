/*
Nome:      Frequência de Letras
ID:        1255
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.024s
Tamanho:   2,86 KB
Submissao: 25/05/15 13:31:57
*/
#include <stdio.h>
#include <string.h>

void letterFrequency( int *frequency, char *string );
void Sort( int *arry, int *index );

int main()
{
    int N, aux;
    unsigned i, j;

    scanf( "%d ", &N );

    for( i = 0; i < N; i++ ){

        char str[300] = {'\0'};
        int frequency[26] = {0}, index[26] = { 0, 1, 2, 3, 4, 5, 6, 7,
                                               8, 9, 10, 11, 12, 13, 14,
                                               15, 16, 17, 18, 19, 20, 21,
                                               22, 23, 24, 25};

        fgets( str, 299, stdin );

        letterFrequency( frequency, str );
        Sort( frequency, index );

        j = 0;
        aux = frequency[0];

        while( aux == frequency[j] ){
            printf( "%c", index[j] + 97 );
            j++;
        }
        puts( "" );
    }

    return 0;
}

void letterFrequency( int *frequency, char *str )
{
    unsigned j;

    for( j = 0; str[j] != '\0'; j++ ){

        switch( str[j] ){

            case 'A': case 'a': frequency[0]++; break;
            case 'B': case 'b': frequency[1]++; break;
            case 'C': case 'c': frequency[2]++; break;
            case 'D': case 'd': frequency[3]++; break;
            case 'E': case 'e': frequency[4]++; break;
            case 'F': case 'f': frequency[5]++; break;
            case 'G': case 'g': frequency[6]++; break;
            case 'H': case 'h': frequency[7]++; break;
            case 'I': case 'i': frequency[8]++; break;
            case 'J': case 'j': frequency[9]++; break;
            case 'K': case 'k': frequency[10]++; break;
            case 'L': case 'l': frequency[11]++; break;
            case 'M': case 'm': frequency[12]++; break;
            case 'N': case 'n': frequency[13]++; break;
            case 'O': case 'o': frequency[14]++; break;
            case 'P': case 'p': frequency[15]++; break;
            case 'Q': case 'q': frequency[16]++; break;
            case 'R': case 'r': frequency[17]++; break;
            case 'S': case 's': frequency[18]++; break;
            case 'T': case 't': frequency[19]++; break;
            case 'U': case 'u': frequency[20]++; break;
            case 'V': case 'v': frequency[21]++; break;
            case 'W': case 'w': frequency[22]++; break;
            case 'X': case 'x': frequency[23]++; break;
            case 'Y': case 'y': frequency[24]++; break;
            case 'Z': case 'z': frequency[25]++; break;
        }
    }
}

void Sort( int *arry, int *index )
{
    int i, j, temp, t_index;;

    for( i = 1; i < 26; i++ ){

        j = i;
        temp = arry[j];
        t_index = index[j];

        while( arry[j-1] < temp && j >= 0 ){
            arry[j] = arry[j-1];
            index[j] = index[j-1];
            j--;
        }
        arry[j] = temp;
        index[j] = t_index;

    }
}
