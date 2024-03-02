#include<iostream>
using namespace std;

int main()
{
    int sum = 0, mult = 1, value;
    cout << "Enter Value: " << endl;
    cin >> value;  
    for (int i = 1; i <= value; i++) {
        sum += i;
        mult *=i;
    }
    cout << "The sum of 1 to 10 is: " << sum << endl;
    cout << "The mult from 1 to 10 is: " << mult << endl;
    return 0;
}