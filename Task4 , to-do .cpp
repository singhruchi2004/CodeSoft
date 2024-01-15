#include <iostream>
#include <vector>
using namespace std;

class TodoList {
private:
vector<string> tasks;

public:
    void addTask(const string& task) {
        tasks.push_back(task);
        cout << "Task \"" << task << "\" added.\n";
    }

    void viewTasks() {
        if (!tasks.empty()) {
            cout << "\nTasks:\n";
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i] << "\n";
            }
        } else {
            cout << "No tasks available.\n";
        }
    }

    void deleteTask(int taskIndex) {
        if (taskIndex >= 1 && taskIndex <= static_cast<int>(tasks.size())) {
            string deletedTask = tasks[taskIndex - 1];
            tasks.erase(tasks.begin() + taskIndex - 1);
            cout << "Task \"" << deletedTask << "\" deleted.\n";
        } else {
            cout << "Invalid task index.\n";
        }
    }
};

int main() {
    TodoList todoList;

    while (true) {
        cout << "\nOptions:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string task;
                cout << "Enter the task: ";
				    cin.ignore();  // Clear buffer
getline(std::cin, task);
                todoList.addTask(task);
                break;
            }
            case 2:
                todoList.viewTasks();
                break;
            case 3: {
                int taskIndex;
                cout << "Enter the task index to delete: ";
                cin >> taskIndex;
                todoList.deleteTask(taskIndex);
                break;
            }
            case 4:
    cout << "Exiting the to-do list manager. Goodbye!\n";
   return 0;
    default:
	cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}
