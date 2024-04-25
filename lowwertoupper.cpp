#include <iostream>
#include <cctype>
using namespace std;
void covertToUppercase(char *);
int main()
{
  char phrase[] = "hello word";
 convertToUppercase(phrase);
  cout << phrase;
  return 0;
}
void covertToUppercase(char *sptr)
{
  while (*sptr != '\0')
  {

    if (islower(*sptr))
      *sptr = toupper(*sptr);
    ++sptr;
  }
}