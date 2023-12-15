#include "Task.h"
#include <iostream>

int main(){


    Task myTask("Tester", "A tester task", "12/15/23", 1);

    myTask.display();

    std::cout << "\n\n";
    myTask.setName("Make pasta");
    myTask.setDescr("Make pesto, boil water, cook pasta, combine with pesto.");
    myTask.setDate("Today");
    myTask.setPrio(3);
    myTask.complete(true);

    myTask.display();

    return 0;
}