
#include<iostream>
using namespace std;
int numOfDivisor(int num)
{
int ans = 0;
int i;
for (i = 1; i*i<num; i++)
{
if (num%i == 0)
ans += 2;
}
if (i*i == num) ans++;
return ans;
}
int main()
{
int n, num;
while (cin >> n)
{
for (int i = 0; i<n; i++)
{
cin >> num;
cout << numOfDivisor(num) << endl;
}
}
return 0;
}
