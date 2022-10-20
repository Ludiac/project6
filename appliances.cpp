#include "appliances.h"


Washing_machine::Washing_machine
            (
                char firm[21],
                char country_of_manufacture[2],
                e_supply_method esm,
                int max_load
            ) :
                IDevice(firm, country_of_manufacture),
                Electrical(esm),
                _max_load(max_load)
{
}

Washing_machine::~Washing_machine()
{
}

void Washing_machine::product_info()
{
    cout    << "Washine machine"       << '\n'
            << _firm                   << '\n'
            << _country_of_manufacture << '\n'
            << _supply_method          << '\n'
            << _max_load               << '\n';
};

Mechanical_scales::Mechanical_scales
                (
                    char firm[21],
                    char country_of_manufacture[2],
                    int max_load
                ) :
                    IDevice(firm, country_of_manufacture),
                    _max_load(max_load)
{
}

Mechanical_scales::~Mechanical_scales()
{
}

void Mechanical_scales::product_info()
{
    cout    << "Mechanical scales"     << '\n'
            << _firm                   << '\n'
            << _country_of_manufacture << '\n'
            << _max_load               << '\n';
}


Smartphone::Smartphone
                    (
                        char firm[21],
                        char country_of_manufacture[2],
                        e_supply_method esm,
                        bool local_network
                    ) :
                        IDevice(firm, country_of_manufacture),
                        Electrical(esm),
                        IConnected_to_network(local_network)
{
}

Smartphone::~Smartphone()
{
}

void Smartphone::product_info()
{
     cout   << "Smartphone"                     << '\n'
            << _firm                            << '\n'
            << _country_of_manufacture          << '\n';
if(b_local_network == true)
     cout   << "Can connect to WWW"             << '\n';
else
     cout   << "Works only in local network"    << '\n';

}
