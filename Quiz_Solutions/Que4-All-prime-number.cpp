//Write a fucntion that print all prime numbers between two given  numbers.
#include<iostream>
using namespace std;
int print_prime(int n1,int n2)
{ 
    bool is_prime=true;
    while (n1<n2) {
    is_prime = true;

    // 0 and 1 are not prime numbers
    if (n1 == 0 || n1 == 1) {
      is_prime = false;
    }
 
    for (int i = 2; i <= n1/2; ++i) {
      if (n1 % i == 0) {
        is_prime = false;
        break;
      }
    }
        
    if (is_prime)
      cout << n1 << ", ";

    ++n1;
  }

   return 0;
}
int main()
{
     int n1,n2;
     cout<<"Enter the two number : ";
     cin>>n1>>n2;
     print_prime(n1,n2);
}