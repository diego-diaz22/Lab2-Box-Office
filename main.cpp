// Diego Diaz, diego.diaz22, 801-23-1213
// 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () {

double adult_ticketcost = 10.0;
double child_ticketcost = 6.0;
double adult_ticketsold;
double child_ticketsold;
string moviename;

cout << "This program calculates the Gross Profit, Net Profit and Distributor's profit of a movie displaying in the theater." << endl;

cout << "Enter the name of the movie: ";

getline(cin, moviename);

cout << "\nEnter the amount of Adult Tickets sold: ";

cin >> adult_ticketsold;

cout << endl << "\nEnter the amount of Child Tickets sold: ";

cin >> child_ticketsold;

double adult_ticketsprofit = adult_ticketcost * adult_ticketsold;
double child_ticketprofit = child_ticketcost * child_ticketsold;
double gross_profit = adult_ticketsprofit + child_ticketprofit;
double net_profit = gross_profit * 0.2;
double distributor_profit = gross_profit - net_profit;


cout << endl << endl << "Name of the movie: \"" << moviename <<  "\"" << endl;
cout << "Adult Tickets sold: " << adult_ticketsold << endl;
cout << "\nChild Tickets sold: " << child_ticketsold << endl;
cout << "Gross Box Office Profit: " << gross_profit << endl;
cout << "Net Box Office Profit: " << net_profit << endl;
cout << "Amount paid to distributor: " << distributor_profit << endl;













return 0;
}
