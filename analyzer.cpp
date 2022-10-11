#include <iostream>
#include "StringData.h"
using namespace std;

int linearSearch (vector <string> container, string element)
{
    for (int index = 0; index < container.size(); index++)
    {
        if (container[index] == element)
        {
            return index;
        }
        else
        {
            continue;
        }
    }
    return -1;
}

int binarySearch (vector <string> container, string element)
{
    int maxIndex = container.size() - 1;
    int minIndex = 0;
    while (maxIndex >= minIndex)
    {
        int midpointIndex = minIndex + (maxIndex - minIndex) / 2;
        if (container[midpointIndex] < element)
        {
            minIndex = midpointIndex + 1;
        }
        else if (container[midpointIndex] > element)
        {
            maxIndex = midpointIndex -1;
        }
        else
        {
            return midpointIndex;
        }
    }
    return -1;
}

int main()
{
    vector <string> data = getStringData();

    cout << "not_here Data:" << "\n" ;

    auto startLinear1Time = chrono::system_clock::now();
    int linear1Index = linearSearch(data, "not_here");
    auto endLinear1Time = chrono::system_clock::now();
    chrono::duration <double> linear1Time = endLinear1Time - startLinear1Time;
    cout << "Linear Search time (in seconds): " << linear1Time.count() << "\n";
    cout << "Index found: ";
    if (linear1Index == -1) {
        cout << "Element not found";
    }
    else {
        cout << linear1Index;
    }
    cout << "\n";
    auto startBinary1Time = chrono::system_clock::now();
    int binary1Index = binarySearch(data, "not_here");
    auto endBinary1Time = chrono::system_clock::now();
    chrono::duration <double> binary1Time = endBinary1Time - startBinary1Time;
    cout << "Binary Search time (in seconds): " << binary1Time.count() << "\n";
    cout << "Index found: ";
    if (binary1Index == -1) {
        cout << "Element not found";
    }
    else {
        cout << binary1Index;
    }

    cout << "\n" << "\n";
    cout << "'mzzzz' Data: ";

    auto startLinear2Time = chrono::system_clock::now();
    int linear2Index = linearSearch(data, "mzzzz");
    auto endLinear2Time = chrono::system_clock::now();
    chrono::duration <double> linear2Time = endLinear2Time - startLinear2Time;
    cout << "Linear Search time (in seconds): " << linear2Time.count() << "\n";
    cout << "Index found: ";
    if (linear2Index == -1) {
        cout << "Element not found";
    }
    else {
        cout << linear2Index;
    }
    cout << "\n";
    auto startBinary2Time = chrono::system_clock::now();
    int binary2Index = binarySearch(data, "mzzzz");
    auto endBinary2Time = chrono::system_clock::now();
    chrono::duration <double> binary2Time = endBinary2Time - startBinary2Time;
    cout << "Binary Search time (in seconds): " << binary2Time.count() << "\n";
    cout << "Index found: ";
    if (binary2Index == -1) {
        cout << "Element not found";
    }
    else {
        cout << binary2Index;
    }


    cout << "\n" << "\n";
    cout << "'aaaaa' Data: ";

    auto startLinear3Time = chrono::system_clock::now();
    int linear3Index = linearSearch(data, "aaaaa");
    auto endLinear3Time = chrono::system_clock::now();
    chrono::duration <double> linear3Time = endLinear3Time - startLinear3Time;
    cout << "Linear Search time (in seconds): " << linear3Time.count() << "\n";
    cout << "Index found: ";
    if (linear3Index == -1) {
        cout << "Element not found";
    }
    else {
        cout << linear3Index;
    }
    cout << "\n";
    auto startBinary3Time = chrono::system_clock::now();
    int binary3Index = binarySearch(data, "aaaaa");
    auto endBinary3Time = chrono::system_clock::now();
    chrono::duration <double> binary3Time = endBinary3Time - startBinary3Time;
    cout << "Binary Search time (in seconds): " << binary3Time.count() << "\n";
    cout << "Index found: ";
    if (binary3Index == -1) {
        cout << "Element not found";
    }
    else {
        cout << binary3Index;
    }

    cout << "\n" << "\n";
}

