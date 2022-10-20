#include "metaClasses.h"


IDevice::IDevice(char firm[21], char country_of_manufacture[])
{
    strcpy(_firm, firm);
    strcpy(_country_of_manufacture, country_of_manufacture);
}

IDevice::~IDevice()
{
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

