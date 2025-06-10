#include <iostream>
using namespace std;

int main()
{
    int customerAge = 53;
    int discount = 10, numUnder_65 = 0;
    if (customerAge < 65) 
    {
        discount = 0;
        numUnder_65 += 1;
    }
    cout << "Discount : " << discount << endl;
    cout << "Number of customers under 65 is: " << numUnder_65 << endl;
    return 0;
}