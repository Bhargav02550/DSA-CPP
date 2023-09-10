#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int units_consumed;
    double cost_per_unit, bill, surcharge, total_amount;
    int surcharge_percentage = 15;
    cin >> units_consumed;

    if (units_consumed <= 199) {
        cost_per_unit = 1.20;
    } else if (units_consumed >= 200 && units_consumed < 400) {
        cost_per_unit = 1.40;
    } else if (units_consumed >= 400 && units_consumed < 600) {
        cost_per_unit = 1.60;
    } else if (units_consumed >= 600 && units_consumed < 800) {
        cost_per_unit = 1.80;
    } else {
        cost_per_unit = 2.00;
    }

    bill = units_consumed * cost_per_unit;

    if (bill > 400) {
        surcharge = (bill * surcharge_percentage) / 100.0;
    } else {
        surcharge = 0.0;
    }

    total_amount = bill + surcharge;

    cout << fixed << setprecision(2);
    cout << "Units Consumed: " << units_consumed << endl;
    cout << "Cost per Unit: " << cost_per_unit << endl;
    cout << "Bill: " << bill << endl;
    cout << "Surcharge: " << surcharge << endl;
    cout << "Total Amount: " << total_amount << endl;
}
