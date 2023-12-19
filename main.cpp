//main.cpp

#include "Task.h"
#include "TaskList.h"
#include <iostream>
#include <limits>

int main(){


    TaskList myList;

    while (true) {
        // Display menu
        std::cout << "Task Manager Menu:\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. Display Tasks\n";
        std::cout << "3. Complete Task\n";
        std::cout << "4. Remove Task\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        // Check for valid input
        if (std::cin.fail()) {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a number.\n\n";
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the newline from the input buffer


        switch(choice){

            case 1: {
                std::string name, description, date;
                int priority;

                std::cout << "\nEnter task name: ";
                std::getline(std::cin, name);

                std::cout << "\nEnter task description: ";
                std::getline(std::cin, description);

                std::cout << "\nEnter due date: ";
                std::getline(std::cin, date);

                std::cout << "\nEnter task priority (an integer): ";
                std::cin >> priority;

                Task newTask(name, description, date, priority);
                
                myList.addTask(newTask);

                std::cout << name << " added succesfully, display list or mark task as complete using the options in the menu: \n\n";
                break;
            }

            case 2: {
                myList.displayTasks();
                break;
            }

            case 3: {

                std::cout << "\nEnter name of completed task exactly as you wrote it: ";

                std::string completedTask;
                std::getline(std::cin, completedTask);

                myList.completeTask(completedTask);

                std::cout << completedTask << " marked as complete, good job!\n\n";
                break;
            }

            case 4: {

                std::cout << "\nEnter name of task to remove exactly as you wrote it: ";

                std::string removedTask;
                std::getline(std::cin, removedTask);

                myList.removeTask(removedTask);

                std::cout << removedTask << " succesfully removed.\n\n";
                break;
            }

            case 5: {

                std::cout << "\nGoodbye! ";
                return 0;
            }

            default: {

                std::cout << "\nInvalid choice, please enter one of the integers from the list of choices: \n\n";
                break;
            }


        }

    }

}