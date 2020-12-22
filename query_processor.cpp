//
// Created by Ashwi on 12/10/2020.
//

#include "query_processor.h"

void display_bids(){}
void display_asks(){}

// market buy -- buy at lowest ask on ledger, remove from sell queue
// market sell -- sell at last executed price, remove from buy queue

// bid -- add [quantity,price] to buy queue (highest at top)
// ask -- add [quantity,price]  to sell queue (lowest at top)