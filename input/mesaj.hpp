#pragma once

#include <iostream>
#include <vector>



class Mesaj
{
    private:
        std::vector<std::string> kisi;
        std::vector<std::string> grup;
        
        std::string mesaj;
        std::string zaman; 

        void mesaj_yaz(std::string gonderi, std::string zaman);
        void mesaj_sil(std::string kitap_ismi);
};