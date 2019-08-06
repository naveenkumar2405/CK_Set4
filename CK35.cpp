#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  string str;
  int count = 0;

  getline(cin, str);

  for(int i = 0; str[i] != '\0'; i++)
  {
      if( str[i] != ' ' && (str[i] < '0' || str[i] > '9') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') )
        count++;
  }

  cout << count;

  return 0;
}
