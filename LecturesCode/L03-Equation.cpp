/*
* �������� �� �������� �� ��������� ���������
* ���� �� - 10.2017
*/

#include <iostream>
#include <cmath>

using namespace std;

const double eps = 1E-9;    // ������� ������

int main()
{
    double a, b, c;

    /* ���� �� ������� */
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    if (abs(a) < eps)           // ����������� �� � ���������
    {
        if (abs(b) < eps)       // ������� �� ������ �� X
        {
            if (abs(c) < eps)   // ����������� 0
            {
                cout << "All numbers are solutions." << endl;
            }
            else                // ��������� �����
            {
                cout << "No solution." << endl;
            }
        }
        else                    // ����������� � �������
        {
            double X = -c/b;
            cout << "The eqation " << b << "x + " << c << " = 0"
                 << " has single root: " << X << endl;
        }
    }
    else                        // ����������� � ���������
    {
        double D = b*b - 4*a*c;
        if (D < 0)              // ����������� �������������
        {
            cout << "The equation has no real roots!" << endl;
        }
        else if (D > 0)         // ����������� ��������������
        {
            double X1, X2;
            X1 = (-b + sqrt(D)) / (2*a);
            X2 = -X1 - b/a; // ������� �� �����
            cout << "The eqation " << a << "x^2 + " << b << "x + " << c << " = 0"
                 << " has two roots: " << X1 << " and " << X2 << endl;
        }
        else                    // �������������� � 0
        {
            double X = -b/(2*a);
            cout << "The eqation " << a << "x^2 + " << b << "x + " << c << " = 0"
                 << " has one double root: " << X << endl;
        }
    }
    return 0;
}
