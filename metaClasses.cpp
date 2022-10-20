#include "metaClasses.h"
#include "map.cpp"


IDevice::IDevice(u_int16_t firm, short country_of_manufacture) : _firm(firm), _country_of_manufacture(country_of_manufacture)
{
    _models = generate_model(_firm);
}

IDevice::~IDevice()
{
}

void IDevice::print_models(vector<string> models) {
    cout << "Models: \n";
    for(auto i : models) {
        cout << i << '\n';
    }
    cout << '\n';
}

Mechanical::Mechanical()
{
}

Mechanical::~Mechanical()
{
}

Electrical::Electrical(e_supply_method esm) : _supply_method(esm)
{
}

Electrical::~Electrical()
{
}

IConnected_to_network::IConnected_to_network(bool local_network) : b_local_network(local_network)
{
}

void IConnected_to_network::show_features()
{
    cout << "parent Shows off how cool this stuff is\n";
}

// void Smartphone::show_features()
// {
//     cout << "Shows off how cool this stuff is\n";
// }


IConnected_to_network::~IConnected_to_network()
{
}

