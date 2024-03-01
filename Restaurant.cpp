#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    cout << "        Welcome to KC Restaurant!"
        " \n\t+============================+"
        "\n Please select the meal you would like to purchase!"
        "\n\t[A]  Breakfast"
        "\n\t[B]  Lunch"
        "\n\t[C]  Dinner"
        "\n\t[D]  Exit" << endl;

    string c_1;
    cout << "Enter your choice here: ";
    getline(cin, c_1);

    if (c_1 == "A" || c_1 == "a") {
        cout << " Please select the food that you would like to purchase. "
            "\n\t[A]  EggSilog - PHP 18.00"
            "\n\t[B]  Pandesal and Hot Coffee – PHP 25.00"
            "\n\t[C]  Champorado – PHP 22.00" << endl;
            "\n\t[C]  Champorado – PHP 22.00" << endl;
            "\n\t[C]  Champorado – PHP 22.00" << endl;

        string sub_c_1;
        cout << "Enter your choice here: ";
        getline(cin, sub_c_1);

        if (sub_c_1 == "A" || sub_c_1 == "a") {
            int sub_c_1_quant;
            cout << "Enter quantity: ";
            cin >> sub_c_1_quant;
            cin.ignore();

            int a = sub_c_1_quant * 18;

            string other;
            cout << "Do you need something else? Y/N ";
            getline(cin, other);

            if (other == "Y" || other == "y" || other == "YES" || other == "yes") {
                cout << " Please select the food that you would like to purchase. "
                    "\n\t[A]  Pandesal and Hot Coffee – PHP 25.00"
                    "\n\t[B]  Champorado – PHP 22.00" << endl;

                string sub_c_1_1;
                cout << "Enter your choice here: ";
                getline(cin, sub_c_1_1);

                if (sub_c_1_1 == "A" || sub_c_1_1 == "a") {
                    int sub_c_1_1quant;
                    cout << "Enter quantity: ";
                    cin >> sub_c_1_1quant;
                    cin.ignore();

                    int b = sub_c_1_1quant * 25;

                    string other;
                    cout << "Do you need something else? Y/N ";
                    getline(cin, other);

                    if (other == "Y" || other == "y" || other == "YES" || other == "yes") {
                        cout << " Please select the food that you would like to purchase. "
                            "\n\t[A]  Champorado – PHP 22.00" << endl;

                        string sub_c_1_2;
                        cout << "Enter your choice here: ";
                        getline(cin, sub_c_1_2);

                        if (sub_c_1_2 == "A" || sub_c_1_2 == "a") {
                            int sub_c_1_2quant;
                            cout << "Enter quantity: ";
                            cin >> sub_c_1_2quant;
                            cin.ignore();

                            int c = sub_c_1_2quant * 22;

                            string card_num;
                            cout << "Please Enter your Card Number: ";
                            getline(cin, card_num);

                            ifstream card_list("Credit Card List.txt");
                            string line;
                            bool valid_card = false;

                            while (getline(card_list, line)) {
                                if (line == card_num) {
                                    valid_card = true;
                                    break;
                                }
                            }

                            card_list.close();

                            if (valid_card) {
                                cout << "\033[1;32;40m" << "Okay!" << "\033[0m" << endl;

                                ofstream receipt("Receipt.txt");
                                receipt << "\t\tBreakfast\n" << sub_c_1_quant
                                    << "\tEggSilog..............." << a << "\n" << sub_c_1_1quant
                                    << "\tPandesal and Hot Coffee..............." << b << "\n"
                                    << sub_c_1_2quant
                                    << "\tChamporado..............." << c << "\n"
                                    "\n\nYour total is: " << a + b + c << endl;
                            }
                            else {
                                cout << "\033[1;31;40m Error! Card Invalid!!" << "\033[0m" << endl;
                            }
                        }
                        else {
                            cout << "Invalid option!" << endl;
                        }
                    }
                    else {
                        string card_num;
                        cout << "Please Enter your Card Number: ";
                        getline(cin, card_num);

                        ifstream card_list("Credit Card List.txt");
                        string line;
                        bool valid_card = false;

                        while (getline(card_list, line)) {
                            if (line == card_num) {
                                valid_card = true;
                                break;
                            }
                        }

                        card_list.close();

                        if (valid_card) {
                            cout << "\033[1;32;40m" << "Okay!" << "\033[0m" << endl;

                            ofstream receipt("Receipt.txt");
                            receipt << "\t\tBreakfast\n" << sub_c_1_quant
                                << "\tEggSilog..............." << a << "\n" << sub_c_1_1quant
                                << "\tPandesal and Hot Coffee..............." << b << "\n"
                                "\n\nYour total is: " << a + b << endl;
                        }
                        else {
                            cout << "\033[1;31;40m Error! Card Invalid!!" << "\033[0m" << endl;
                        }
                    }
                }
                else {
                    cout << "Invalid option!" << endl;
                }
            }
            else if (other == "N" || other == "n" || other == "NO" || other == "no") {
                string card_num;
                cout << "Please Enter your Card Number: ";
                getline(cin, card_num);

                ifstream card_list("Credit Card List.txt");
                string line;
                bool valid_card = false;

                while (getline(card_list, line)) {
                    if (line == card_num) {
                        valid_card = true;
                        break;
                    }
                }

                card_list.close();

                if (valid_card) {
                    cout << "\033[1;32;40m" << "Okay!" << "\033[0m" << endl;

                    ofstream receipt("Receipt.txt");
                    receipt << "\t\tBreakfast\n" << sub_c_1_quant
                        << "\tEggSilog..............." << a << "\n"
                        "\n\nYour total is: " << a << endl;
                }
                else {
                    cout << "\033[1;31;40m Error! Card Invalid!!" << "\033[0m" << endl;
                }
            }
            else {
                cout << other << " is not a valid option!" << endl;
            }
        }
        else if (sub_c_1 == "B" || sub_c_1 == "b") {
            int sub_c_1_quant;
            cout << "Enter quantity: ";
            cin >> sub_c_1_quant;
            cin.ignore();

            int b = sub_c_1_quant * 25;

            string card_num;
            cout << "Please Enter your Card Number: ";
            getline(cin, card_num);

            ifstream card_list("Credit Card List.txt");
            string line;
            bool valid_card = false;

            while (getline(card_list, line)) {
                if (line == card_num) {
                    valid_card = true;
                    break;
                }
            }

            card_list.close();

            if (valid_card) {
                cout << "\033[1;32;40m" << "Okay!" << "\033[0m" << endl;

                ofstream receipt("Receipt.txt");
                receipt << "\t\tLunch\n" << sub_c_1_quant
                    << "\tPandesal and Hot Coffee..............." << b << "\n"
                    "\n\nYour total is: " << b << endl;
            }
            else {
                cout << "\033[1;31;40m Error! Card Invalid!!" << "\033[0m" << endl;
            }
        }
        else if (sub_c_1 == "C" || sub_c_1 == "c") {
            int sub_c_1_quant;
            cout << "Enter quantity: ";
            cin >> sub_c_1_quant;
            cin.ignore();

            int c = sub_c_1_quant * 22;

            string card_num;
            cout << "Please Enter your Card Number: ";
            getline(cin, card_num);

            ifstream card_list("Credit Card List.txt");
            string line;
            bool valid_card = false;

            while (getline(card_list, line)) {
                if (line == card_num) {
                    valid_card = true;
                    break;
                }
            }

            card_list.close();

            if (valid_card) {
                cout << "\033[1;32;40m" << "Okay!" << "\033[0m" << endl;

                ofstream receipt("Receipt.txt");
                receipt << "\t\tLunch\n" << sub_c_1_quant
                    << "\tChamporado..............." << c << "\n"
                    "\n\nYour total is: " << c << endl;
            }
            else {
                cout << "\033[1;31;40m Error! Card Invalid!!" << "\033[0m" << endl;
            }
        }
        else {
            cout << "Invalid option!" << endl;
        }
    }
    else if (c_1 == "B" || c_1 == "b") {
        cout << " Please select the food that you would like to purchase. "
            "\n\t[A] Fried Rice with Corned Beef - PHP 34.00"
            "\n\t[B] Plain Rice with Sisig Combo - PHP 45.00"
            "\n\t[C] Chicken Adobo with ( Plain Rice ) - PHP 48.00" << endl;

        string sub_c_1;
        cout << "Enter your choice here: ";
        getline(cin, sub_c_1);

        if (sub_c_1 == "A" || sub_c_1 == "a") {
            int sub_c_1_quant;
            cout << "Enter quantity: ";
            cin >> sub_c_1_quant;
            cin.ignore();

            int a = sub_c_1_quant * 34;

            string card_num;
            cout << "Please Enter your Card Number: ";
            getline(cin, card_num);

            ifstream card_list("Credit Card List.txt");
            string line;
            bool valid_card = false;

            while (getline(card_list, line)) {
                if (line == card_num) {
                    valid_card = true;
                    break;
                }
            }

            card_list.close();

            if (valid_card) {
                cout << "\033[1;32;40m" << "Okay!" << "\033[0m" << endl;

                ofstream receipt("Receipt.txt");
                receipt << "\t\tLunch\n" << sub_c_1_quant
                    << "\tFried Rice with Corned Beef..............." << a << "\n"
                    "\n\nYour total is: " << a << endl;
            }
            else {
                cout << "\033[1;31;40m Error! Card Invalid!!" << "\033[0m" << endl;
            }
        }
        else if (sub_c_1 == "B" || sub_c_1 == "b") {
            int sub_c_1_quant;
            cout << "Enter quantity: ";
            cin >> sub_c_1_quant;
            cin.ignore();

            int b = sub_c_1_quant * 45;

            string card_num;
            cout << "Please Enter your Card Number: ";
            getline(cin, card_num);

            ifstream card_list("Credit Card List.txt");
            string line;
            bool valid_card = false;

            while (getline(card_list, line)) {
                if (line == card_num) {
                    valid_card = true;
                    break;
                }
            }

            card_list.close();

            if (valid_card) {
                cout << "\033[1;32;40m" << "Okay!" << "\033[0m" << endl;

                ofstream receipt("Receipt.txt");
                receipt << "\t\tLunch\n" << sub_c_1_quant
                    << "\tPlain Rice with Sisig Combo..............." << b << "\n"
                    "\n\nYour total is: " << b << endl;
            }
            else {
                cout << "\033[1;31;40m Error! Card Invalid!!" << "\033[0m"  << endl;
            }
        }
        else if (sub_c_1 == "C" || sub_c_1 == "c") {
            int sub_c_1_quant;
            cout << "Enter quantity: ";
            cin >> sub_c_1_quant;
            cin.ignore();

            int c = sub_c_1_quant * 48;

            string card_num;
            cout << "Please Enter your Card Number: ";
            getline(cin, card_num);

            ifstream card_list("Credit Card List.txt");
            string line;
            bool valid_card = false;

            while (getline(card_list, line)) {
                if (line == card_num) {
                    valid_card = true;
                    break;
                }
            }

            card_list.close();

            if (valid_card) {
                cout << "\033[1;32;40m" << "Okay!" << "\033[0m" << endl;

                ofstream receipt("Receipt.txt");
                receipt << "\t\tLunch\n" << sub_c_1_quant
                    << "\tChicken Adobo with ( Plain Rice )..............." << c << "\n"
                    "\n\nYour total is: " << c << endl;
            }
            else {
                cout << "\033[1;31;40m Error! Card Invalid!!" << "\033[0m" << endl;
            }
        }
        else {
            cout << "Invalid option!" << endl;
        }
    }
    else if (c_1 == "C" || c_1 == "c") {
        cout << " Please select the food that you would like to purchase. "
            "\n\t[A] Chicken Legs BBQ - PHP 19.00"
            "\n\t[B] Spaghetti - PHP 21.00"
            "\n\t[C] Bulalo Soup Bone - PHP 33.00" << endl;

        string sub_c_1;
        cout << "Enter your choice here: ";
        getline(cin, sub_c_1);

        if (sub_c_1 == "A" || sub_c_1 == "a") {
            int sub_c_1_quant;
            cout << "Enter quantity: ";
            cin >> sub_c_1_quant;
            cin.ignore();

            int a = sub_c_1_quant * 19;

            string card_num;
            cout << "Please Enter your Card Number: ";
            getline(cin, card_num);

            ifstream card_list("Credit Card List.txt");
            string line;
            bool valid_card = false;

            while (getline(card_list, line)) {
                if (line == card_num) {
                    valid_card = true;
                    break;
                }
            }

            card_list.close();

            if (valid_card) {
                cout << "\033[1;32;40m" << "Okay!" << "\033[0m" << endl;

                ofstream receipt("Receipt.txt");
                receipt << "\t\tDinner\n" << sub_c_1_quant
                    << "\tChicken Legs BBQ..............." << a << "\n"
                    "\n\nYour total is: " << a << endl;
            }
            else {
                cout << "\033[1;31;40m Error! Card Invalid!!" << "\033[0m" << endl;
            }
        }
        else if (sub_c_1 == "B" || sub_c_1 == "b") {
            int sub_c_1_quant;
            cout << "Enter quantity: ";
            cin >> sub_c_1_quant;
            cin.ignore();

            int b = sub_c_1_quant * 21;

            string card_num;
            cout << "Please Enter your Card Number: ";
            getline(cin, card_num);

            ifstream card_list("Credit Card List.txt");
            string line;
            bool valid_card = false;

            while (getline(card_list, line)) {
                if (line == card_num) {
                    valid_card = true;
                    break;
                }
            }

            card_list.close();

            if (valid_card) {
                cout << "\033[1;32;40m" << "Okay!" << "\033[0m" << endl;

                ofstream receipt("Receipt.txt");
                receipt << "\t\tDinner\n" << sub_c_1_quant
                    << "\tSpaghetti..............." << b << "\n"
                    "\n\nYour total is: " << b << endl;
            }
            else {
                cout << "\033[1;31;40m Error! Card Invalid!!" << "\033[0m" << endl;
            }
        }
        else if (sub_c_1 == "C" || sub_c_1 == "c") {
            int sub_c_1_quant;
            cout << "Enter quantity: ";
            cin >> sub_c_1_quant;
            cin.ignore();

            int c = sub_c_1_quant * 33;

            string card_num;
            cout << "Please Enter your Card Number: ";
            getline(cin, card_num);

            ifstream card_list("Credit Card List.txt");
            string line;
            bool valid_card = false;

            while (getline(card_list, line)) {
                if (line == card_num) {
                    valid_card = true;
                    break;
                }
            }

            card_list.close();

            if (valid_card) {
                cout << "\033[1;32;40m" << "Okay!" << "\033[0m" << endl;

                ofstream receipt("Receipt.txt");
                receipt << "\t\tDinner\n" << sub_c_1_quant
                    << "\tBulalo Soup Bone..............." << c << "\n"
                    "\n\nYour total is: " << c << endl;
            }
            else {
                cout << "\033[1;31;40m Error! Card Invalid!!" << "\033[0m" << endl;
            }
        }
        else {
            cout << "Invalid option!" << endl;
        }
    }
    else if (c_1 == "D" || c_1 == "d") {
        cout << "Exiting the application..." << endl;
        return 0;
    }
    else {
        cout << "Invalid option!" << endl;
    }

    return 0;
}
