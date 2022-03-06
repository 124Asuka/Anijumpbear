#include<iostream>
#include<string>
using namespace std;

int cal(string a)
{
    return (a[0] - '0') * 7 + (a[1] - '0') * 9 + (a[2] - '0') * 10 +  (a[3] - '0') * 5 + (a[4] - '0') * 8 + (a[5] - '0') *4  + (a[6] - '0') * 2 + (a[7] - '0') * 1 + (a[8] - '0') * 6 +(a[9] - '0') * 3 + (a[10] - '0') * 7 + (a[11] - '0') * 9 + (a[12] - '0') * 10 + (a[13] - '0') * 5 + (a[14] - '0') * 8 + (a[15] - '0') * 4 +(a[16] - '0') * 2;
}

char s(string a)
{
    int k = cal(a) % 11;
    if (k == 0)
        return '1';
    else if (k == 1)
        return '0';
    else if (k == 2)
        return 'X';
    else
        return '0'+12-k;
}
int main()
{
    string number;
    while ((cin >> number) && number != "-1")
    {
        if (number[17] == s(number))
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    system("pause");
    return 0;
}
