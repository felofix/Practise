//
//  tests.cpp
//  Øving_4
//
//  Created by Felix Aarekol Forseth on 12/07/2022.
//

#include "tests.hpp"
#include "utilities.hpp"

void testCallByValue()
{
    int v0 = 5;
    int increment = 2;
    int iterations = 10;
    int result = incrementByValueNumTimes(v0, increment, iterations);
    cout << "v0: " << v0
            << " increment: " << increment
            << " iterations: " << iterations
            << " result: " << result << endl;
}

void testCallByReference()
{
    int v0 = 5;
    int increment = 2;
    int iterations = 10;
    int result = incrementByValueNumTimesRef(v0, increment, iterations);
    cout << "v0: " << v0
            << " increment: " << increment
            << " iterations: " << iterations
            << " result: " << result << endl;
}

void testVectorSorting()
{
    int n = 10;
    vector<int> percenteges;
    randomizeVector(percenteges, n);
    double m1 = medianOfVector(percenteges);
    cout<<m1<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<percenteges[i]<<" ";
    }
    cout<<endl;
    // swapNumbers(percenteges[0], percenteges[n-1]); // swapping works.    
    // Sorting works.
    sortVector(percenteges);
    for (int i = 0; i < n; i++){
        cout<<percenteges[i]<<" ";
    }
    cout<<endl;
    // Median works.
    double m2 = medianOfVector(percenteges);
    cout<<m2<<endl;
}
