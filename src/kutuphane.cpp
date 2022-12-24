#include <kutuphane.hpp>
#include <otel.hpp>
#include <cmath>


int Oda::hesap()
{
    

    if(!sahip) {
        return 0;
    }
    int x;
    x = kat;
    return (std::pow(x,3)*5) + 3000;
}

