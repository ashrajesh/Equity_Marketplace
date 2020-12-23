//
// Created by Ashwi on 12/23/2020.
//

#include "catch.hpp"

#include "trade_interface.h"
TEST_CASE("User Class", "[user]")
{
    std::map<std::string,user*> hash_map;
    populate_user_map(hash_map);
    print_index(hash_map);
}

