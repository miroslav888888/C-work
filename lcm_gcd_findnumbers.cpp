#include <iostream>
using namespace std;
 
// C++ function to calculate GCD
// of two numbers
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
 
// C++ function to count number
// of pairs with given GCD and LCM
int countPairs(int G, int L)
{
    // To store count
    int count = 0;
 
    // To store product a*b = G*L
    int p = G*L;
 
    // p/a will be b if a divides p
    for (int a=1; a<=L; a++)
        if (!(p%a) && gcd(a, p/a)==G) cout<<a<<endl;
 
    return count;
}
 
// Driver code to test above functions
int main()
{
    int G = 10,L=240;
    cout << "Total possible pair with GCD " << G;
    cout << " & LCM " << L;
    cout <<" = " << countPairs(G, L);
    return 0;
}
