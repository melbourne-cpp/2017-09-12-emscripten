// http://rosettacode.org/wiki/Find_limit_of_recursion#C.2B.2B
#include <iostream>
 
void recurse(unsigned int i)
{
  std::cout<<i<<"\n";
  recurse(i+1);
}
 
int main()
{
  recurse(0);
}
