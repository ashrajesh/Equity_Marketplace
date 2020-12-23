//
// Created by Ashwi on 12/10/2020.
//

#ifndef UNTITLED9_TRADE_INTERFACE_H
#define UNTITLED9_TRADE_INTERFACE_H

#include <iostream>
#include <map>
#include "user.h"

void print_index(std::map<std::string,user*>& hash_map);
void populate_user_map(std::map<std::string, user*>& hash_map);
void new_user(std::string name, std::map<std::string, user*>& hash_map);


#endif //UNTITLED9_TRADE_INTERFACE_H
