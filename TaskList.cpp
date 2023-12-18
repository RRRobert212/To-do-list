//Tasklist.cpp

#include "TaskList.h"
#include <iostream>
#include <algorithm>

TaskList::TaskList() {

}

void TaskList::addTask(const Task& task){
    tasks.push_back(task);
}

void TaskList::displayTasks() const {

    std::cout << "All tasks: \n\n";

    for(const Task& task : tasks){
        task.display();
        std::cout << "\n\n";
    }


}

void TaskList::removeTask(const std::string& taskName) {
    auto it = std::remove_if(tasks.begin(), tasks.end(),
                             [taskName](const Task& task) { return task.getName() == taskName; });

    if (it != tasks.end()) {
        tasks.erase(it, tasks.end()); // Erase the removed elements from the vector
        std::cout << "Task removed: " << taskName << "\n";
    } else {
        std::cout << "Task not found: " << taskName << "\n";
    }
}


void TaskList::completeTask(const std::string& taskName){
    for (Task& task : tasks) {
        if (taskName == task.getName()){
            task.complete();

        }


    }
}