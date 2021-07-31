//
// Created by Ashwi on 12/22/2020.
//

#ifndef PE_MARKETPLACE_ORDER_H
#define PE_MARKETPLACE_ORDER_H
#include "user.h"

#include <map>

class order {
private:
    bool trade; // true - buy, false - sell
    std::string client;
    int quantity;
    double value;

public:
    order();
    order(bool order_type, std::string& user_hash, int num_shares, double execution_price);
    ~order()= default;

    void execute_order(std::map<std::string, user*>& hash_map); // update persistent data and JSON
    bool order_status();
    int remaining_shares(); // returns outstanding shares
};


#endif //PE_MARKETPLACE_ORDER_H
