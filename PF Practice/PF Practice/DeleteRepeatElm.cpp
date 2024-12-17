//#include<iostream>
//using namespace std;
//
//void deleteRepeat(char[], int);
//int main()
//{
//	const int S = 100;
//	char ch[S];
//	int i = 0;
//	char temp;
//	cout << "Enter the characters : ";
//	do
//	{
//		cin >> temp;
//		if (temp != '0')
//		{
//		ch[i] = temp;
//		i++;
//		}
//	} while (temp != '0');
//	ch[i] = '\0';
//	deleteRepeat(ch, i);
//	for (int i = 0; ch[i] != '\0'; i++)
//		cout << ch[i] << " ";
//	return 0;
//}
//void deleteRepeat(char ch[], int size) {
//	for (int i = 0; ch[i] != '\0'; i++) {
//		for (int j = i + 1; ch[j] != '\0'; ) { // No increment here
//			if (ch[i] == ch[j]) {
//				// Shift all elements left to remove duplicate
//				for (int k = j; ch[k] != '\0'; k++) {
//					ch[k] = ch[k + 1];
//				}
//				// No increment of j, as we need to check the new ch[j]
//			}
//			else {
//				j++; // Increment j only if no deletion
//			}
//		}
//	}
//}
