#include <iostream>

#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

//process order function that interacts with outside world
// hash table stores username and hashed_code, check whether ^^^ function matches any user
// UI handled by JS interaction, display spread
// takes in: userdata, order_info
// arguments passed in
// if lower ask price or higher bid price pops up, replace bid/ask and update current spread

// argumetns [username, (bool) new user, hash_code(ignored if new user, emailed), quantity, buy/sell (stem string query), price

// have an avl tree store user objects, accessed after verification from hash_table
int main(int argc, char** argv) {
    if(argc==1){Catch::Session().run(); return 0;}
    else{std::cout<< "catch session not run" << std::endl << std::endl;}

    std::cout << "Select an option: " << std::endl;
    int option;
    std::cin >> option;
    // parse secret_index and populate hash_table

    // parse simdjson to find total outstanding shares
    // every new order by user removes old order

    // output to UI js
    // save persistent indexes
    // close program, wait for next call
    return 0; // change to return prices
}
