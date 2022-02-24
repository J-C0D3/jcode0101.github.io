#include <iostream>
using namespace std;

int main()
{
    int length, breadth, height, max;
    cin >> length >> breadth >> height;
    (length > breadth && length > height) ? max == length : (breadth > height) ? max = breadth
                                                                               : max = height;
    if (max == length)
    {
        (breadth + height > length) ? cout << "YES" : cout << "NO";
    }
    else if (max == breadth)
    {
        (length + height > breadth) ? cout << "YES" : cout << "NO";
    }
    else
        (length + breadth > height) ? cout << "YES" : cout << "NO";

    return 0;
}
