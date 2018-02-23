/*
�������� �������� �� �������� �� �������� ������ ��� ����� �� (2017)
���� �� ����� � �������� �� ������ ��� ������� ��������
*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

unsigned readSize()
{
    unsigned n;
    do
    {
        cout << "N= ";
        cin >> n;
    }while (n == 0 || n > MAX_SIZE);
    return n;
}

void read2DArray(int array[][MAX_SIZE], unsigned n, unsigned m)
{
    for (unsigned i = 0; i < n; ++i)
    {
        for (unsigned j = 0; j < m; ++j)
        {
            cin >> array[i][j];
        }
    }
}

void print2DArray(int array[][MAX_SIZE], unsigned n, unsigned m)
{
    for (unsigned i = 0; i < n; ++i)
    {
        for (unsigned j = 0; j < m; ++j)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void printMainDiag(int array[][MAX_SIZE], unsigned n, unsigned m)
{
    unsigned min = n<m ? n : m;
    for (unsigned i = 0; i < min; ++i)
    {
        cout << array[i][i] << " ";
    }
}

int sumRow(int array[], unsigned size)
{
    int sum = 0;
    for (unsigned i = 0; i < size; ++i)
    {
        sum += array[i];
    }
    return sum;
}

int min(int n, int m)
{
    return n<m ? n : m;
}


int sumToMD(int array[][MAX_SIZE],
            unsigned n,
            unsigned m)
{
	int sum = 0;
	for (unsigned i = 0; i < n; ++i)
		sum += sumRow(array[i], min(i, m));
	return sum;
}


int main()
{
    unsigned n, m;
    int matrix[MAX_SIZE][MAX_SIZE];

    n = readSize();
    m = readSize();
    read2DArray(matrix, n, m);
    cout << endl;
    print2DArray(matrix, n, m);

    printMainDiag(matrix, n, m);

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i+1; j < m; ++j)
        {
            sum += matrix[i][j];
        }
    }
    cout << endl << sum << endl;

	cout << sumToMD(matrix, n) << endl;
    return 0;
}
