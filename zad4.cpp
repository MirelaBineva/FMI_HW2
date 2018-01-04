#include <iostream>

using namespace std;
const int COLS = 2;
const int ROWS = 100;

int main()
{
    int number;
    cout << "Enter how many two digit numbers between 5 and 105 do you want: ";
    cout << endl;
    cin >> number;
    cout << endl;
    while (number>=5 && number<=105)
    {
    int arr[ROWS][COLS];
    for (int i=0; i<number; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
        cout << endl;
    }
    cout << endl;

    for (int i=0; i<number; i++)
    {
        for (int j=0; j<COLS; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int numInPercent = 0;
    for (int i=0; i<number; i++)
    {
        numInPercent = (arr[i][0]*100)/arr[i][1];
        cout << arr[i][0] << " " << '/' << " " << arr[i][1] << " " <<'='<< " " << numInPercent << '%';
        cout << endl;
    }
    cout << endl;
    }

    return 0;
}
