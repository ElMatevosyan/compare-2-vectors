#include <iostream>
#include <vector>
#include <algorithm>
 
template<typename T>
bool Same(std::vector<T>& first, std::vector<T>& second)
{
    bool flag=true;
    for(int i=0; i< second.size(); i++)
    {
        if ( std::find(first.begin(), first.end(), second[i]) == first.end() )
            {
            flag=false;
            }
    }
    return flag;
}
 
int main()
{
    std::vector<int> i_first = {1, 2, 13, 7, 5};
    std::vector<int> i_second = {13, 8, 2, 1};
 
    std::cout << std::boolalpha << Same(i_first, i_second) << std::endl;
    std::vector<double> d_first = {1.1, 2, 3.0};
    std::vector<double> d_second = {3.0, 1.1, 2};
 
    std::cout << std::boolalpha << Same(d_first, d_second) << std::endl;
    
    std::vector<char> ch_first = {'a', 'b', 'k', 'c'};
    std::vector<char> ch_second = {'c', 'a', 'b'};
 
    std::cout << std::boolalpha << Same(ch_first, ch_second) << std::endl;

    return 0;
}
