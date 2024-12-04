//#include<iostream>
//#include<math.h>
//#include<ctime>
//using namespace std;
//
//void armstrongNum(int[], int size);
//int main()
//{
//	const int S = 100;
//	int arr[S] = { 0 };
//	armstrongNum(arr, S);
//	return 0;
//}
//void armstrongNum(int arr[], int size)
//{
//	int noOfDigits = 0;
//	srand(time(0));
//	for (int j = 0; j < size; j++)
//	{
//		arr[j] = (rand() % 9900) + 100;
//		int num = arr[j];
//        int originalNum2 = num;
//        int i = 0;
//        while (arr[j] != 0) {
//            arr[j] /= 10;
//            i++;
//        }
//        int count = 0, sum = 0;
//        while (count < i) 
//        {
//           int remainder = num % 10;
//           sum = sum + pow(remainder, i);
//            num /= 10;
//            count++;
//        }
//        if (sum == originalNum2) {
//            cout << originalNum2 << " is an armstrong number." << endl;
//        }
//	}
//}