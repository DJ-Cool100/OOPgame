#include <iostream>
#include <vector>
#include <string>


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
            // added x and y coordinates for easy map making if i figure out how to use a gui eventually...
            // felt cute might delete later...                                             lol (;
            int xCoord;
            int yCoord;
        
            void changeLocation(std::string x) {
                if (x == "bedroom" || x == "bathroom" || x == "kitchen") {
                    room = x;
                }
        }
    }; 

    class Inventory {
            std::string currentItem;
    
        public:
            void setItem(const std::string& item) {
                currentItem = item;
            }

        void clearItem() {
            currentItem.clear();
        }
        
        void checkItem() {
            if (currentItem.empty()) {
                std::cout << "you are not holding anything\n";
            } else {
                std::cout << "you are holding: " << currentItem << "\n";
            }
            
        }
    };
    //! initialize all classes locally to character class so each character can have its own location, inventory etc
    Inventory inventory;
    Location location;
};



    int main() {
}