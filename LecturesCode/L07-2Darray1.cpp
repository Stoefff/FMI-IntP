/*
�������� �������� �� �������� �� �������� ������ ��� ����� �� (2017)
���� �� ����� � ����� � ������� ��� (������-������)
*/

#include <iostream>
using namespace std;

const int MAX_ROW_SIZE = 100;

unsigned readSize()
{
    unsigned n;
    do
    {
        cout << "N= ";
        cin >> n;
    }while (n == 0 || n > MAX_ROW_SIZE);
    return n;
}

void read2DArray(int matrix[][MAX_ROW_SIZE], unsigned n, unsigned m)
{
    for (unsigned i = 0; i < n; ++i)
    {
        for (unsigned j = 0; j < m; ++j)
        {
//            cout << "a[" << i << "]["<< j << "]=";
            cin >> matrix[i][j];
        }
    }
}

void print2DArray(int matrix[][MAX_ROW_SIZE], unsigned n, unsigned m)
{
    for (unsigned i = 0; i < n; ++i)
    {
        for (unsigned j = 0; j < m; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void printArray(int array[], int size)
{
    for (unsigned j = 0; j < size; ++j)
    {
        cout << array[j] << " ";
    }
    cout << endl;
}

int main()
{
    unsigned n, m;
    int matrix[MAX_ROW_SIZE][MAX_ROW_SIZE];

    n = readSize();
    m = readSize();
    read2DArray(matrix, n, m);
    cout << endl << endl;
    print2DArray(matrix, n, m);
    cout << endl;

    for (int i = n-1; i >= 0; --i)
    {
        printArray(matrix[i], m);
    }
    cout << endl;
    return 0;
}
