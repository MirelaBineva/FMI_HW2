#include <iostream>

using namespace std;
const int NUM = 18;
int func (int number)
{
    int firstDigit;
    int secondDigit;
    bool flag = false;
    int newNum = number;
    firstDigit=newNum%10;
    while (newNum>0)
    {
        secondDigit=newNum%10;
        if (firstDigit!=secondDigit)
        {
            flag=true;
            break;
        }
        newNum/=10;
    }
    return flag;
}

int main()
{
    int number=0;
    int newNum=1;
    while (newNum!=0)
    {
        number++;
        newNum=func(number*NUM);
    }
    newNum = number*NUM;
    cout << "The number we want is: " << number << endl;
    cout << "The number multiplied by 18 is: " << newNum;
    return 0;
}
