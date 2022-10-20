// класс IConnected_to_network создан, чтобы показать наследование от нескольких классов (класс Смартфон).
// одновременное наследование от классов Mechanical и Electrical не имеет смысла (следовательно, эти классы
// не должны наследоваться виртуально, но у меня всё виртуальное наследование)
//
// в программе нет ни одного геттера и сеттера. сеттеры мне кажутся бесполезными в
// контексте этой программы, а геттерам я не придумал применения, так что их тоже нет

#include "metaClasses.cpp" //
#include "appliances.cpp"  // не знаю почему включение .h файлов не даёт программе собраться

int main() {
    IDevice * vec[3];
    vec[0] = new Washing_machine (0, 1, plugged_in_only, 10);
    vec[1] = new Mechanical_scales (2, 3, 15);
    vec[2] = new Smartphone (3, 4, sealed_rechargeable_battery, true);
    vec[0]->product_info();
    vec[1]->product_info();
    vec[2]->product_info();

    //vec[3]->show_features();
    for (int i = 0; i < 3; i++)
        delete vec[i];

    return 0;
}
