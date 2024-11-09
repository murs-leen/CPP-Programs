#include<iostream>
using namespace std;
int main()
{
    int numOfCategories, subCategory, products, productVariation;
    cout << "Enter number of categories:";
    cin >> numOfCategories;

    for(int i = 0; i < numOfCategories; i++)
    {
        cout << endl;
        cout << "Enter the sub categories of category " << i + 1 << ":";
        cin >> subCategory;
        cout << "Enter the products of sub category " << i + 1 << ":";
        cin >> products;
        for(int j = 0; j < subCategory; j++)
        {
            cout << endl;
            cout << "For category " << j + 1 << " subcategory " << j + 1 << endl;
            for(int j = 0; j < products; j++)
            {
                cout << "Enter the variation of product " << j + 1 << ":";
                cin >> productVariation;
            }

        }

    }
}