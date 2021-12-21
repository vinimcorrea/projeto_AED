#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include <stack>

#include "Tests/Database.h"
#include "Tests/Menu.h"

int main(int argc, char* argv[]) {

    Database* database = new Database();

    stack<Menu*> uiStack;
    uiStack.push(new AirportMenu(database));

    while(!uiStack.empty()){
        uiStack.top()->displayMessage();
        Menu* newMenu = uiStack.top()->processInput();
        if(newMenu){
            if(newMenu == uiStack.top())
                continue;
            uiStack.push(newMenu);
        } else {
            delete uiStack.top();
            uiStack.pop();
        }
    }

    delete database;
}