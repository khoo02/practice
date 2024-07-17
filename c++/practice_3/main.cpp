#include <iostream>
using namespace std;

void printResult(int num)
{
    // iterate from 1 to num
    for (int i = 1; i <= num; i++)
    {
        // print 'FizzBuzz' if num divisible by both 3 and 5F
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        // print 'Fizz' if num divisible by 3
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        // print 'Buzz' if num divisible by 5
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            cout << i << endl;
        }
    }
    return;
}

int main()
{
    int num = 0;
    // user prompt to enter number
    cout << "Please enter a number:";
    cin >> num;
    cout << "You have chosen: " << num << endl;
    // print result iterating through one and user defined number
    printResult(num);
    return 0;
}