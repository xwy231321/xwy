#include<bits/stdc++.h>
using namespace std;
int main()
{
  double apx = 0.0;
  double trm = 1.0;
  double den = 1.0;
  double sgn = 1.0;
  while (abs(trm) >= 1e-6)
  {
    apx += sgn * trm;
    sgn = -sgn;
    den += 2;
    trm = 1.0 / den;
  }
  double pi = 4.0 * apx;
  cout << "PI=" << fixed << setprecision(5) << pi << endl;

  return 0;
}