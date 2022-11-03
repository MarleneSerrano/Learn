#include <iostream>
#include <random>

using namespace std;

int main()
{
  int number;
  for(int i = 0; i<100; i++)
    {
      number = rand() % 100;
      cout<<number << endl;
    }
  return 0;
}
