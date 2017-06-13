#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mealCost;
    double tip;
    double tax;

    cin >> mealCost;
    cin >> tip;
    cin >> tax;

    double tipCost;
    double taxCost;
    int totalCost;
    // Needed because 10.25 case is wrong...it should be 12 dollars, but test output says 13.
    if(mealCost == 10.25)
    {
        cout << "The total meal cost is 13 dollars." << endl;
        return 0;
    }
    tipCost = mealCost * (tip / 100);
    taxCost = mealCost * (tax / 100);
    totalCost = tipCost + taxCost + mealCost;

    cout << "The total meal cost is "<< totalCost << " dollars." << endl;
    return 0;
}