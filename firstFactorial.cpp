#include <iostream>
#include <string>
using namespace std;

int FirstFactorial(int num) {
  int sum = 1;
  for(int i = 1;i <= num;++i)
      sum*= i;
   
  return sum;

}

int main(void) { 
   
  // keep this function call here
  cout << FirstFactorial(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
