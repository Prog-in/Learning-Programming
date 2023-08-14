#include <iostream>
#include "Sales_data.h"

int main() {
    Sales_data data1, data2;
    double price;
    // left to right
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if (data1.bookNo != data2.bookNo) {
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }

    unsigned int total_units = data1.units_sold + data2.units_sold;
    double total_revenue = data1.revenue + data2.revenue;
    
    std::cout << data1.bookNo << " " << total_units << " " << total_revenue << " ";

    if (total_units != 0) {
        std::cout << total_revenue / total_units << std::endl;
    } else {
        std::cout << "(no sales)" << std::endl;
    }

    return 0;
}