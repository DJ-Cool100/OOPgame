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

    class Location {
        public:
            // string to store location, might change later
            std::string room;
        
            void changeLocation(std::string x) {
                if (x == "bedroom" || x == "bathroom" || x == "kitchen") {
                    room = x;
                }
        }
    }; 
    Location location;
};



int main() {
   character sean;
   //test
    sean.location.changeLocation("bathroom");
    std::cout << sean.location.room << "\n";
}