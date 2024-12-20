//#include <iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//int countMostlyWhite(int data[][50], int m, int n, int k) {
//    int z = 0;
//    for (int i = 0; i < m; ++i) 
//    {
//        for (int j = 0; j < n; ++j) 
//        {
//            if (m >= i + k && n >= j + k) 
//            {
//                int  c = 0;
//                for (int a = i; a <= i + k; ++a)
//                {
//                    for (int b = j; b <= j + k; ++b) 
//                    {
//                        if (data[a][b] == 1)
//                            c++;
//                    }
//                }
//                if (c >= (k * k) / 2)
//                    z++;
//            }
//        }
//    }
//    //return z;
//}
//
//int main() {
//    srand(time(0));
//    int data[50][50], m, n, k;
//    cout << "Enter number of rows:";
//    cin >> m;
//    cout << "Enter number of col:";
//    cin >> n;
//    cout << "size of sub-matrices:";
//    cin >> k;
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j)
//            data[i][j] = rand() % 2;
//    }
//    int result = countMostlyWhite(data, m, n, k);
//    cout << "Number of mostly white blocks: " << result << endl;
//}