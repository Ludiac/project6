#pragma once

#include "utils.h"
#include "metaClasses.h"

class Washing_machine : public Electrical {
public:
    Washing_machine
                (
                    char firm[21],
                    char country_of_manufacture[2],
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
                        char firm[21],
                        char country_of_manufacture[2],
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
                char firm[21],
                char country_of_manufacture[2],
                e_supply_method esm,
                bool local_network
            );

    ~Smartphone();

    void product_info() override;

    //void show_features() override;
};

