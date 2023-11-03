#include <iostream>
using namespace std;
 
 
int main() {
    string typeOfPhone, typePhone, gamingOrNot, price, gb, phoneName, result;
    cout << " idi nah\n";
    cout << "For start I want know what you want to buy 'Landline phone' or 'Phone':";
    cin >> typeOfPhone;
    if (typeOfPhone == "Phone") {
        cout << "Okey you choosed Phone, Which kind of Phone you want?\nTouch-screen or Push-button:";
        cin >> typePhone;
        if (typePhone == "Touch-screen") {
            cout << "Now you want to buy 'Gaming' or 'Standart' phone:";
            cin >> gamingOrNot;
            if (gamingOrNot == "Gaming") {
                cout << "Phone must cost more than 10000 UAN? 'Yes or No':";
                cin >> price;
                cout << "How many gigabytes of memory should be in the phone? '32, 64, 128':";
                cin >> gb;
                if (price == "Yes" && gb == "32") {
                    cout << "Cool! For you we have a several options:\nSamsung Galaxy A32 32gb - 13000UAN\nApple iPhone 8 32gb - 12000UAN\nMake choice:";
                    cin >> phoneName;
                }
                else if (price == "Yes" && gb == "64") {
                    cout << "Cool! For you we have a several options:\nSamsung Galaxy A51 64gb - 18000UAN\nApple iPhone X 64gb - 15000UAN\nMake choice:";
                    cin >> phoneName;
                }
                else if (price == "Yes" && gb == "128") {
                    cout << "Cool! For you we have a several options:\nSamsung Galaxy A81 128gb - 21000UAN\nApple iPhone XR 128gb - 19000UAN\nMake choice:";
                    cin >> phoneName;
                }
                if (price == "No" && gb == "32") {
                    cout << "Cool! For you we have a several options:\nSamsung Galaxy A9 - 7300000UAN\nApple iPhone 7 32gb - 7000UAN\nMake choice:";
                    cin >> phoneName;
                }
 
                else if (price == "No" && gb == "64") {
                    cout << "Cool! For you we have a several options:\nSamsung Galaxy A10 64gb- 8000\nApple iPhone 7 64gb - 8000UAN\nMake choice:";
                    cin >> phoneName;
                }
                else if (price == "No" && gb == "128") {
                    cout << "Cool! For you we have a several options:\nSamsung Galaxy A11 128gb- 9999UAN\nApple iPhone 7 128gb - 9000UAN\nMake choice:";
                    cin >> phoneName;
                }
            }
            else {
                cout << "Phone must cost more than 10000 UAN? 'Yes or No':";
                cin >> price;
                cout << "How many gigabytes of memory should be in the phone? '32, 64, 128':";
                cin >> gb;
                if (price == "Yes" && gb == "32") {
                    cout << "Cool! For you we have a several options:\nXiaomi Redmi Note 10S 32gb- 13000UAN\nApple iPhone 8 32gb - 12000UAN\nMake choice :";
                    cin >> phoneName;
 
                }
                else if (price == "Yes" && gb == "64") {
                    cout << "Cool! For you we have a several options:\nXiaomi Redmi Note 10S 64gb- 18000UAN\nApple iPhone X 64gb - 15000UAN\nMake choice :";
                    cin >> phoneName;
                }
                else if (price == "Yes" && gb == "128") {
                    cout << "Cool! For you we have a several options:\nXiaomi Redmi Note 10S 128gb- 21000UAN\nApple iPhone XR 128gb - 19000UAN\nMake choice :";
                    cin >> phoneName;
                }
                else if (price == "No" && gb == "32") {
                    cout << "Cool! For you we have a several options:\nXiaomi Redmi Note 10S - 13000UAN\nApple iPhone 8 32gb - 12000UAN\nMake choice :";
                    cin >> phoneName;
                }
                else if (price == "No" && gb == "64") {
                    cout << "Cool! For you we have a several options:\nXiaomi Redmi Note 10S 64gb- 8000\nApple iPhone X 64gb - 9000UAN\nMake choice :";
                    cin >> phoneName;
                }
                else if (price == "No" && gb == "128") {
                    cout << "Cool! For you we have a several options:\nXiaomi Redmi Note 10S 128gb- 9999UAN\nApple iPhone 7 128gb - 9000UAN\nMake choice :";
                    cin >> phoneName;
                }
            }
        }
        else {
            cout << "Phone must cost more than 3000 UAN? 'Yes or No':";
            cin >> price;
            if (price == "Yes") {
                cout << "Cool! For you we have a several options:\nERGO B181 Black -  3800UAN\nNokia 105 TA-1203 Single - 4000UAN\nMake choice:";
                cin >> phoneName;
            }
            else {
                cout << "Cool! For you we have a several options:\nAstro A243 Black -  1300UAN\nAstro A169 Black - 2000UAN\nMake choice:";
                cin >> phoneName;
            }
        }
    }
    else {
        cout << "Landline Phone must cost more than 5000 UAN? 'Yes or No':\n";
        cin >> price;
        if (price == "Yes") {
            cout << "Cool! For you we have a several options:\nGrandstream GXP1630 -  6200UAN\n";
            phoneName = "Grandstream GXP1630";
        }
        else {
            cout << "Cool! For you we have a several options:\nGrandstream GXP2140 -  2300UAN\n";
            phoneName = "Grandstream GXP2140";
        }
    }
    cout << "Good job!\n" << phoneName << " will be the best phone for you!";
    cout << "Good job!\n" << phoneName << " will be the best phone for you!";

}