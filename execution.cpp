#include <iostream>
#include <string>
using namespace std;

struct Task {
    string command;
    Task* next;
};

Task* createTask(string cmd) {
    Task* newTask = new Task();
    newTask->command = cmd;
    newTask->next = nullptr;
    return newTask;
}

void addTask(Task*& head, string cmd) {
    Task* newTask = createTask(cmd);
    if (head == nullptr) {
        head = newTask;
    } else {
        Task* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newTask;
    }
}

void executeTasks(Task* head) {
    Task* temp = head;
    while (temp != nullptr) {
        cout << "Executing: " << temp->command << endl;
        temp = temp->next;
    }
}

int main() {
    Task* head = nullptr;
    addTask(head, "Compile Code");
    addTask(head, "Run Tests");
    addTask(head, "Deploy Application");
    executeTasks(head);
    return 0;
}