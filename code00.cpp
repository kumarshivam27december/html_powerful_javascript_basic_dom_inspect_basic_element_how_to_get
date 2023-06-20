#include <iostream>
using namespace std;

int main()
{
    // Find last prime number
    int n;
    cin >> n;

    int last_prime = 2;
    int i = 2;

    while (i <= n)
    {
        int j = 2;
        bool is_prime = true;

        while (j * j <= i)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
            j++;
        }

        if (is_prime)
        {
            last_prime = i;
        }

        i++;
    }

    cout << last_prime << endl;

    return 0;
}

