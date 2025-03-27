#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b;

    if (argc != 3)
    {
        cout << "Invalid number of arguments" << endl;
        return 1;
    }    

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    
    if(a>=b) {
        cout << "Invalid arguments: the second number should be bigger than the first number" << endl;
    }
    else{
        int tmp=0;
        for(int i=a; i<=b; i++) {
                tmp+=i;
        }
        cout << "You entered: " << a << " and " << b << endl;
        cout << "The result is " << tmp << endl;
    }

    return 0;
}