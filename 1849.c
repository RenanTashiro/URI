#include <stdio.h>

int main()
{
    int Ld, Cd, Lv, Cv;

    scanf( "%d%d%d%d", &Ld, &Cd, &Lv, &Cv );

    int ladoUm = Ld + Lv < ( Cd < Cv ? Cd : Cv ) ? Ld + Lv : ( Cd < Cv ? Cd : Cv );
    int ladoDois = Ld + Cv < ( Cd < Lv ? Cd : Lv ) ? Ld + Cv : ( Cd < Lv ? Cd : Lv );
    int ladoTres = Cd + Lv < ( Ld < Cv ? Ld : Cv ) ? Cd + Lv : ( Ld < Cv ? Ld : Cv );
    int ladoQuatro = Cd + Cv < ( Ld < Lv ? Ld : Lv ) ? Cd + Cv : ( Ld < Lv ? Ld : Lv );

    int maiorLado = ladoUm > ladoDois ? ladoUm : ladoDois;
        maiorLado = maiorLado > ladoTres ? maiorLado : ladoTres;
        maiorLado = maiorLado > ladoQuatro ? maiorLado : ladoQuatro;

    printf( "%d\n", maiorLado * maiorLado );

    return 0;
}
