#include <iostream>
#include <vector>

bool prime_verify(int prime)
{
    int n_divisible = 2; //because the number is always divisible for himself and 1
     
    for(int i = 3; i <= (prime/2); i+=2)
        if(prime%i == 0 || prime%2 == 0)
	    n_divisible++;

    if(n_divisible == 2) return true;
    return false;
}

int main()
{
    int number;
    std::vector<int> prime_numbers{2};
  
    std::cout << "enter the number: ";
    std::cin >> number;

    for(int prime = 3; prime <= (number/2); prime+=2)
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
