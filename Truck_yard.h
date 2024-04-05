#ifndef TRUCK_YARD_H
#define TRUCK_YARD_H

#include "Truck.h"

class Truck_yard {
public:   
    Truck_yard();
    Truck_yard(int capacity);

    ~Truck_yard();

    int get_total_stock_count() const;
    int get_stock_count(int code) const;
    Truck* get_current_stock_list() const;
    bool addStock(const Truck& c);

private:
    Truck* stock; 
    int capacity; 
    int currentStock; 
};

#endif
