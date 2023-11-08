#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{
    int pkt = 0;
    string odpowiedz;

    Sleep(3000);
    system("cls");

    cout << "witaj w tescie ogolnym" << endl;
    cout << "Data terrorystycznego ataku na WTC to:" << endl;
    cout << "a) 11 sierpnia 2001 r." << endl;
    cout << "b) 11 września 2001 r." << endl;
    cout << "c) 11 października 2001 r." << endl;
    cin >> odpowiedz;
    if (odpowiedz == "b")
    {
        cout << "Brawo! odpowiedziales poprawnie" << endl;
        pkt++;
        Sleep(3000);
        system("cls");
    }
    else
    {
        cout << "Zle! poprawna odpowiedź to b" << endl;
        Sleep(3000);
        system("cls");
    }
    cout << "Panczenisci do uprawiania swojego sportu potrzebuja:" << endl;
    cout << "a karabinku." << endl;
    cout << "b) lyzew." << endl;
    cout << "c) nart." << endl;
    cin >> odpowiedz;
    if (odpowiedz == "b")
    {
        cout << "Brawo! odpowiedziales poprawnie" << endl;
        pkt++;
        Sleep(3000);
        system("cls");
    }
    else
    {
        cout << "Zle! poprawna odpowiedź to b" << endl;
        Sleep(3000);
        system("cls");
    }
    cout << "Michael Jordan zdobyl tytuly mistrza NBA z druzyna:" << endl;
    cout << "a Chicago Bulls." << endl;
    cout << "b) Houston Rockets." << endl;
    cout << "c) Boston Celtics." << endl;
    cin >> odpowiedz;
    if (odpowiedz == "a")
    {
        cout << "Brawo! odpowiedziales poprawnie" << endl;
        pkt++;
        Sleep(3000);
        system("cls");
    }
    else
    {
        cout << "Zle! poprawna odpowiedź to a" << endl;
        Sleep(3000);
        system("cls");
    }
    cout << "Jak nazywal sie brat Boleslawa Krzywoustego?" << endl;
    cout << "a) Mieszko." << endl;
    cout << "b) Jaroslaw." << endl;
    cout << "c) Zbigniew." << endl;
    cin >> odpowiedz;
    if (odpowiedz == "c")
    {
        cout << "Brawo! odpowiedziales poprawnie" << endl;
        pkt++;
        Sleep(3000);
        system("cls");
    }
    else
    {
        cout << "Zle! poprawna odpowiedź to c" << endl;
        Sleep(3000);
        system("cls");
    }
    cout << "Anita Wlodarczyk zdobyla dwa złote medale olimpijskie w:" << endl;
    cout << "a) rzucie mlotem" << endl;
    cout << "b) pchnieciu kula" << endl;
    cout << "c) skoku w dal" << endl;
    cin >> odpowiedz;
    if (odpowiedz == "a")
    {
        cout << "Brawo! odpowiedziales poprawnie" << endl;
        pkt++;
        Sleep(3000);
        system("cls");
    }
    else
    {
        cout << "Zle! poprawna odpowiedź to a" << endl;
        Sleep(3000);
        system("cls");
    }
    cout << "ilosc zdobytych punktow: " << pkt << endl;

   





    return 0;
}

