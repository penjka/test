#include <iostream>
using namespace std;

int main()
{
    cout << "vvedite 4islo dejstvija kotoroe hotite sovershitj\n\n";
    cout << "1 -pljus 4isel\n";
    cout << "2 iz farenheita v celsium\n";

    int a;
    bool While = true;
    while (While) {
        cin >> a;
        switch (a)
        {
        case 1:
        {

            int a;
            int b;

            cout << "vvedite pervoe 4islo\n";
            cin >> a;
            cout << "vvedite vtoroe 4islo\n";
            cin >> b;

            int c = a + b;
            cout << "pljus etih 4isel = " << c << "\n";

            system("pause");
            return 0;
            break;
        }
        case 2:
        {

            double tempf;
            double tempc;

            // Ask the user
            std::cout << "Enter the temperature in Fahrenheit: ";
            std::cin >> tempf;

            tempc = (tempf - 32) / 1.8;

            std::cout << "The temp is " << tempc << " degrees Celsius.\n";
            return 0;
        }
            break;

        default:
            cout << "error\n";
            While = false;
            //если не правильно ввел
            break;
        }
    }
    return 0;
}