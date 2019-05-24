//Toolchain H:\mingw-w64\x86_64-7.2.0-posix-seh-rt_v5-rev1\mingw64
#include "Game.hpp"

//LENGTH OF VECTOR: |V| = sqrt(V.x^2 + V.y^2)
//NORMALIZE VECTOR: U = V / |V|

using namespace sf;


int main()
{
    Game game;
    game.run();
    return 0;
}