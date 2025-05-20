#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int digits = 0;
    
    // Count the number of digits
    int temp = number;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    
    // Calculate sum of digits raised to power of number of digits
    temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    
    // Check if the number is Armstrong
    return (sum == originalNumber);
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    
    // Examples of Armstrong numbers
    cout << "\nExamples of Armstrong numbers:" << endl;
    cout << "1, 153, 370, 371, 407" << endl;
    
    return 0;
}