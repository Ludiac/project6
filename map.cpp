#include <unordered_map>
#include <string>
#include <vector>
#include <random>
#include <iostream>

using namespace std;

string get_country_string(short country) {
    unordered_map<int, string> map {
        make_pair(0, "CHINA"),
        make_pair(1, "US"),
        make_pair(2, "SOUTH KOREA"),
        make_pair(3, "RUSSIA"),
        make_pair(4, "FRANCE"),
        make_pair(5, "UKRAINE"),
        make_pair(6, "UNITED KINGDOM"),
        make_pair(7, "JAPAN")
    };
    unordered_map<int, string>::iterator it = map.find(country);
    if (it != map.end()) {
        return it->second;
    }
    else {
        return "Invalid country index";
    }
}

string get_firm_string(u_int16_t firm) {
    unordered_map<int, string> map {
        make_pair(0, "HTC"),
        make_pair(1, "SAMSUNG"),
        make_pair(2, "LG"),
        make_pair(3, "APPLE"),
        make_pair(4, "PANASONIC"),
        make_pair(5, "DELL"),
        make_pair(6, "TEXET"),
        make_pair(7, "ALIBABA")
    };
    unordered_map<int, string>::iterator it = map.find(firm);
    if (it != map.end()) {
        return it->second;
    }
    else {
        return "Invalid country index";
    }
}

vector<string> generate_model(u_int16_t index) {
    string firm = get_firm_string(index);
    vector<string> models;


    int length_of_string = rand() % 5 + 5;
    vector<int> arr;
    int a = 0;
    for (int i = 0; i <= length_of_string; ++i) {
        if (rand() % 5 > 1) {
            a = rand() % 3;
            arr.emplace_back(a);
        }
        else  {
            arr.emplace_back(a);
        }
    }

    int e = rand() % 4 + 2;
    for (int i = 0; i < e; ++i) {
        string model;

        for (int j = 0; j < length_of_string; ++j) {
            if (arr[j] == 0)        model.push_back(rand() % 26 + 32*2 + 1);
            else if (arr[j] == 1)   model.push_back(rand() % 26 + 32*3 + 1);
            else                    model.push_back(rand() % 10 + 48);
        }

        models.emplace_back(model);
    }

    return models;
}

