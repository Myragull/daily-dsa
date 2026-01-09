#include <iostream>
using namespace std;

bool checkpalindrome(char a[], int s)
{
    int st = 0;
    int e = s - 1;
    while (st <= e)
    {
        if (a[st] != a[e])
        {
            return 0;
        }
        else
        {
            st++;
            e--;
        }
    }
    return 1;
}

int length(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter you string : ";
    cin >> name;

    int len = length(name);
    if (checkpalindrome(name, len))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}