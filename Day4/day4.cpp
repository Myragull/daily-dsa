// 1 fibonaci series
//  0 1 1 2 3 5 8 13 21 34

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";

    for (int i = 1; i <= n; i++)
    {
        int nextNum = a + b;
        cout << nextNum << " ";
        a = b;
        b = nextNum;
    }
    return 0;
}

// continue statements
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}

// practice qs what will be the output of the following questions:
//    1

#include<iostream>
using namespace std;

int main(){
int n;
cout << "Enter a number : ";
cin >> n;

for (int i = 0; i <= n; i++)
{
    cout << i << " ";
    i++;
}
return 0;
}

// 2
#include<iostream>
using namespace std;

int main(){

int n;
cout << "Enter a number : ";
cin >> n;

for (int i = 0; i <= n; i--)
{
    cout << i << " ";
    i++;
}
return 0;
}

// 3
int n;
cout<<"Enter a number :";
cin>>n;
int n;
cout << "Enter a number : ";
cin >> n;

for (int i = 0; i <= 15; i = i + 2)
{
    cout << i << " ";
    if (i & 1)
    {
        continue;
    }
    i++;
}
return 0;
}

// 4
int n;
cout<<"Enter a number :";
cin>>n;
for (int i = 0; i < 5; i++)
{
    for (int j = i; j < 5; j++)
    {
        cout << i << " " << j << endl;
    }
}
return 0;
}

// 5
#include<iostream>
using namespace std;

int main(){
for (int i = 0; i < 5; i++)
{
    for (int j = i; j <= 5; j++)
    {
        if (i + j == 10)
        {
            break;
        }
        cout << i << " " << j << endl;
    }
}
return 0;
}