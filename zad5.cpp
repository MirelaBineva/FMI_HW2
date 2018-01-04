#include <iostream>

using namespace std;

int binary (int n, int k)
{
    int arr[100],i=0;

    while (n>0)
    {
        arr[i]=n%2;
        i++;
        n=n/2;
    }
    cout << "Binary number is: ";
    int counter =0;
    for (int j=i-1; j>0; j--)
    {
        cout << arr[j];
    }
    for (int j=i-1; j>0; j--)
    {
      do
        {
            if(arr[j]%10==0)
               {
                counter++;
               }

            arr[j]/10;

        } while (arr[j]<0);

    }
    cout << endl;
    cout << "How many times there are 0: " << counter;
}
int main()
{
    int arr[100], i=0;
    int n;
    cout << "Enter a positive number ";
    cin >> n;
    int k;
    cout << "How many 0 you want to see if there are ";
    cin >>k;
    if(n>=1000 && n<=1000000)
    {
        binary(n,k);

    }
    return 0;
}
