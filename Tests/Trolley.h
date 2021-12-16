#ifndef AED_PROJECT_TROLLEY_H
#define AED_PROJECT_TROLLEY_H

#include "Luggage.h"
#include "Plane.h"

#include <stack>
#include <vector>
#include <queue>
#include <list>
using namespace std;

class Trolley {
    int numberCarriage;
    int numberStacks;
    int numberLuggagePerStack;
    int numberOfLuggageInserted = 0;
    queue<Luggage> treadmill;
    list<list<stack<Luggage>>> luggageStacksPerCarriage;
public:
    Trolley(int nc, int ns, int nl){numberCarriage = nc; numberStacks =ns; numberLuggagePerStack =nl;}
    void luggageThroughTreadmill(const Luggage &l1);
    void insertLuggageIntoTrolley();
    void removeLuggage();
    bool trolleyIsFull() const;

};


#endif //AED_PROJECT_TROLLEY_H
