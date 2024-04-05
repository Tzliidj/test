#include "Truck_yard.h"
#include <iostream>

int main() {
    Truck_yard yard(2);

    Truck truck1(100, "Ford");
    Truck truck2(101, "Toyota");
    Truck truck3(100, "Ford");

    std::cout << "Adding truck1: " << (yard.addStock(truck1) ? "Success" : "Failed") << std::endl;
    std::cout << "Adding truck2: " << (yard.addStock(truck2) ? "Success" : "Failed") << std::endl;
    std::cout << "Adding truck3 (should fail): " << (yard.addStock(truck3) ? "Success" : "Failed") << std::endl;

    std::cout << "Total stock count: " << yard.get_total_stock_count() << std::endl;

    std::cout << "Stock count for code 100: " << yard.get_stock_count(100) << std::endl;

    return 0;
}
