                //  FlowCharts and pseudoCode:

// Qno1: Find whether a number is even or odd
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << number << " is even." << endl;
    }
    else
    {
        cout << number << " is odd." << endl;
    }
    return 0;
}

// Qno2: Print nums form 1 to 5
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }
    return 0;
}

// Qno3: Print sum fo all evens from 1 to n
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << "Sum of all even numbers from 1 to " << n << " is " << sum << endl;
    return 0;
}

                       //  DATATYPES in C++:
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    cout << n << endl;
    char ch = 'q';
    cout << ch << endl;
    float f = 10.5;
    cout << f << endl;
    return 0;
}
