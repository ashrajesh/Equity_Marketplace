//
// Created by Ashwi on 12/29/2020.
//

#ifndef PE_MARKETPLACE_QUEUE_H
#define PE_MARKETPLACE_QUEUE_H

#include <list>
#include "order.h"

class queue {
private:
    double price;
    std::list<order> order_queue;

public:
    queue();
    //queue(int); // find out why added
    ~queue()= default;

    void push_order();
    void pop_order();

    order* get_top_order();
};


#endif //PE_MARKETPLACE_QUEUE_H
