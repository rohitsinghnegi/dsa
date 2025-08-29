#include <bits/stdc++.h>
using namespace std;

int countdigit(int n)
{
  int count = 0;
  while (n > 0)
  {
    count += 1;
    n = n / 10;
  }
  return count;
}
int reversenum(int n)
{
  int revnum = 0;
  while (n > 0)
  {
    int ld = n % 10;
    revnum = (ld + (10 * revnum));
    n = n / 10;
  }
  return revnum;
}

int checkpalindrome(int n)
{
  int org = n;
  int pan = 0;
  while (n > 0)
  {
    int ld = n % 10;
    pan = ((10 * pan) + ld);
    n = n / 10;
  }
  if (org == pan)
  {
    cout << "true";
  }
  else
    cout << false;
}

int main()
{
  int n;
  cin >> n;
  cout << checkpalindrome(n);

  return 0;
}

int main()
{
  int n;
  cin >> n;
  int dup = n;
  int sum = 0;
  while (n > 0)
  {
    int ld = n % 10;
    sum = sum + (ld * ld * ld);
    n = n / 10;
  }
  if (dup == sum)
    cout << "armstrong";
  else
    cout << "no armstr";

  return 0;
}

int main()
{
  // print all divisors
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i;
    }
  }
}
// check for prime or not(brute force)
int main()
{
  int n;
  int count = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      count = count + 1;
    }
    cout << endl;
  }
  if (count == 2)
  {
    cout << "prime number";
  }
  else
    cout << "not a prime number";
}
// optimal
int main()
{
  int n, count = 0;
  cin >> n;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      count++;
      if ((n / i) != i)
        count++;
    }
    cout << endl;
  }
  if (count == 2)
    cout << "prime";
  else
    cout << "not prime";
}
// for the gcd

//

// equilateral algo
// a,b = (a-b,b)  till one of the number become 0
//  or greater%smaller til one of the no.becames 0 gcd(a,b)= (a%b,b);

int main()
{
  int a, b;
  cin >> a >> b;
  while (a > 0 && b > 0)
  {
    if (a > b)
    {
      (a = a % b);
    }
    else
    {
      (b = b % a);
    }
  }
  if (a == 0)
  {
    cout << b;
  }
  else
    cout << a;
  return 0;
}