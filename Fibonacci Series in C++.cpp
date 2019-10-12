#include<iostream>
 
using namespace std;
 
main()
{
   int n, c, next;
   int f = 0;
   int sec = 1; 
 
   cout << "Enter the number of terms of Fibonacci series you want" << endl;
   cin >> n;
 
   cout << "First " << n << " terms of Fibonacci series are :- " << endl;
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = f + sec;
         f = sec;
         sec = next;
      }
      cout << next << ", ";
   }
 
   return 0;
}
