#include <iostream>

using namespace std;

int main()
{
    int a = 0,b = 1;
    long int sum = 0;
    int top = 40000;
    cout << "Even fibonacci number sum!" << endl;
    while(sum < top){
        b += a;
        a = b - a;
        if((b % 2) == 0){
            sum += b;
        }
    }
    cout << "Sum is: " << sum << endl;
    cout << endl;
    return 0;
}

