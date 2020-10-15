#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
    Rectangle rect, rect2;
    rect.set_width(3);
    rect.set_height(4);

	rect2.set_width(4);
	rect2.set_height(2);


    cout << "Rectangle area: " << rect.area() << endl;
	cout << "Rectangle area: " << rect2.area() << endl;

    return 0;
}
