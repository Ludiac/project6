#pragma once

#include <iostream>
#include <string.h>

using namespace std;
enum e_supply_method
{
    accumulator,
    sealed_rechargeable_battery,
    removable_rechargeable_battery,
    disposable_battery,
    plugged_in_only
};

std::ostream& operator<<(std::ostream& out, const e_supply_method value) //stackoverflow
{
    const char* s = 0;
#define PROCESS_VAL(p) case(p): s = #p; break;
    switch(value){
        PROCESS_VAL(accumulator);
        PROCESS_VAL(sealed_rechargeable_battery);
        PROCESS_VAL(removable_rechargeable_battery);
        PROCESS_VAL(disposable_battery);
        PROCESS_VAL(plugged_in_only);
    }
#undef PROCESS_VAL

    return out << s;
}
