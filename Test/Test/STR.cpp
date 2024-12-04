#include<iostream>
using namespace std;
int main()
{
	string str;
	int sum = 0;
	cout << "Enter a number of string :";
	cin >> str;
	int leng = str.length() - 1;
	int count = 0;
	while (count <= leng)
	{
		if (str[count] >= '0' && str[count] <= '9')
		{
			sum = sum + static_cast<int>((str[count]));
			//cout << sum << endl;
			cout << sum << endl;
		}
		else
		{
			cout << "Invalid input";
			break;
		}
		count++;

	}
	cout << "Sum = " << sum;
	return 0;
}