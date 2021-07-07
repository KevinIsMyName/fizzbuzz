#include <iostream>
#include <string>
using namespace std;

void fizzbuzz(int N)
{
    for (int i = 1; i <= N; i++) {
        string out;
        if (i % 3 == 0) {
            out = out.append("Fizz");
        }
        if (i % 5 == 0) {
            out = out.append("Buzz");
        }
        cout << out << endl;        
    }
}

int main(int argc, char *argv[]) 
{
    int N = atoi(argv[1]);
    fizzbuzz(N);
    return 0;
}