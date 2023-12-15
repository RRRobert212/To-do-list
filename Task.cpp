#include "Task.h"
#include <iostream>

//constructor method
Task::Task(const std::string& n, const std::string& descr, const std::string& date, int prio)
    : name(n), description(descr), dueDate(date), priority(prio), isComplete(false){

    }

//set task name

void Task::setName(const std::string& n){
    name = n;
}

void Task::setDescr(const std::string& descr){
    description = descr;
}

void Task::setDate(const std::string& date){
    dueDate = date;
}

void Task::setPrio(int prio){
    priority = prio;
}

void Task::complete(bool complete){
    isComplete = complete;
}

// display task by printing properties

void Task::display() const {
    std::cout << "Task Details:\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Description: " << description << "\n";
    std::cout << "Due Date: " << dueDate << "\n";
    std::cout << "Priority: " << priority << "\n";
    std::cout << "Is Complete: " << (isComplete ? "Yes" : "No") << "\n";
}
