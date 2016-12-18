#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int number;
    vector<int> prime_numbers;
  
    cout << "enter the number: ";
    cin >> number;

    for(int prime = 1; prime <= number; prime++)
    {
        if(prime == number || prime <= (number/2))
        {
            int n_divisible = 0;
       
            for(int i = 1; i <= prime; i++)
                if(i == prime || i <= (prime/2))
                    if(prime%i == 0)
                        n_divisible++;
 
	    if(n_divisible == 2)
	        prime_numbers.push_back(prime);
	}
    }
  
    while(number != 1)
    {
        for(int i = 0; i < prime_numbers.size(); i++)
	{
	    int prime = prime_numbers[i];
	    if(number%prime == 0)
	    {
		number = number/prime;
		cout << "Divisible for: " << prime << '\n';
	    }
	}
    }
  
    return 0;
}
