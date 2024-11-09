#include<iostream>
using namespace std;
int main()
{
    int prouducts, machine1,machine2, machine3;
    cout << "Enter the number of products: ";
    cin >> prouducts;
    for(int i = 0; i < prouducts; i ++)
    {
        cout << endl;
        cout << " product: " << i + 1 << endl;
        cout << "Machine A: ";
        cin >> machine1;

        // machine 1
        if(machine1 == 1){
            cout << "Component added"<< endl;
            cout << "Machine B: ";

            // machine 2
            cin >> machine2;
            if(machine2 == 1){
                cout << "Quailty check, passed" << endl;
            }
            else{
                cout << "Quailty check, failed" << endl;
                cout << "Discarded." << endl;
                continue;
            }

            // machine 3
            cout << "Machine C: ";
            cin >> machine3;
            if(machine3 == 1){
                cout << "Packed." << endl;
            }
            else{
                cout << "Discarded.";
            }
        }
        else{
            cout << "Component not added" << endl;
            continue;
        }

    }
}