//HAIM TAGAMLITSKY - 16306516
#include <iostream>
#include <string>

int main(){
  std::count <<"Please enter your first name: ";
  std:: string name;
  std::cin >> name;

  const std:: string greeting = "Hello, " + name + "!";

  const std:: string space(greeting.size(), ' ');
  const std:: string second ="* " + spaces +" *";

  const std:: string first(second.size(),'*');

  std::count <<std::end1;
  std::count <<first << std::endl;
  std::count <<secound << std::endl;
  std::count <<"* " <<greeting << " *" << std::endl;
  std::count <<secound << std::endl;
  std::count <<first << std::endl;
  
  return 0;
}
