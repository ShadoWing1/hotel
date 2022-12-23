#pragma once

#include <kutuphane.hpp>
#include <array>

class Musteri {
    std::string isim;
};


class Oda
{
    private:
        int seviye = 1;
        int fiyat;
        Musteri* sahip;
    public:
        Oda(int kat) {
            fiyat = kat;
        }
};

struct Istekler {
    int maxFiyat;
    int minFiyat;
    int yildiz;
};

template <int kat_sayisi, int kat_basina_oda>
class Resepsiyon {
    public:
    Resepsiyon() {}
    Oda* odaBul(Musteri* musteri, Istekler istekler)
    {

    }
    Oda odalar[kat_sayisi][kat_basina_oda];
};

template <int kat_sayisi, int kat_basina_oda>
class Otel
{
    private:
        Resepsiyon<kat_sayisi, kat_basina_oda> r;
    public:
};
