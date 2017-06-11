#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int IsPot(long double val);

int main()
{
    int rouds;

    while( scanf( "%d", &rouds ) && rouds != 0){

        int pt_Ui = 0, pt_Ri = 0, pt_Li = 0;
        long double Ui, Ri, Li;
        bool flag_Ui, flag_Ri, flag_Li;

        unsigned i;

        for(  i = 0; i < rouds; i++ ){

            scanf( "%LF", &Ui);

            if( !( Ui & ( Ui - 1 ) ) ){
                pt_Ui++;
                flag_Ui = true;
            }
            if(IsPot(Ri)){
                pt_Ri++;
                flag_Ri = true;
            }
            if(IsPot(Li)){
                pt_Li++;
                flag_Li = true;
            }//Verifica qual eh o maior valor e incrementa caso seja potencia de dois

            if(flag_Ui && Ui > Ri && Ui > Li)
                pt_Ui++;
            else if(flag_Ri && Ri > Li)
                pt_Ri++;
            else if(flag_Li && Li > Ri)
                pt_Li++;

        }//Verifica quem fez a maior pontuacao, caso de empate, imprime a string `URI`

        if(pt_Ui > pt_Ri && pt_Ui > pt_Li)
            printf( "%s\n", "Uilton" );
        else if(pt_Ri > pt_Ui && pt_Ri > pt_Li)
            printf( "%s\n", "Rita" );
        else if(pt_Li > pt_Ui && pt_Li > pt_Ri)
            printf( "%s\n", "Ingred" );
        else
            printf( "%s\n", "URI" );

        flag_Ui = flag_Ri = flag_Li = false;

    }
    return 0;
}
int IsPot( long double val )
{
    val = log2( val );
    int aux = val;

    if( val == aux && aux != 0 )
        return 1;
    else
        return 0;
}
