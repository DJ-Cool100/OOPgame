#include <iostream>

class character {
    public:
        std::string name;
        int health;

        void setHealth(int x) {
            if (x > 10) {
                x = 0;
            }
            if (x < 0) {
                x = 0;
            }
            health = x;
    }
};

class location {
    
};

int main() {

    return 0;
}