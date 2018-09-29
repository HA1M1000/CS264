//HAIM TAGAMLITSKY - 16306516
#include <iostream>

int main()
{
  for(int i = 1; i<100;i++)
  {
    if(i%2==0)
    {
      for(int x = 1; x<=9; x++)
      {
        std::cout << i*x;
        std::cout << " ";
      }

      std::cout << " \n";
    }
  }

  return 0;
}
