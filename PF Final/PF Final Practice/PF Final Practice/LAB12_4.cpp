//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//    int count = 0;
//    bool found = false;
//    string str = "Im a developer";
//    string userStr, strCamp;
//
//    getline(cin, userStr);  // Get user input
//
//    // Loop through the string to extract words
//    while (count < str.length())
//    {
//        strCamp = "";  // Reset strCamp for the next word
//
//        // Extract the word until a space is found or end of string
//        while (count < str.length() && str[count] != ' ')
//        {
//            strCamp += str[count];
//            count++;
//        }
//
//        // Check if the extracted word matches userStr
//        if (userStr == strCamp)
//        {
//            found = true;
//            break;
//        }
//
//        // Skip the space if any
//        count++;
//    }
//
//    if (found)
//        cout << "Found" << endl;
//    else
//        cout << "Not Found" << endl;
//
//    return 0;
//}
