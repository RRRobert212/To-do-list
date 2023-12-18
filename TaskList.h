//Tasklist.h

#ifndef TASKLIST_H
#define TASKLIST_H

#include <vector>
#include "Task.h"

class TaskList {

    public:

    TaskList();

    //add task
    void addTask(const Task& task);

    //remove task
    void removeTask(const std::string& taskName);

    void completeTask(const std::string& taskName);


    //display tasks
    void displayTasks() const; 


    private:

    std::vector<Task> tasks;




};











#endif