#ifndef TRUCK_H
#define TRUCK_H

#include <string>

class Truck {
public:   
    Truck(); 
    Truck(int b_code, std::string b_name); 
    ~Truck();
    std::string get_brand_name() const; 
    int get_brand_code() const;
private:
    std::string brand_name;
    int brand_code;
};
#endif 
