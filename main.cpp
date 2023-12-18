//main.cpp

#include "Task.h"
#include "TaskList.h"
#include <iostream>

int main(){


    Task myTask("Tester", "A tester task", "12/15/23", 1);

    myTask.setName("Make pasta");
    myTask.setDescr("Make pesto, boil water, cook pasta, combine with pesto.");
    myTask.setDate("Today");
    myTask.setPrio(3);
    

    TaskList myList;

    myList.addTask(myTask);

    myList.displayTasks();

    myList.completeTask("Make pasta");

    myList.displayTasks();

    return 0;
}