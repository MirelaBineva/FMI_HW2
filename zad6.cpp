#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int newNums=0;
    while (newNums<4)
    {
        if(number%2==1 && number%3==2 && number%4==3 && number%5==4 && number%6==5 && number%7==6 && number%8==7 && number%9==8)
        {
            cout << "Number: " << number << endl;
            newNums++;
        }
        number++;

    }
    return 0;
}
