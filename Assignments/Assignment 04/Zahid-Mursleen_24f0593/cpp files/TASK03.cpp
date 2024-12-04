//#include<iostream>
//using namespace std;
//
//bool result(int[],int,int);
//int main()
//{
//	const int S = 100;
//	string str;
//	int candies[S] = { 0 };
//	int extraCandies, noOfKids;
//	cout << "Enter the number of kids(n):";
//	cin >> noOfKids;
//	cout << "Enter the candies of each kid:";
//	for (int i = 0; i < noOfKids; i++)
//		cin >> candies[i];
//	cout << "Enter the extra candies:";
//	cin >> extraCandies;
//	int i = 0;
//	while (i++ < noOfKids)
//	{
//		bool isGreatest = result(candies, noOfKids, extraCandies);
//		str = (isGreatest == true) ? "true" : "false";
//		cout << str << " ";
//	}
//}
//bool result(int candies[], int S, int extraCandies)
//{
//	static int i = 0;
//	candies[i] += extraCandies;
//	for (i; i < S; i++)
//	{
//		for (int j = 0; j < S; j++)
//		{
//			if (candies[i] < candies[j])
//			{
//				candies[i] = candies[i] - extraCandies;
//				i++;
//				return false;
//			}
//		}
//		candies[i] = candies[i] - extraCandies;
//		i++;
//		return true;
//	}
//}