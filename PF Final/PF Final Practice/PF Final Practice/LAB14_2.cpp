//#include<iostream>
//#include<string>
//using namespace std;
//void fibonnaci(int);
//void validPalindrome();
//int main()
//{
//	//int num;
//	//cout << "Enter the number :";
//	//cin >> num;
//	//fibonnaci(num);
//    validPalindrome();
//}
//void fibonnaci(int num)
//{
//	int curr, pre = 0, nxt = 1; 
//	cout << "Fibonnaic numbers:" << endl;
//	cout << pre << " " << nxt << " ";
//	for (int i = 3; i <= num; ++i)
//	{
//		curr = pre + nxt;
//		pre = nxt; 
//		nxt = curr; 
//		cout << curr << " ";
//	}
//}
//using namespace std;
//bool isAlphaNum(char a)
//{
//    if ((tolower(a) >= 'a' && tolower(a) <= 'z'))
//        return true;
//    return false;
//}
//void validPalindrome()
//{
//    string str;
//    bool isPalindrome = true;
//    cout << "Enter a string : ";
//    getline(cin, str);
//    int st = 0, ed = str.length() - 1;
//    while (st < ed) {
//        if (!isAlphaNum(str[st])) {
//            st++;
//            continue;
//        }
//        if (!isAlphaNum(str[ed])) {
//            ed--;
//            continue;
//        }
//        if (str[st] != str[ed]) {
//            isPalindrome = false;
//            break;
//        }
//        str[st] = str[ed];
//        st++;
//        ed--;
//    }
//    if (isPalindrome)
//        cout << str << " is a valid palindrome string." << endl;
//    else
//        cout << str << " is not a valid  palindrome string." << endl;
//}