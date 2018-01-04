#include <iostream>

using namespace std;

void func(int number)
{


     int sum = 0;
     int newNum = number%10;
     int Num = number/10;
     do{
        sum+=newNum;
        Num/=10;
     } while (Num!=0);

     if (number%sum == 0)
        cout << "Deli se";
     else
        cout << "Ne se deli";


}


int main()
{
    cout << "Enter a number between 111 and 22222 " << endl;
    int num;
    cin >> num;
    if(num>=111 && num<=22222)
    {
        func(num);
    }
    else
        cout << "Enter number again";

    return 0;
}
