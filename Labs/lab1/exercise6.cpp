//HAIM TAGAMLITSKY - 16306516
#include <iostream>

int main()
{
  int size;
  std::cout <<"Please enter a size: ";
  std::cin >> size;

  for(int i=1; i<=size; i++)
  {
    if(i == 1 || i==size)
    {
      for(int j =0; j<size; j++)
      {
        std::cout << "+" << " ";
      }
    }
    else
    {
      for(int j =0; j<size; j++)
      {
        if(j== 0 || j == size-2)
        {
          std::cout << "+" << " ";
        }
        std::cout << " " << " ";
      }
    }

    std::cout << " \n";
  }

  return 0;
}
