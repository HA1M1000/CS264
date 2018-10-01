//HAIM TAGAMLITSKY - 16306516
#include <iostream>

int main()
{
  int product = 1;
  for(int i = 1; i<9;i++)
  {
	if(i%2==0)
	{
		product = product*i;
		std::cout << i;
		std::cout << " \n";
	}
    	
  }
  std::cout << product;
  std::cout << " \n";

  return 0;
}
