//
// Created by Ashwi on 12/10/2020.
//

#include "trade_interface.h"
#include <fstream>
#include <sstream>

void print_index(std::map<std::string,user*>& hash_map){
    // erase contents of secret_index.csv
    std::ofstream secret_index;
    secret_index.open("secret_index.csv", std::ofstream::out|std::ofstream::trunc);
    // print out contents of hash_table
    auto it = hash_map.begin();
    for (std::pair<std::string, user*> element : hash_map) {
        secret_index << *element.second << std::endl;
        std::cout << *element.second << std::endl; // delete
    }
}

void populate_user_map(std::map<std::string, user*>& hash_map){
    std::ifstream secret_index;
    secret_index.open("secret_index.csv");  // test_hash,test_user,credits,debits,

    char* temp = new char[100];
    while(secret_index.getline(temp,999,'\n')){
        std::stringstream streamer(temp);
        int counter = 0, temp_owned = 0;
        std::string temp_hash, temp_name;
        double temp_debit = 0, temp_credit = 0;
        while(streamer.getline(temp,999,',')){  /// change to switch case:
            if(counter == 0){
                temp_hash = temp;
            }
            else if(counter == 1){
                temp_name = temp;
            }
            else if(counter == 2){
                temp_debit = std::stod(temp);
            }
            else if(counter == 3){
                temp_credit = std::stod(temp);
            }
            else if(counter == 4){
                temp_owned = std::stoi(temp);
            }
            counter++;
        }

        hash_map[temp_hash] = new user(temp_hash,temp_name,temp_debit,temp_credit,temp_owned);

    }
    secret_index.close();
    delete[] temp;
}
// last market price:
// user login  (new user / login)
void new_user(std::string name, std::map<std::string, user*>& hash_map){
    // create new user
    user* new_guy = new user;
    std::string temp_hash = new_guy->new_user(name);
    // push to hash_map
    hash_map[temp_hash] = new_guy;
}

void get_user(std::string curr_user, bool is_new){
    // check if user is onsecret_index

    // if new user, add to secret index and hash_table
}

// while loop:
// deposit funds
// check account balances
// trade shares : (buy/sell) ("market"/int)
// cancel trade
// order status : websocket / print (pending/executed/partial[quantity/total]) market_price
// logout
