#include<iostream>
using namespace std;

int main( )
{
	char str[80];
	cin.getline(str,80);

	int words = 0;

	for(int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			words++;
		}
	}
	cout << words+1 << endl;
    return 0;
}
