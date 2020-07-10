#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int t, n, i, j;

    cin >> t;

    while (t--)
    {

        long long c = 0, d = 0;

        long long int sum = 1;

        cin >> n;
		int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n; i++)
        {

            if (a[i] % 2 != 0 || a[i] % 4 == 0)

                d++;

            for (j = i + 1; j < n; j++)
            {

                sum = sum * a[i] * a[j];


                if (sum % 2 != 0 || sum % 4 == 0)

                    c++;
            }

            sum = 1;
        }

        cout << c + d << endl;
    }

    return 0;
}
