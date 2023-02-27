#include <hesap.hpp>
#include <algorithm>
#include <iostream>

std::vector<float> Hesap::hesaplama(float cekilen_para) {
    std::vector<float> verilecek_para;
    for (auto& [birim, miktar]: kasa) {
        while (birim <= cekilen_para && miktar > 0) {
            cekilen_para -= birim;
            verilecek_para.push_back(birim);
            miktar -= 1;
        }
    }
    return verilecek_para;
}

