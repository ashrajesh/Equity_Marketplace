//
// Created by Ashwi on 12/22/2020.
//

#include "order.h"

order::order(){
    this->quantity = 0;
    this->value = 0;
    this->client = "Unknown";
}

order::order(bool order_type, std::string& user_hash, int num_shares, double execution_price){
    this->trade = order_type;
    this->client = user_hash;
    this->quantity = num_shares;
    this->value = execution_price;
}

void order::execute_order(std::map<std::string, user *>& hash_map) {
    // make adjustments to the hash table (and then call update_security() from trade_interface to make changes to the json
    // remember to execute order for both buyer and seller
    if(this->trade) {   // buyer
        for (auto iter = hash_map.find(this->client); iter != hash_map.end(); iter++) {
            iter->second->credit(this->value);
            iter->second->modify_ownership(this->quantity);
        }
    }
    else{   // seller
        for (auto iter = hash_map.find(this->client); iter != hash_map.end(); iter++) {
            iter->second->debit(this->value);
            iter->second->modify_ownership(this->quantity); // m// might need to change to negative
        }
    }
}

bool order::order_status() {
    return (this->quantity == 0);
}

int order::remaining_shares() {
    return this->quantity;
}