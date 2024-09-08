#include <iostream>

using namespace std;

enum class OrderType
{
    bid,
    ask
};

class OrderBookEntry
{
    OrderBookEntry(
        string date,
        string product,
        double price,
        double amount,
        OrderType orderType
    ):
        date(date),
        product(product),
        price(price),
        amount(amount),
        orderType(orderType)
    {};
    
    public:
        string date;
        string product;
        double price;
        double amount;
        OrderType orderType;

};