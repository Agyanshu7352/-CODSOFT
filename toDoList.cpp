#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Task {
    string description;
    bool completed;

    Task(string desc) : description(desc), completed(false) {}
};


void addTask(vector<Task> &tasks) {
    cout << "Enter the task description: ";
    string description;
    cin.ignore();
    getline(cin, description);
    tasks.push_back(Task(description));
    cout << "Task added!" << endl;
}


void viewTasks(const vector<Task> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks available." << endl;
        return;
    }
    cout << "To-Do List:" << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i].description 
             << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]" << endl;
    }
}


void markTaskCompleted(vector<Task> &tasks) {
    viewTasks(tasks);
    if (tasks.empty()) return;

    cout << "Enter the task number to mark as completed: ";
    int taskNumber;
    cin >> taskNumber;
    if (taskNumber < 1 || taskNumber > tasks.size()) {
        cout << "Invalid task number!" << endl;
        return;
    }
    tasks[taskNumber - 1].completed = true;
    cout << "Task marked as completed!" << endl;
}


void removeTask(vector<Task> &tasks) {
    viewTasks(tasks);
    if (tasks.empty()) return;

    cout << "Enter the task number to remove: ";
    int taskNumber;
    cin >> taskNumber;
    if (taskNumber < 1 || taskNumber > tasks.size()) {
        cout << "Invalid task number!" << endl;
        return;
    }
    tasks.erase(tasks.begin() + taskNumber - 1);
    cout << "Task removed!" << endl;
}

int main() {
    vector<Task> tasks;
    int choice;

    do {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                markTaskCompleted(tasks);
                break;
            case 4:
                removeTask(tasks);
                break;
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

