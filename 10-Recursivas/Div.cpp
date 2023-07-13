// A. División entera de naturales: Div.
/*
Definicion Matematica:

    Div: N → N / div(x, y) = { 0              0 ≤ x < y }
                             { 1 + div(x-y, y)  eoc }
*/

#include <cassert>

unsigned div (unsigned, unsigned);

int main ()
{
    assert(div(1u  , 1u  ) == 1u );
    assert(div(4u  , 2u  ) == 2u );
    assert(div(14u , 5u  ) == 2u );
    assert(div(9u  , 7u  ) == 1u );
    assert(div(30u , 6u  ) == 5u );
    assert(div(500u, 37u ) == 13u);
}

unsigned div (unsigned x, unsigned y) {return x < y ? 0u : 1u + div (x - y, y);}

/* 
    div (30, 6) 
    div = 1 + div ((30-6), 6)
    div = 1 + 1 + div ((22-6), 6)
    div = 1 + 1 + 1 + div ((16-6), 6)
    div = 1 + 1 + 1 + 1 div ((10-6), 6)
    div = 1 + 1 + 1 + 1 + 1 div ((4-6), 6) | [x < y -> 0 ]
    div = 1 + 1 + 1 + 1 + 1 + 0
    div = 5
*/