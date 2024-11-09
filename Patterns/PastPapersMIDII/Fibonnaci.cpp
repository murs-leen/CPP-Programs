#include<iostream>
int main(){
    int pre1,pre2, curr,posi; 
    std::cout << "Enter 1st number: ";
    std::cin >> pre1;
    std::cout << "Enter 2nd number: ";
    std::cin >> pre2;
    std::cout << "Enter position: ";
    std::cin >> posi;
    if(posi < 0)
        {
            std::cout << "Invalid position." << std::endl;
            return 0;
        }
    if(pre1 == pre2){
        std::cout <<"Numbers are equal";
        return 0;
    }
    if(pre1 < pre2)
    {
        if(posi == 1)
            std::cout << pre1 << std::endl;
        if(posi == 2)
            std::cout << pre2 << std::endl;
        if(posi > 2)
        {
            for(int i = 3; i <= posi; i++)
            {
                curr = pre1 + pre2;
                pre1 = pre2;
                pre2 = curr;
                std::cout << curr << " ";
            }
            std::cout << std::endl;
            
        }
    }
    else
    {
        std::cout << "Number 2 is less than number 1." << std::endl;
        return 0;
    }
}