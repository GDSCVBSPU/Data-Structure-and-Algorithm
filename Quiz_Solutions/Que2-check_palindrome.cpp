//write a function to check the given number is palindrome or not take numer as parameter
#include <iostream>
using namespace std;

// Iterative function to check if a given number is a palindrome or not
int isPalindrome(int num)
{
	// `n` stores the given integer
	int n = num;

	// `rev` stores the reverse of the given integer
	int rev = 0;

	while (n)
	{
		// this will store the last digit of `n` in variable `r`
		// e.g. if `n` is 1234, then `r` would be 4
		int r = n % 10;

		// add `r` to `rev` in one's place
		// e.g. if `rev = 65` and `r = 4`, then new `rev` would be 654
		rev = rev * 10 + r;

		// remove the last digit from `n`
		// e.g. if `n` is 1234, then the new `n` would be 123
		n = n / 10;
	}

	// this expression will return 1 if the given number is equal to
	// its reverse; otherwise, it will return 0
	return (num == rev);
}

int main(void)
{
	int n;
    cout<<"Enter the Number: ";
    cin>>n;

	if (isPalindrome(n)) {
		printf("Palindrome");
	}
	else {
		printf("Not Palindrome");
	}

	return 0;
}
