#pragma once

#include "utils.h"
#include <vector>

class IDevice {
public:
    IDevice(u_int16_t firm, short country_of_manufacture);
    virtual ~IDevice();
    virtual void product_info() = 0;
protected:
    void print_models(vector<string> models);
    vector<string> _models;
    u_int16_t _firm;
    short _country_of_manufacture;
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
