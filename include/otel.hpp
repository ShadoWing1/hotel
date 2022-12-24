#pragma once

#include <kutuphane.hpp>
#include <array>

class Musteri {
    public:
        std::string isim;
        int kat_;
        int katdaki_oda;
}; 


class Oda
{
    private:
        Musteri* sahip = nullptr;
    public:
        Musteri musteri;
        int kat = musteri.kat_;
        int fiyat;
        int hesap();
};

//struct Istekler {
//    int kat_;
//    int katdaki_oda;
//};

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


void arayuz()
{
    yaz("a");
    yaz("b");  
    yaz("c");
}
