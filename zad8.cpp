#include <iostream>

using namespace std;

int fib (int number)
{
    int a=0, b=1, c=0;
    if (number==0)
        return b;
    else if (number == 1)
    return b;
    for (int i=2; i<=number; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}

int main()
{
    int num;
    cout << "Enter a number between 1 and 40 ";
    cin >> num;
    if (num>=1 && num<=40)
     {
         cout << "Fib number: " << fib (num) << endl;
     }
    else
        cout << "Enter number again";


    return 0;
}
