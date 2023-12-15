//Task.h task class header file

//header guard
#ifndef TASK_H
#define TASK_H

#include <string>

class Task{

    public:

    Task(const std::string& n, const std::string& descr, const std::string& date, int prio);
    
    void setName(const std::string& n);
    void setDescr(const std::string& descr);
    void setDate(const std::string& date);
    void setPrio(int prio);
    void complete(bool complete);


    void display() const;

    private:

    std::string name;
    std::string description;
    std::string dueDate;
    int priority;
    bool isComplete;





};




#endif //TASK_H