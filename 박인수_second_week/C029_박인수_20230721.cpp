#include <iostream>
using namespace std;

int main() {
    int fixedCost, variableCost, sellingPrice;
    cin >> fixedCost >> variableCost >> sellingPrice;
    
    if (variableCost >= sellingPrice)
        cout << "-1";
    else
        cout << fixedCost / (sellingPrice - variableCost) + 1;

    return 0;
}