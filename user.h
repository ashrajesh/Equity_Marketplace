//
// Created by Ashwi on 12/10/2020.
//

#ifndef UNTITLED9_USER_H
#define UNTITLED9_USER_H
#include <iostream>


class user {
private:
    int balance;
    std::string name;
    std::string hash_identifier;

public:
    user();
    user(std::string ID);
    ~user(){};

    void debit(int val);
    void credit(int val);

    void modify_ownership(int shares);

    std::string new_user(std::string name); // provides 1 time hash that you will need to save (e.g. admin could email or manipulate secret index), appends hash table, sends hash to websocket


};


#endif //UNTITLED9_USER_H
