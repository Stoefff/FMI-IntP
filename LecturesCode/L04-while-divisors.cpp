/*
* �������� - ������ �� while ����� - ���� ��������
* ���� �� - 10.2017
*/

#include <iostream>

using namespace std;

int main()
{
    unsigned n;

    cout << "N= ";
    cin >> n;

    unsigned divisor = 1;
    unsigned count = 0;

    while (divisor <= n)
    {
        if (n % divisor == 0)       // �� ����� �����, ����� � �������
        {
            count += 1;             // ����������� ����
        }
        /* ���� �� �� ������ � ����:
           count += (n % divisor == 0);
           �� � ��-������, ����� � ��-������
        */
        divisor = divisor + 1;
    }

    cout << "Number of divisors: " << count << endl;
    return 0;
}
