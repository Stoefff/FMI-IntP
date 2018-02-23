/*
    ��������, ����������� ���� � ����� ��� ��������� �� �����.
    ���������� �� ���������� �� ������ ��������.
*/

#include <iostream>
using namespace std;

int main()
{
    unsigned number;
    cin >> number;

    // ��� �� ������ ���� ��� �������� ������ ����� - �� ���� ��� ����������� �������
    unsigned marker = 0;

    while (number != 0)
    {
        int digit = number % 10;
        unsigned checkMask = 1 << digit;
        if (marker & checkMask)
        {
            cout << "Match: " << digit << endl;
        }
        marker |= checkMask;
        number /= 10;
    }

    unsigned m = 1 << 10;
    while (m != 0)
    {
        cout << (!!(marker & m));
        m >>= 1;
    }
    cout << endl;


    return 0;
}
