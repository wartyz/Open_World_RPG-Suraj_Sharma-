//Toolchain H:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64
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