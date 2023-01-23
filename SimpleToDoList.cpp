#include <iostream>
#include <vector>
#include <string>

// Class for a simple to-do list
class TodoList {
public:
    // Function to add a task to the list
    void addTask(std::string task) {
        tasks.push_back(task);
        std::cout << "Task added successfully: " << task << std::endl;
    }

    // Function to remove a task from the list
    void removeTask(std::string task) {
        for (int i = 0; i < tasks.size(); i++) {
            if (tasks[i] == task) {
                tasks.erase(tasks.begin() + i);
                std::cout << "Task removed successfully: " << task << std::endl;
                return;
            }
        }
        std::cout << "Error: Task not found: " << task << std::endl;
    }

    // Function to display the list of tasks
    void displayTasks() {
        std::cout << "To-do List: " << std::endl;
        for (int i = 0; i < tasks.size(); i++) {
            std::cout << i+1 << ". " << tasks[i] << std::endl;
        }
    }

private:
    std::vector<std::string> tasks;
};

int main() {
    // Create a to-do list object
    TodoList todo;

    while (true) {
        // Print the menu
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Add task" << std::endl;
        std::cout << "2. Remove task" << std::endl;
        std::cout << "3. Display tasks" << std::endl;
        std::cout << "4. Exit" << std::endl;

        // Get the user's choice
        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Handle the user's choice
        if (choice == 1) {
            std::string task;
            std::cout << "Enter the task: ";
            std::cin.ignore();
            std::getline(std::cin, task);
            todo.addTask(task);
        } else if (choice == 2) {
            std::string task;
            std::cout << "Enter the task: ";
            std::cin.ignore();
            std::getline(std::cin, task);
            todo.removeTask(task);
        } else if (choice == 3) {
            todo.displayTasks();
        } else if (choice == 4) {
            break;
        } else {
            std::cout << "Invalid choice" << std::endl;
        }
    }

    return 0;
}
