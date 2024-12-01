//#include<iostream>
//using namespace std;
//
//void lowerCase(char [], int S);
//int main()
//{
//	const int S = 4;
//	char ch[S] = { '\0' };
//	for (int i = 0; i < 4; i++)
//	{
//		cout << "Enter character " << i + 1 << "(Upper case) : ";
//		cin >> ch[i];
//		if (!(ch[i] >= 'A' && ch[i] <= 'Z'))
//		{
//			cout << "\nCharacter must be an upper case..";
//			return 1;
//		}
//
//	}
//	lowerCase(ch, S);
//	cout << "Lower case character:";
//	for (int i = 0; i < S; i++)
//		cout << ch[i] << " ";
//	return 0;
//}
//void lowerCase(char ch[], int S)
//{
//	for (int i = 0; i < S; i++)
//		ch[i] += 32;
//}