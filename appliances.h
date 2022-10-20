#pragma once

#include "utils.h"
#include "metaClasses.h"

class Washing_machine : public Electrical {
public:
    Washing_machine
                (
                    u_int16_t firm,
                    short country_of_manufacture,
                    e_supply_method esm,
                    int max_load
                );

    ~Washing_machine();
    void product_info() override;

private:
    int _max_load;
};

class Mechanical_scales : public Mechanical {
public:
    Mechanical_scales
                    (
                        u_int16_t firm,
                        short country_of_manufacture,
                        int max_load
                    );

    ~Mechanical_scales();
    void product_info() override;

private:
    int _max_load;
};

class Smartphone : public Electrical, public IConnected_to_network {
public:
    Smartphone
            (
                u_int16_t firm,
                short country_of_manufacture,
                e_supply_method esm,
                bool local_network
            );

    ~Smartphone();

    void product_info() override;

    //void show_features() override;
};

