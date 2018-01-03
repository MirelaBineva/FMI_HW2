#include <iostream>

using namespace std;

const int SIZE = 6;
int main()
{
    int matrix[SIZE][SIZE] = {{11,12,13,14,15,16},{21,22,23,24,25,26},{31,32,33,34,35,36},{41,42,43,44,45,46},{51,52,53,54,55,56},{61,62,63,64,65,66}};

    for (int i=0; i<SIZE; i++)
    {
        for (int j=0; j<SIZE; j++)
        {
            cout << matrix [i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

   int sum = 0;
   int sumOfAll = 0;
   for (int i=1; i<SIZE; i+=2)
   {
       for (int j=0; j<SIZE; j++)
       {
               cout << matrix [i][j] << " ";
               sum += matrix [i][j];
               sumOfAll += matrix[i][j];
       }
        cout <<  "Sum " << sum;
        sum =0;
       cout << endl;
   }
    cout << "Sum of all even rows is: " << sumOfAll;



    return 0;
}
