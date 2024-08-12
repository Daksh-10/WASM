#include <emscripten.h>

extern "C"
{
    EMSCRIPTEN_KEEPALIVE
    int sumOfInts(int n)
    {
        return n * (n + 1) / 2;
    }
}