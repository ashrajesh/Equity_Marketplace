//
// Created by Ashwi on 12/10/2020.
//

#include "query_processor.h"

void display_bids(){}
void display_asks(){}

// market buy -- buy at lowest ask on ledger, remove from sell queue
/// market sell -- sell at last executed price, remove from buy queue
// market sell -- sell at highest bid on ledger, remove from buy queue

// bid -- add [quantity,price] to buy queue (highest at top)
// ask -- add [quantity,price]  to sell queue (lowest at top)

// if bid/ask price match, subtract quantity from buy/sell queue, update security.json, and debit/credit accounts respectively
// if bid/ask exceed market ask, execute at market // silly mistake

//



// have a queue for each price (map of linked lists)