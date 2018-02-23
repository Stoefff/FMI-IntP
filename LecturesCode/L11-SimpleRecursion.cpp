/*
�������� �������� �� ������������ �� ������ �������� ��� ����� �� (2017).
    ���������
    ��������
    ���������� �� ������
    ���� �� �������� � �����
    ������� � �����
    ������� �������
    ������� �� ��� � ���
    ������� ��������
*/

#include <iostream>
using namespace std;


// �������� ��������� �� ���� ����� ���� ��������.
// ������� ������ �� �����, �������, �������� ��������.
unsigned long long fact(unsigned n)
{
    if (n == 0)
        return 1;
    else
        return n*fact(n-1);
}


// �������� ����� �� �������� ���� ��������.
// ������� ������ �� �����, ���������� ��������.
unsigned long long fib(unsigned n)
{
    if (n < 2)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}


// �������� ����� �� �������� ���� ��������.
// ������������ ������ �� ����������� ��������� - ������� ��������.
unsigned long long fib2(unsigned n, unsigned long long f1, unsigned long long f2)
{
    if (n == 0)
        return f1;
    else
        return fib2(n-1, f1+f2, f1);
}


// ������� �� ���������� �� ����� ��������� �� ������� �������.
// ����� � �� ����� �������� ������� ���������.
unsigned long long fibWrap(unsigned n)
{
    return fib2(n, 1, 0);
}


// �������� X �� ������ N
// ���������� ������ ���������� ���������
double power(double x, unsigned n)
{
    if (n == 0)
        return 1;
    return x * power(x, n-1);
}


// ��� ���������� ������� �� ���������� �� ���� �� �������� � �����
int sumR(int * arr, unsigned n)
{
    if (n == 0)
        return 0;
    return arr[n-1] + sumR(arr, n-1);
}

int sumL(int * arr, unsigned n)
{
    if (n == 0)
        return 0;
    return *arr + sumL(arr+1, n-1);
}

void print(int * arr, int n)
{
    if (n != 0)
    {
        print(arr, n-1);
        cout << arr[n-1];
    }
}


// ���������� ������� �� ������� �������.
// ������ �������� �������� ������� �� ��-����� ���������
// TODO: ������������ ���� ������� � �������� � ������ (� �� � l � r)
int binSearchRec(int* arr, unsigned l, unsigned r, int x)
{
    if (l >= r) return -1;
    int m = (l+r)/2;

    if (arr[m] == x)
        return m;
    if (arr[m] < x)
        return binSearchRec(arr, m+1, r, x);
    return binSearchRec(arr, l, m, x);
}

int binarySearch(int* arr, unsigned n, int x)
{
    return binSearchRec(arr, 0, n, x);
}


// ��������� ���� ����� ��� � ������ �� ���� ���� ��������
bool match(const char* str1, const char* str2)
{
    if (!*str2) return true;
    if (!*str1) return false;
    return *str1 == *str2 && match(str1+1, str2+1);
}


// ��������� ���� ����� ��� �� ����� � ���� ���� ��������
const char* strstr(const char* where, const char* what)
{
    if (!*where)
        return NULL;
    if (match(where, what))
        return where;
    return strstr(where+1, what);
}


// ������� �� ������ ��� �� ������� ��������
void printRowRec(int n, int pos)
{
    if (n == pos)
    {
        cout << n << " ";
    }
    else
    {
        cout << pos << " ";
        printRowRec(n, pos+1);
        cout << pos << " ";
    }
}

void printRow(int row, int n)
{
    if (row < n)
    {
        cout << "  ";
        printRow(row, n-1);
    }
    else
    {
        printRowRec(row, 1);
        cout << "\n";
    }
}

void triangleRec(int n, int row)
{
    if (row <= n)
    {
        printRow(row, n);
        cout << "\n";
        triangleRec(n, row+1);
    }
}

/* ������� ����������
      1
    1 2 1
  1 2 3 2 1
    .....
1 ... n ... 1
*/
void triangle(int n)
{
    triangleRec(n, 1);
}


int main()
{
/*
    for (int n = 1; n < 10; ++n)
        cout << fib(n) << " " << fibWrap(n) << endl;
*/
/*
    for (int n = 1; n <= 10; ++n)
        cout << power(2, n) << endl;
*/
/*
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << sumL(arr, 10) << endl;
    cout << sumR(arr, 10) << endl;
    print(arr, 10);
    cout << endl;
    cout << binarySearch(arr, 10, 3) << endl;
    cout << binarySearch(arr, 10, 0) << endl;
*/
    triangle(5);
    return 0;
}
