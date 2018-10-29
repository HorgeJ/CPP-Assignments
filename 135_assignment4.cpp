// Find wether eaquation is quadtratic or has complex roots

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

  int a, b ,c;
  double discriminant;
  double x1,x2;

  cout << "enter value a ";
  cin >> a;
  cout << "enter value b ";
  cin >> b;
  cout << "enter value c ";
  cin >> c;
  cout << endl << "value a:" << a << endl;
  cout << "value b:" << b << endl;
  cout << "value c:" << c << endl << endl;

  discriminant = b*b-4*a*c;

  if( a == 0)
    cout << "The equation is not quadratic" << endl;  // if discremenant = 0, not quadtratic, exit
  else if( discriminant < 0)
    cout << "The roots are complex" << endl;          // if discremenant < 0, the root is complex, exit
  else                                                // else, calculate quadtratic equation
    {
      x1=(-b+sqrt(discriminant))/(2*a);               // calc +
      x2=(-b-sqrt(discriminant))/(2*a);               // calc -
      cout << fixed << setprecision(3);
      cout << "x1 = " << x1 << endl;
      cout << "x2 = " << x2 << endl;
    }

  return 0;
}
