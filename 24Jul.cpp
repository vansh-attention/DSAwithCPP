#include <iostream>

struct Entity
{
    // Static members are declared inside the struct
    static int x, y; 

    void Print()
    {
        // Note: You'd typically access static members via the class name,
        // but you can also access them through an instance.
        std::cout << Entity::x << " , " << Entity::y << std::endl;
    }
};

// Static members are defined and initialized outside the struct
int Entity::x = 0;
int Entity::y = 0;

int main()
{
    // You can no longer initialize x and y this way
    // Entity e1 = {5, 8}; // This would cause a compile error

    // You would change the static variables directly
    Entity::x = 5;
    Entity::y = 8;

    Entity e1; // Just create an instance
    e1.Print(); // This will print the static values 5, 8
}
