#pragma once 

#include <map>
#include <vector>

class Hesap
{
private:
          // birim  miktar
    std::map<float, int, std::greater<float>> kasa;

public:
    std::vector<float> hesaplama(float cekilen_para);
    Hesap(auto k) : kasa (k) { }
    Hesap() { }
};