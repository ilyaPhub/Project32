#include <iostream>
#include <string>

using namespace std;

class Battery {
public:
    int capacity;  
    string type;

    Battery(int capacity, string type) : capacity(capacity), type(type) {}

    void display() {
        cout << "Battery - Capacity: " << capacity << "mAh, Type: " << type << endl;
    }
};

class Screen {
public:
    float size;  
    string resolution;

    Screen(float size, string resolution) : size(size), resolution(resolution) {}

    void display() {
        cout << "Screen - Size: " << size << " inches, Resolution: " << resolution << endl;
    }
};

class Processor {
public:
    string model;
    float speed;  

    Processor(string model, float speed) : model(model), speed(speed) {}

    void display() {
        cout << "Processor - Model: " << model << ", Speed: " << speed << " GHz" << endl;
    }
};

class RAM {
public:
    int size; 
    string type;

    RAM(int size, string type) : size(size), type(type) {}

    void display() {
        cout << "RAM - Size: " << size << "GB, Type: " << type << endl;
    }
};

class Storage {
public:
    int capacity;  
    string type;

    Storage(int capacity, string type) : capacity(capacity), type(type) {}

    void display() {
        cout << "Storage - Capacity: " << capacity << "GB, Type: " << type << endl;
    }
};

class GraphicsCard {
public:
    string model;
    int memory;  

    GraphicsCard(string model, int memory) : model(model), memory(memory) {}

    void display() {
        cout << "Graphics Card - Model: " << model << ", Memory: " << memory << "GB" << endl;
    }
};

class Keyboard {
public:
    string layout;
    bool isBacklit;

    Keyboard(string layout, bool isBacklit) : layout(layout), isBacklit(isBacklit) {}

    void display() {
        cout << "Keyboard - Layout: " << layout << ", Backlit: " << (isBacklit ? "Yes" : "No") << endl;
    }
};

class Laptop {
public:
    Battery battery;
    Screen screen;
    Processor processor;
    RAM ram;
    Storage storage;
    GraphicsCard graphicsCard;
    Keyboard keyboard;

    Laptop(Battery battery, Screen screen, Processor processor, RAM ram, Storage storage, GraphicsCard graphicsCard, Keyboard keyboard)
        : battery(battery), screen(screen), processor(processor), ram(ram), storage(storage), graphicsCard(graphicsCard), keyboard(keyboard) {}

    void displaySpecs() {
        cout << "Laptop Specifications:" << endl;
        battery.display();
        screen.display();
        processor.display();
        ram.display();
        storage.display();
        graphicsCard.display();
        keyboard.display();
    }
};

int main() {
    Battery battery(5000, "Li-ion");
    Screen screen(15.6, "1920x1080");
    Processor processor("Intel i7-1165G7", 2.8);
    RAM ram(16, "DDR4");
    Storage storage(512, "SSD");
    GraphicsCard graphicsCard("NVIDIA GTX 1650", 4);
    Keyboard keyboard("QWERTY", true);

    Laptop laptop(battery, screen, processor, ram, storage, graphicsCard, keyboard);

    laptop.displaySpecs();

    return 0;
}
