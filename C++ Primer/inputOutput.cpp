#include <iostream>

using namespace std;
// if we dont use namespace std, we would have to write everything with std::. Example std::cout

int main() {
    cout << "Enter two numbers:" << endl; 
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2 << " is: " << v1 + v2 << endl;
    cout << "The multiplication of " << v1 << " and " << v2 << " is: " << v1 * v2 << endl;

    return 0;
}