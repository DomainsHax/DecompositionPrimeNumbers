#include <iostream>
#include <vector>

bool prime_verify(int prime)
{
    int n_divisible = 1; //because the number is always divisible for himself
     
    for(int i = 1; i <= (prime/2); i++)
        if(prime%i == 0)
	    n_divisible++;

    if(n_divisible == 2) return true;
    return false;
}

int main()
{
    int number;
    std::vector<int> prime_numbers;
  
    std::cout << "enter the number: ";
    std::cin >> number;

    for(int prime = 1; prime <= (number/2); prime++)
        if(prime_verify(prime)) prime_numbers.push_back(prime);

    if(prime_verify(number)) prime_numbers.push_back(number);
  
    while(number != 1)
    {
        for(int i = 0; i < prime_numbers.size(); i++)
	{
	    int prime = prime_numbers[i];
	    if(number%prime == 0)
	    {
		number = number/prime;
		std::cout << "Divisible for: " << prime << '\n';
	    }
	}
    }
  
    return 0;
}
