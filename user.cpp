//
// Created by Ashwi on 12/10/2020.
//

#include "user.h"

#include <utility>


//upon initial setup, provide hash_codes for first equity holders
user::user(){
    this->credits = 0;
    this->debits = 0;
    this->shares_owned = 0;
    this->hash_identifier = "Unknown";
    this->name = "Unknown";
}

user::user(std::string temp_hash, std::string temp_name, double debit, double credit, int temp_owned){
    this->credits = credit;
    this->debits = debit;
    this->hash_identifier = temp_hash;
    this->name = temp_name;
    this->shares_owned = temp_owned;
}

void user::debit(int val){
    this->debits += val;
}
void user::credit(int val){
    this->credits += val;
}

void user::modify_ownership(int shares){
    this->shares_owned += shares;
}

double user::get_balance(){
    return (debits-credits);
}

std::string user::new_user(std::string& temp_name) {
    this->name = temp_name;
    this->hash_identifier = std::to_string(std::hash<std::string>{}(temp_name)); // very simple, should look into other sha and hashing algorithms
    std::cout << "Your unique access key is: " << this->hash_identifier << std::endl;
    this->debits = 0;
    this->credits = 0;
    this->shares_owned = 0;
    return this->hash_identifier;
}

// Overloaded Operators:
bool user::operator== (user& user_ref){
    return (this->hash_identifier == user_ref.hash_identifier);
}

std::ostream& operator << (std::ostream& out, user& user_ref){
    out << user_ref.hash_identifier << "," << user_ref.name << "," << user_ref.debits << "," << user_ref.credits << "," << user_ref.shares_owned;
    return out;
}

// login
// hash_code
// create new account
// deposit funds (return bool)
// int total_equity
// int total_balance
// withdraw funds (return bool)