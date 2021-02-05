#include <iostream>

using namespace std;

int main()
{
    string name, code;
    double  a, b, c;
    double amount;
    double printer, phone, table;
    double totalCost, cost, balance, owe, vat;

    cout << "********************************************Welcome To Motorway Supermarket*********************************************";

    cout << endl;
    cout << endl;

    cout << "Input Your Name Here:" <<endl;
    getline(cin, name);
    cout << endl;
    cout << "Input Your Unique ID Here:" <<endl;
    getline(cin, code);
    cout << endl;

    cout << "**Items Available for Sale**" <<endl;
    cout << "Printer - GHS500.00" << endl << "Phone - GHS1500.00" << endl << "Table - GHS150.00" << endl;

    cout << endl;

    cout << "How much are you paying for purchase (GHS):" << endl;
    cin >> amount;

    cout << endl;

    cout << "**Input Quantity of Goods you want to purchase:**" <<endl;
    cout << "Input Printer Quantity Here:";
    cin>> a;
    cout<< "Input Phone Quantity Here:";
    cin>> b;
    cout<< "Input Table Quantity Here:";
    cin>> c;

     cout << endl;

    printer = 500, phone = 1500, table = 150;
    vat = 0.12;
    cost=((printer*a)+(phone*b)+(table*c));
    totalCost=((vat*cost)+ cost);



     cout << "***RECEIPT***" << endl;
    cout << "NAME OF CUSTOMER: "<< name << endl;
    cout << "CUSTOMER ID: "<< code << endl;
   // cout << "ITEMS BOUGHT: "<< item << endl;
    cout << "QUANTITY BOUGHT: " << endl
         << "--> Printer: " << a << " Piece(s)" << endl << "--> Phone: " << b << " Piece(s)" << endl << "--> Table: " << c << " Piece(s)" << endl;
    cout <<"VAT AMOUNT: "<< "12%" << endl;
    //cout << "TOTAL COST: "<< quantity * table << endl;
    cout << "TOTAL PRICE(GHS): " << totalCost << ".00" <<endl;
    cout << "TOTAL AMOUNT PAID: GHS "<< amount <<".00 only" << endl;
    if(amount > totalCost){
          balance=totalCost-amount;
    cout <<  "CHANGE (GHS): " << balance << ".00" << endl;
    }else if (amount < totalCost){
        owe=amount-totalCost;
    cout << "AMOUNT DUE (GHS): " << owe << ".00" << endl;
    }


        cout << endl;

    cout << "THANK YOU FOR TRANSACTING WITH US. HAVE A NICE DAY" << endl;



    return 0;
}
