//HAIM TAGAMLITSKY - 16306516
#include <iostream>
using namespace std;

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

void rectangle(int num)
{
  for(int i=1; i<=num; i++)
  {
    if(i == 1 || i==num)
    {
      for(int j =0; j<num+2; j++)
      {
        std::cout << "+" << " ";
      }
    }
    else
    {
      for(int j =0; j<num+2; j++)
      {
        if(j== 0 || j == num)
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
  int s = num;
  int b = s*2;
  int i = 0;
  
  for(int i=0; i!=s; i++)
  {
	for(int j=0; j!=b; j++)
	{
	  if(j==s-i||j==s+i||(i==s-1 && (j!=0)))
	  {
		  std::cout<<"+";
	  }
	  else
	  {
		  std::cout<<" ";  
	  }
		
	}
	cout<<endl;
  }
}

int main()
{
  int size;
  std::cout <<"Please enter a size: ";
  std::cin >> size;

  sqare(size);
  std::cout << " \n";
  rectangle(size);
  std::cout << " \n";
  triangle(size);
  std::cout << " \n";



  return 0;
}
