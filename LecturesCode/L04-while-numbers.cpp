/*
* �������� - ������ �� while ����� - ���� �� �����
* ���� �� - 10.2017
*/

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    unsigned n;          // ��� ���� �����

    cout << "How many numbers will be entered? ";
    cin >> n;

    unsigned numberIndex = 1;
    int number;
    while (numberIndex <= n)
    {
        cout << "Number " << numberIndex << " = ";
        cin >> number;
        sum += number;
        ++numberIndex;
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
