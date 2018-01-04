#include <iostream>

using namespace std;

const int ROWS = 5;
const int COLS = 4;
int main()
{
    int matrix1 [ROWS][COLS] = {{11,17,4,10},{29,4,18,18},{22,14,5,5},{1,27,1,11},{25,2,27,6}};
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLS; j++)
        {
            cout << matrix1[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl;

    int matrix2 [ROWS][COLS] = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    int sum = 0;
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLS; j++)
        {
            cout << matrix2[i][j] << "   ";
            sum += matrix2[i][j];
        }
        cout << endl;
    }
    cout << endl;

    int matrix3 [ROWS][COLS];
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLS; j++)
        {
            matrix3[i][j]=matrix1[i][j]*sum;
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }





    return 0;
}
