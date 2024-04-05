#include "Truck.h"
#include <iostream>

int main() {   
    Truck defaultTruck;
    std::cout << "Default Truck: " << defaultTruck.get_brand_name() << ", Code: " << defaultTruck.get_brand_code() << std::endl;

    Truck myTruck(123, "Ford");
    std::cout << "My Truck: " << myTruck.get_brand_name() << ", Code: " << myTruck.get_brand_code() << std::endl;

    return 0;
}
