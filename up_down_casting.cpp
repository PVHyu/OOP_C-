// Up casting in C++
// Khi biến con trỏ của lớp cha trỏ tới đối tượng của lớp con thì đó được gọi là up-casting

// #include <iostream>
// using namespace std;

// class Animal {
// public:
// 	void sound() {
// 		cout << "some sound" << endl;
// 	}
// };

// class Cat : public Animal {
// public:
// 	void sound() {
// 		cout << "meow meow" << endl;
// 	}
// };

// class Dog : public Animal {
// public:
// 	void sound() {
// 		cout << "woof woof" << endl;
// 	}
// };

// int main() {
// 	Cat cat;
// 	Animal* animal1 = &cat;
// 	animal1->sound();

// 	Dog dog;
// 	Animal* animal2 = &dog;
// 	animal2->sound();
// 	return 0;
// }


// Down casting in C++
// Down-casting ngược với up-casting, up-casting là chuyển từ lớp con sang con trỏ lớp cha thì down-casting là chuyển từ lớp cha sang con trỏ lớp con.

#include <iostream>
using namespace std;

class Animal {
public:
	void sound() {
		cout << "some sound" << endl;
	}
};

class Dog : public Animal {
public:
	void sound() {
		cout << "woof woof" << endl;
	}
	void play() {
		cout << "The dog is playing" << endl;
	}
};

int main() {
	Animal animal;
	Dog* d = (Dog*)&animal;

	d->sound();
	d->play();

	return 0;
}

