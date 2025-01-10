#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector


//# Instructions
//Your goal for this program is to create sections of code that will perform different outputs with the list called, names which contains the following values - `{"Peter", "Bruce", "Steve", "Tony", "Natasha", "Clint", "Wanda", "Hope", "Danny", "Carol"}` and 
//the list called numbers which contains the following values - `100, 50, 10, 1, 2, 7, 11, 17, 53, -8, -4, -9, -72, -64, -80`. At the beginning of your program, add in any comments and create the two lists. Then create the following:
//A loop that will output only the positive numbers in the numbers list.
//A loop that will output the sum of all the values in the numbers list.
//A loop that will output only the numbers that are odd.
//A loop that will output only the names that come before "Thor" in the alphabet from the names list.
//A loop that will find the maximum or minimum value in the numbers list. This algorithm requires an additional variable that is assigned to the first element in the list. Then, in a loop compare each element to the variable. 
//If the element is > (for max) or < (for min), assign the variable to the element. After the loop, print the variable.


template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);
int curr_index = 0;  

int main()
{
    std::vector<std::string> names = {"Peter", "Bruce", "Steve", "Tony", "Natasha", "Clint", "Wanda", "Hope", "Danny", "Carol"}; 
    std::vector<double> numbers ={100, 50, 10, 1, 2, 7, 11, 17, 53, -8, -4, -9, -72, -64, -80}; 
    // Problem 1: A loop that will output every other name in the names list.
    while(names[curr_index] < names.size){
        if(names[curr_index] %% 2 == 1){
            std::cout << names[curr_index] << ""; 
        }
        curr_index = curr_index + 1; 
    }




    
    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}