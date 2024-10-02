
// Diego Diaz, diego.diaz22, 801-23-1213
// 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () {

// se inicializan los precios de las taquillas 

double adult_ticketcost = 10.0;
double child_ticketcost = 6.0;

// se declaran las variables 

double adult_ticketsold;
double child_ticketsold;
string moviename;

// se despliega el proposito del programa 

cout << "This program calculates the Gross Profit, Net Profit and Distributor's profit of a movie displaying in the theater." << endl << endl;

// se pide el nombre de la pelicula 

cout << "Enter the name of the movie: ";

getline(cin, moviename);

// se pide la cantidad de boletos de adultos vendidios

cout << "Enter the amount of Adult Tickets sold: ";

cin >> adult_ticketsold;

// se pide la cantidad de boletos de kids vendidios

cout <<"Enter the amount of Child Tickets sold: ";

cin >> child_ticketsold;

// se calcula el profit, gross profit, net profit y distributor's profit

double adult_ticketsprofit = adult_ticketcost * adult_ticketsold;
double child_ticketprofit = child_ticketcost * child_ticketsold;
double gross_profit = adult_ticketsprofit + child_ticketprofit;
double net_profit = gross_profit * 0.2;
double distributor_profit = gross_profit - net_profit;

// se despliegan los resultados 


cout << endl << endl << "Name of the movie:" << setw(11) << "\"" << moviename <<  "\"" << endl;
cout << "Adult Tickets sold:" << setw(14)  << setprecision(4) << adult_ticketsold << endl;
cout << "Child Tickets sold:" << setw(14)  << child_ticketsold << endl;
cout << "Gross Box Office Profit:" << setw(5) << "$" << setw(9) << setprecision(2)  << fixed << gross_profit << endl;
cout << "Net Box Office Profit:" << setw(7) << "$" << setw(9) << setprecision(2)  << fixed << net_profit << endl;
cout << "Amount paid to distributor:" << setw(2) << "$" << setw(9) << setprecision(2)  << fixed << distributor_profit << endl;













return 0;
}
