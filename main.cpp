#include <iostream>
#include <OrderBookEntry.cpp>
#include <string>
#include <vector>

using namespace std;

void printMenu();
int getUserOption();
void processUserOption(int option);
void printHelp();
void printExchangePlan();
void placeAsk();
void placeBid();
void printWallet();
void continueUsingApp();
double computeAveragePrice(vector<OrderBookEntry>& entries);
double computeLowPrice(vector<OrderBookEntry>& entries);
double computeHighPrice(vector<OrderBookEntry>& entries);
double computePriceSpread(vector<OrderBookEntry>& entries);

int main()
{
    while (true)
    {

        printMenu();
        int userOption = getUserOption();
        if (userOption == 0)
        {
            cout << "Exit\n";
            break;
        }
        processUserOption(userOption);
        
    }
    return 0;
}

void printMenu()
{
    cout << "--------------------------------------------------\n";
    cout << "Type in 0-6\n";
    cout << "1: Print help\n";
    cout << "2: Print exchange task\n";
    cout << "3: Place an ask\n";
    cout << "4: Place a bid\n";
    cout << "5: Print wallet\n";
    cout << "6: Continue\n";
    cout << "0: Exit app\n";
    cout << "--------------------------------------------------\n";
}

int getUserOption()
{
    int userOption;
    cin >> userOption;
    return userOption;
}

void processUserOption(int option)
{
    if (option == 1)
    {
        printHelp();
    }
    else if (option == 2)
    {
        printExchangePlan();
    }
    else if (option == 3)
    {
        placeAsk();
    }
    else if (option == 4)
    {
        placeBid();
    }
    else if (option == 5)
    {
        printWallet();
    }
    else if (option == 6)
    {
        continueUsingApp();
    }
    else
    {
        cout << "That option doesn't exist, please try again\n";
    }
}

void printHelp()
{
    cout << "You selected option 1\n";
}

void printExchangePlan()
{
    cout << "You selected option 2\n";
}

void placeAsk()
{
    cout << "You selected option 3\n";
}

void placeBid()
{
    cout << "You selected option 4\n";
}

void printWallet()
{
    cout << "You selected option 5\n";
}

void continueUsingApp()
{
    cout << "You selected option 6\n";
}

///////////////////////////////////////////////////////////////////////

double computeAveragePrice(vector<OrderBookEntry>& entries)
{
    int averagePrice = 0;

    for (OrderBookEntry& e : entries)
    {
        averagePrice+=e.price;
    }

    return averagePrice/entries.size();
}

double computeLowPrice(vector<OrderBookEntry>& entries)
{
    int lowestPrice = entries[0].price;

    for (OrderBookEntry& e : entries)
    {
        if (e.price < lowestPrice)
        {
            lowestPrice = e.price;
        }
        
    }
    
    return lowestPrice;
}

double computeHighPrice(vector<OrderBookEntry>& entries)
{
    int highestPrice = entries[0].price;

    for (OrderBookEntry& e : entries)
    {
        if (e.price > highestPrice)
        {
            highestPrice = e.price;
        }
        
    }
    
    return highestPrice;
}

double computePriceSpread(vector<OrderBookEntry>& entries)
{

}