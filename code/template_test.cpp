#include <iostream>

template < class shifter >
shifter biggest( shifter a, shifter b )
{
    return a > b ? a : b;
}

int global_variable = 5;

int main()
{

    std::cout << biggest( "Eu sou maior?", "Acho que Sim" ) << std::endl;
    std::cout << biggest( 's', 'n' ) << std::endl;
    std::cout << biggest( 5, 18 ) << std::endl;


    std::cout << ::global_variable << std::endl;


    return 0;
}
