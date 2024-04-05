#include "Truck_yard.h"
#include <cstring> 

Truck_yard::Truck_yard() : capacity(0), currentStock(0), stock(nullptr) {
}

Truck_yard::Truck_yard(int capacity) : capacity(capacity), currentStock(0) {
    stock = new Truck[capacity];
}

Truck_yard::~Truck_yard() {
    delete[] stock;
}

int Truck_yard::get_total_stock_count() const {
    return currentStock;
}

int Truck_yard::get_stock_count(int code) const {
    int count = 0;
    for (int i = 0; i < currentStock; i++) {
        if (stock[i].get_brand_code() == code) {
            count++;
        }
    }
    return count;
}

Truck* Truck_yard::get_current_stock_list() const {
    return stock; 
}

bool Truck_yard::addStock(const Truck& c) {
    if (currentStock < capacity) {
        stock[currentStock++] = c;
        return true;
    }
    return false;
}
