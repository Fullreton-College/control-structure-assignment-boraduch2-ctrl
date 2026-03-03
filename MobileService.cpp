#include <iostream>

using namespace std;

int main()
{
    const double plan_a_price = 39.99;
    const double plan_b_price = 59.99;
    const double plan_c_price = 79.99;
    const double extra_cost = 8.00;

    string name;
    char plan;
    double gb, total;

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter plan (A, B, or C): ";
    cin >> plan;

    cout << "Enter GB used: ";
    cin >> gb;

    switch(plan)
    {
        case 'A':
        case 'a':
            total = plan_a_price;
            if(gb > 2.0)
                total += (gb - 2.0) * extra_cost;
            break;
        
        case 'B':
        case 'b':
            total = plan_b_price;
            if(gb > 8.0)
                total += (gb - 8.0) * extra_cost;
            break;

        case 'C':
        case 'c':
            total = plan_c_price;
            break;

        default:
            cout << "Invalid plan entered." << endl;
            return 0;
    }

    cout << "\nTotal bill for " << name << " is $" << total << endl;

    if ((plan == 'A' || plan == 'a') && plan_b_price < total) 
         cout << "You could save $" << total - plan_b_price << " with Plan B.\n";

    if ((plan == 'A' || plan == 'a') && plan_c_price < total)
         cout << "You could save $" << total - plan_c_price << " with Plan C.\n";

    if ((plan == 'B' || plan == 'b') && plan_c_price < total)
         cout << "You could save $" << total - plan_c_price << " with Plan C.\n";

     return 0;
    }