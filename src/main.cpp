#include <iostream>
#include <hesap.hpp>

int main(int argc, char const *argv[])
{
    Hesap hesap( std::map<float, int, std::greater<float>>{
        {200, 62},
        {100, 14},
        {50, 32},
        {20, 12},
        {10, 41},
        {5, 25},
        {1, 50},
        {0.50, 10},
        {0.25, 3},
        {0.1, 7},
        {0.05, 5},
    });

    auto sonuc = hesap.hesaplama(1000);
    for (auto para: sonuc) {
        std::cout << para << ", ";
    }
    std::cout << '\n';
    
    return 0;
}
