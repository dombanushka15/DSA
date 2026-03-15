#include <iostream>
using namespace std;
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int num, sum = 0;
    cin >> num;

    int n = num;
    while (n > 0)
    {
        int last_digit = n % 10;
        sum += factorial(last_digit);
        n = n / 10;
    }
    if (num == sum)
    {
        cout << "a strong number";
    }
    else
    {
        cout << "not a strong number";
    }

    return 0;
}
 
