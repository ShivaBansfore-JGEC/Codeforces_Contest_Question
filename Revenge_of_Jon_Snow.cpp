#include <bits/stdc++.h>
using namespace std;
long long mod = 1000000007;

int main() {

  // two input a & b find the Kth number divible by that
int t;
cin>>t;
while(t--){
        unsigned int a, b;

        unsigned int Kth;

        cin >> Kth >> a >>b;

        long long value;

        long long numa, numb, top = 1;

        unsigned int ai = 1, bi = 1;

        numa = a;
        numb = b;

        while (top <= Kth)

        {

            if (a == b)

            {

            top = Kth;

            value = (a * top)%mod;

            break;

            } else

            {

            numa =( a * ai)%mod;

            numb = (b * bi)%mod;

            if (numa < numb)

            {

                value = numa%mod;

                ai++;

            } else if (numb < numa)

            {

                value = numb%mod;

                bi++;

            } else

            {

                value = numa%mod; //equal

                ai++;

                bi++;

            }

            top++;

            }

        }

        cout << value%mod<<endl;
}
        return 0;

}