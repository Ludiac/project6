#include "appliances.h"


Washing_machine::Washing_machine
            (
                u_int16_t firm,
                short country_of_manufacture,
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
            << get_firm_string(_firm)                   << '\n'
            << get_country_string(_country_of_manufacture) << '\n'
            << _supply_method          << '\n'
            << "max_load: " << _max_load               << '\n';
    print_models(_models);
};

Mechanical_scales::Mechanical_scales
                (
                    u_int16_t firm,
                    short country_of_manufacture,
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
            << get_firm_string(_firm)                   << '\n'
            << get_country_string(_country_of_manufacture) << '\n'
            << "max_load: " << _max_load               << '\n';
    print_models(_models);
}


Smartphone::Smartphone
                    (
                        u_int16_t firm,
                        short country_of_manufacture,
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
            << get_firm_string(_firm)                            << '\n'
            << get_country_string(_country_of_manufacture)          << '\n';
if(b_local_network == true)
     cout   << "Can connect to WWW"             << '\n';
else
     cout   << "Works only in local network"    << '\n';
     print_models(_models);
}
