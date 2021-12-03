// addprog2.cpp 
// Lisa Jacklin
// CS 201
// 12/1/2021
//


#include <iostream>
#include <vector>
#include <algorithm>

struct vectorStats {
    double min = 0.0;
    double max = 0.0;
    double mean = 0.0;
    double median = 0.0;
};

void maxVal(std::vector <int>& num);
void minVal(std::vector <int>& num);

int main()
{
    std::vector <int> s1{ 1, 26,7, 14,5,2 };
    std::vector <int> s2{ 5,10,15,20, 25,30 };
    std::vector <int> s3{ 16, 0, 14, 43, 78, 19 };
    std::vector <int> s4{ 2, 10, 14, 17, 0, 22 };
    std::vector <int> s5{ 0,2,17,0,15, 29 };

    maxVal(s1);
    minVal(s1);
    maxVal(s2);
    minVal(s2);
    maxVal(s3);
    minVal(s3);
    maxVal(s4);
    minVal(s4);
    maxVal(s5);
    minVal(s5);
}

//return all min, max, mean and meadian values using a struct.

void maxVal (std::vector <int> & num) {
//finding the maximum element
    int max = *max_element(num.begin(), num.end());
    std::cout << "max: " << max << "\n";
}

void minVal (std::vector <int> & num) {

    int min = *min_element(num.begin(), num.end());
    std::cout << "min: " << min << "\n";
}


