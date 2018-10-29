#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int num, i, count, j;
  int total;
  bool is_prime = true;

  cin >> num;
  while(!cin.eof()) {
      if( num < 2)
	{
	  cout << num << " is not prime number" << endl;
	} else {
	  for(i =2; i <= sqrt(num); i++){
	      if(num % i == 0)
		{
		  is_prime = false;
		}
	    } if(is_prime == true)
	       {
		 cout << num << " is a prime number" << endl;
	       }
	  else
	    cout << num << " is not a prime number" << endl;
	}
      cin >> num;
      total++;
    }
  cout << endl << "total integers = " << total << endl;

  return 0;
}
