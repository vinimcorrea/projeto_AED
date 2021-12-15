#include "Trolley.h"

void Trolley::luggageThroughTreadmill(const Luggage &l1) {
    treadmill.push(l1);
}

void Trolley::insertLuggageIntoTrolley() {
    int b = numberStacks;
    int a = numberCarriage;
    while(a > 0){
        list<stack<Luggage>> empty;
        luggageStacksPerCarriage.push_back(empty);
        a--;
    }
    while(b > 0){
        stack<Luggage> empty;
        for(auto it = luggageStacksPerCarriage.begin(); it != luggageStacksPerCarriage.end(); it++){
            (*it).push_back(empty);
        }
        b--;
    }
    for(auto it = luggageStacksPerCarriage.end(); it != luggageStacksPerCarriage.begin(); it++){
        for(auto at = (*it).end(); at != (*it).begin();){
            if(treadmill.empty()) break;
            if((*at).size() == numberLuggagePerStack) {
                at--;
                continue;
            }
            (*at).push(treadmill.front());
            treadmill.pop();
            numberOfLuggageInserted +=1;
        }
    }
}

bool Trolley::trolleyIsFull() const {
    return numberStacks*numberCarriage*numberLuggagePerStack == numberOfLuggageInserted;
}


