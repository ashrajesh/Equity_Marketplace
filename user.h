//
// Created by Ashwi on 12/10/2020.
//

#ifndef UNTITLED9_USER_H
#define UNTITLED9_USER_H
#include <iostream>


class user {
private:
    double credits;
    double debits;
    int shares_owned;
    std::string name;
    std::string hash_identifier;

public:
    user();
    user(std::string temp_hash, std::string temp_name, double debit, double credit, int temp_owned);
    ~user()= default;

    void debit(double val);
    void credit(double val);

    void modify_ownership(int shares);

    double get_balance(); // return credits+debits
    std::string get_hash();
    std::string get_name();
    int get_shares_owned();

    /// move to private:
    std::string new_user(std::string& temp_name); // provides 1 time hash that you will need to save (e.g. admin could email or manipulate secret index), appends hash table, sends hash to websocket

    bool operator== (user& user_ref);
    friend std::ostream& operator << (std::ostream& out, user& user_ref);

};


#endif //UNTITLED9_USER_H
