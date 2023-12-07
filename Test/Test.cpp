#include <iostream>

using namespace std;

class Counter 
{
private:
    int min;
    int max;
    int count = 0;

public:
    Counter(int mn, int mx)
    {
        min = mn;
        max = mx;
    }

    void increment() 
    {
        count++;
        if (count > max)
        {
            count = min+1;
        }
    }

    int getCurrent() 
    {
        return count;
    }

    void run(int iterations) 
    {
        for (int i = 0; i < iterations; i++) 
        {
            increment();
        }
    }
};

class Elevator {
private:
    int currentFloor;
    int totalFloors;
public:
    Elevator(int floors) 
    {
        totalFloors = floors;
        currentFloor = 1; 
    }

    void moveToFloor(int floor) 
    {
        if (floor > 0 && floor <= totalFloors) 
        {
            cout << "Moving from floors " << currentFloor << " per floor " << floor << endl;
            currentFloor = floor;
        }
        else {
            cout << "Invalid floor" << endl;
        }
    }

    void getCurrentFloor() {
        cout << "Current floor: " << currentFloor << endl;
    }
};

int main()
{
    Counter counter(0,100);
    counter.run(50);
    cout << "Present value: " << counter.getCurrent() << endl;

    Elevator elevator(10);
    elevator.moveToFloor(3);
    elevator.getCurrentFloor();



}