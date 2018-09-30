//HAIM TAGAMLITSKY - 16306516
#include <iostream>

void sqare(int num)
{
  for(int i=1; i<=num; i++)
  {
    if(i == 1 || i==num)
    {
      for(int j =0; j<num; j++)
      {
        std::cout << "+" << " ";
      }
    }
    else
    {
      for(int j =0; j<num; j++)
      {
        if(j== 0 || j == num-2)
        {
          std::cout << "+" << " ";
        }
        std::cout << " " << " ";
      }
    }

    std::cout << " \n";
  }
}
/*
void rectangle(int num)
{
  for(int i=1; i<=num; i++)
  {
    if(i == 1 || i==num)
    {
      for(int j =0; j<num; j++)
      {
        std::cout << "+" << " ";
      }
    }
    else if(i > i/2)
    {
      for(int j =0; j<num; j++)
      {
        if(j== 0 || j == num-2)
        {
          std::cout << "+" << " ";
        }
        std::cout << " " << " ";
      }
    }
    std::cout << " \n";
  }
}

void triangle(int num)
{

}
/**/
int main()
{
  int size;
  std::cout <<"Please enter a size: ";
  std::cin >> size;

  sqare(size);
  std::cout << " \n";
  /*rectangle(size);/**/



  return 0;
}
