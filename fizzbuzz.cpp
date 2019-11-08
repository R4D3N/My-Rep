#include<iostream>

int main()
{
    int i;
    for (i = 0; i <= 100; i++)
    {
        if (i % 15 == 0) cout << "FizzBuzz" << endl;
        if (i % 5 == 0) cout << "Buzz" << endl;
        if (i % 3 == 0) cout << "Fizz" << endl;
        else cout << i << endl;
    }
    return 0;
}