// Conditional Decryption Scheme

#include <iostream>
using namespace std;
int main()
{
    char char1, char2, char3, char4, char5, originalChar1, originalChar2;
    cout << ">> Decryption Scheme << \n" << endl;
    cout << "Enter five characters (only alphabates and integers) " << endl;
    cout << "first character must be an alphabate (upper or lower case): ";
    cin >> char1 >> char2 >> char3 >> char4 >> char5;
    if(cin.peek() != '\n'){
        cout << "Invalid input. Number must be a 6-digit number." << endl;
        return 0;
    }

    // Check first character must be an alphabate
    if (!((char1 >= 'A' && char1 <= 'Z') || (char1 >= 'a' && char1 <= 'z'))){
        cout << "First character must be an alphabate (upper case or lower case) " << endl;
        return 0;
    }

    // Input validaition for char2
    if (!((char2 >= 'A' && char2 <= 'Z') || (char2 >= 'a' && char2 <= 'z') || (char2 >= '0' && char2 <= '9'))){
            cout << "Invalid input! only alphabtes and integres are allowed." << endl;
            return 0;
        }
    // Input validaition for char3
    if (!((char3 >= 'A' && char3 <= 'Z') || (char3 >= 'a' && char3 <= 'z') || (char3 >= '0' && char3 <= '9'))){
            cout << "Invalid input! only alphabtes and integres are allowed." << endl;
            return 0;
        }
    // Input validaition for char4
    if (!((char4 >= 'A' && char4 <= 'Z') || (char4 >= 'a' && char4 <= 'z') || (char4 >= '0' && char4 <= '9'))){
            cout << "Invalid input! only alphabtes and integres are allowed." << endl;
            return 0;
        }
    // Input validaition for char5
    if (!((char5 >= 'A' && char5 <= 'Z') || (char5 >= 'a' && char5 <= 'z') || (char5 >= '0' && char5 <= '9'))){
            cout << "Invalid input! only alphabtes and integres are allowed." << endl;
            return 0;
        }
        
    // Scheme 1 (A - Z)
    if(char1 >= 'A' && char1 <= 'Z'){

    // Subtract 3 from each character's ASCII 
        char1 = char1 - 3;
        char2 = char2 - 3;
        char3 = char3 - 3;
        char4 = char4 - 3;
        char5 = char5 - 3;
        originalChar1 = char1;
        originalChar2 = char2;

    // Reverse character's values
        char1 = char5;
        char2 = char4;
        char4 = originalChar2;
        char5 = originalChar1;
        cout << "Decrypted message : " << char1 << char2 << char3 << char4 << char5 << endl;
    }

    // Scheme 2 (a - z)
    else if(char1 >= 'a' && char1 <= 'z'){

     //Vowel replacement:
        // for char1
        if(char1 == 'a' || char1 == 'A') char1 = char1 + 4;
        else if(char1 == 'e' || char1 == 'E') char1 = char1 + 4;
        else if(char1 == 'i' || char1 == 'I') char1 = char1 + 6;
        else if(char1 == 'o' || char1 == 'O') char1 = char1 + 6;
        else if(char1 == 'u' || char1 == 'U') char1 = char1 - 20;

         // for char2
        if(char2 == 'a' || char2 == 'A') char2 = char2 + 4;
        else if(char2 == 'e' || char2 == 'E') char2 = char2 + 4;
        else if(char2 == 'i' || char2 == 'I') char2 = char2 + 6;
        else if(char2 == 'o' || char2 == 'O') char2 = char2 + 6;
        else if(char2 == 'u' || char2 == 'U') char2 = char2 - 20;

        // for char3
        if(char3 == 'a' || char3 == 'A') char3 = char3 + 4;
        else if(char3 == 'e' || char3 == 'E') char3 = char3 + 4;
        else if(char3 == 'i' || char3 == 'I') char3 = char3 + 6;
        else if(char3 == 'o' || char3 == 'O') char3 = char3 + 6;
        else if(char3 == 'u' || char3 == 'U') char3 = char3 - 20;

        // for char4
        if(char4 == 'a' || char4 == 'A') char4 = char4 + 4;
        else if(char4 == 'e' || char4 == 'E') char4 = char4 + 4;
        else if(char4 == 'i' || char4 == 'I') char4 = char4 + 6;
        else if(char4 == 'o' || char4 == 'O') char4 = char4 + 6;
        else if(char4 == 'u' || char4 == 'U') char4 = char4 - 20;

        // for char5
        if(char5 == 'a' || char5 == 'A') char5 = char5 + 4;
        else if(char5 == 'e' || char5 == 'E') char5 = char5 + 4;
        else if(char5 == 'i' || char5 == 'I') char5 = char5 + 6;
        else if(char5 == 'o' || char5 == 'O') char5 = char5 + 6;
        else if(char5 == 'u' || char5 == 'U') char5 = char5 - 20;

        // Swap Case:
        if(char1 >= 'A' && char1 <= 'Z') char1 += 32;
        else if(char1 >= 'a' && char1 <= 'z') char1 -= 32;

        if(char2 >= 'A' && char2 <= 'Z') char2 += 32;
        else if (char2 >= 'a' && char2 <= 'z') char2 -= 32;
        
        if(char3 >= 'A' && char3 <= 'Z') char3 += 32;
        else if (char3 >= 'a' && char3 <= 'z') char3 -= 32; 
       
        if(char4 >= 'A' && char4 <= 'Z') char4 += 32;
        else if (char4 >= 'a' && char4 <= 'z') char4 -= 32; 

        if(char5 >= 'A' && char5 <= 'Z') char5 += 32;
        else if (char5 >= 'a' && char5 <= 'z') char5 -= 32;

        cout << "Decrypted message : " << char1 << char2 << char3 << char4 << char5 << endl;
    }
        return 0;
}