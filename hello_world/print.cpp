#include <iostream>
#include <emscripten.h>
extern "C"
{
    EMSCRIPTEN_KEEPALIVE
    int addNums(int a, int b)
    {
        return a + b;
    }

    EMSCRIPTEN_KEEPALIVE
    int main()
    {
        std::cout << "hhuh" << addNums(3, 4) << '\n';
        return 0;
    }
}