#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void Init(int* b, const int n)
{
    for (int i = 0; i < n; i++)
        b[i] = -10 + rand() % 21;
}

void Print(int* b, const int n)
{
    cout << "{ ";
    for (int i = 0; i < n; i++)
        cout << b[i] << (i < n - 1 ? ", " : "");
    cout << " }";
}

int SumEven(int b[], const int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] % 2 == 0)  
            s += b[i];
    }
    return s;
}

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));
    int n;
    cout << "n = ";
    cin >> n;

    int* b = new int[n];
    Init(b, n);

    cout << "Array: ";
    Print(b, n);
    cout << endl;

    int sum = SumEven(b, n);
    cout << "The sum of even elements: " << sum << endl;

    delete[] b;
    b = nullptr;
    return 0;
}