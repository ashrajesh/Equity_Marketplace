//
// Created by Ashwi on 12/23/2020.
//

#include "catch.hpp"

#include "trade_interface.h"
TEST_CASE("User Class", "[user]")
{
    SECTION("populate hash map from sectret index") {
        std::map<std::string, user *> hash_map;
        populate_user_map(hash_map);
        print_index(hash_map);
    }
    SECTION("update user holdings in cap table"){
        std::map<std::string, user *> hash_map;
        populate_user_map(hash_map);
        //print_index(hash_map);
        /// assuming hash sent in by socket request
        std::string request_hash = "abc123";
        int new_ownership = 600;
        std::string json_path = "C:/Users/Ashwi/OneDrive/Documents\\GitHub/PE-Marketplace/security.json";
        update_security(hash_map.find(request_hash)->second, new_ownership, json_path);
    }
}

