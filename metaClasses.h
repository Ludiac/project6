#pragma once

#include "utils.h"

class IDevice {
public:
    IDevice(char firm[21], char country_of_manufacture[]);
    virtual ~IDevice();
    virtual void product_info() = 0;
protected:
    char _firm[21];
    char _country_of_manufacture[2];
};

class Mechanical : virtual public IDevice {
public:
    Mechanical();
    ~Mechanical();
};

class Electrical : virtual public IDevice {
public:
    Electrical(e_supply_method esm);
    ~Electrical();
protected:
    e_supply_method _supply_method;
};

class IConnected_to_network {
public:
    IConnected_to_network(bool local_network);
    ~IConnected_to_network();
    bool b_local_network = true;
    virtual void show_features();
};
