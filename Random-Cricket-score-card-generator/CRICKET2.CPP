#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
class cricket
{
public:
    int o, i, j, k, l, r, r1, r2, x, y;
    string st;
    cricket()
    {
        r1 = 0;
        r2 = 0;
        k = 0;
        l = 0;
        x = 0;
        y = 0;
    }
    void accept(string &k)
    {
        st = k;
        do
        {
            cout << "Enter the number of overs you want to play '5','10','15','20'\n";
            cin >> o;
            if (o == 5 || o == 10 || o == 15 || o == 20)
                break;
            else
                cout << "Wrong number of overs inputed try again\n\nPress any key to continue\n";
            getchar();
            getchar();
            system("clear");
        } while (true);
        cout << "You have selected " << o << " no of overs Press any key to continue\n";

        getchar();
        getchar();
        system("clear");
    }
    void bat()
    {
        for (i = 1; i <= o; i++)
        {
            system("clear");
            cout << "India is batting\n";
            cout << i << " over starts\n";
            cout << "Press Enter key to continue the game\n";
            getchar();
            for (j = 1; j <= 6; j++)
            {
                srand(time(0));
                r = rand() % 8;
                if (r == 5 || r == 7)
                    k = k + 1;
                else
                    r1 = r1 + r;
                cout << "India current score" << "||wickets down " << endl;
                cout << r1 << "|" << k << endl;
                cout << "Press Enter key to continue the game\n";
                getchar();
                system("clear");
                if (k == 10)
                    break;
            }
            if (k == 10)
                break;
        }
        system("clear");
        cout << "India scored\n"
             << r1 << "|" << k << endl;
        getchar();
        getchar();
        system("clear");
    }
    void bat2()
    {
        for (i = 1; i <= o; i++)
        {
            system("clear");
            cout << "India is batting\n";
            cout << i << " over starts\n";
            cout << "Press Enter key to continue the game\n";
            getchar();
            for (j = 1; j <= 6; j++)
            {
                srand(time(0));
                r = rand() % 8;
                if (r == 5 || r == 7)
                    k = k + 1;
                else
                    r1 = r1 + r;
                cout << "India current score" << "||wickets down " << endl;
                cout << r1 << "|" << k << endl;
                cout << "Press Enter key to continue the game\n";
                getchar();
                system("clear");
                if (k == 10)
                    break;
                if (r1 > r2)
                    break;
            }
            if (k == 10)
                break;
            if (r1 > r2)
                break;
        }
    }
    void bowl()
    {
        for (i = 1; i <= o; i++)
        {
            system("clear");
            cout << "Pakistan is batting\n";
            cout << i << " over starts\n";
            cout << "Press Enter key to continue the game\n";
            getchar();
            for (j = 1; j <= 6; j++)
            {
                srand(time(0));
                r = rand() % 8;
                if (r == 5 || r == 7)
                    l = l + 1;
                else
                    r2 = r2 + r;
                cout << "Pakistan current score" << "||wickets down " << endl;
                cout << r2 << "|" << l << endl;
                cout << "Press Enter key to continue the game\n";
                getchar();
                system("clear");
                if (l == 10)
                    break;
            }
            if (l == 10)
                break;
        }
        system("clear");
        cout << "pakistan scored\n"
             << r2 << "|" << l << endl;

        getchar();
        getchar();
        system("clear");
    }
    void bowl2()
    {
        for (i = 1; i <= o; i++)
        {
            system("clear");
            cout << "Pakistan is batting\n";
            cout << i << " over starts\n";
            cout << "Press Enter key to continue the game\n";
            getchar();
            for (j = 1; j <= 6; j++)
            {
                srand(time(0));
                r = rand() % 8;
                if (r == 5 || r == 7)
                    l = l + 1;
                else
                    r2 = r2 + r;
                cout << "Pakistan current score" << "||wickets down " << endl;
                cout << r2 << "|" << l << endl;
                cout << "Press Enter key to continue the game\n";
                getchar();
                system("clear");
                if (l == 10)
                    break;
                if (r2 > r1)
                    break;
            }
            if (l == 10)
                break;
            if (r2 > r1)
                break;
        }
    }
    void display()
    {
        system("clear");
        cout << "India score was " << r1 << "|" << k << endl;
        cout << "Pakistan score was " << r2 << "|" << l << endl
             << endl;
        if (r1 > r2)
        {
            cout << "India won by " << r1 - r2 << " run\n";
            x = x + 1;
        }
        else if (r2 > r1)
        {
            cout << "Pakistan won by " << 10 - l << " wickets\n";
            y = y + 1;
        }
        else
        {
            cout << "The match was drawn btw pakistan and india\n";
            x = x + 1;
            y = y + 1;
        }
        getchar();
    }
    void display1()
    {
        system("clear");
        cout << "India score was " << r1 << "|" << k << endl;
        cout << "Pakistan score was " << r2 << "|" << l << endl
             << endl;
        if (r2 > r1)
        {
            cout << "Pakistan won by " << r2 - r1 << " run\n";
            y = y + 1;
        }
        else if (r1 > r2)
        {
            cout << "India won by " << 10 - k << " wickets\n";
            x = x + 1;
        }
        else
        {
            cout << "The match was drawn btw pakistan and india\n";
            x = x + 1;
            y = y + 1;
        }
        getchar();
    }
    void display2()
    {
        fstream fh;
        fh.open("cricket.txt", ios::out | ios::app);
        string s = "UserName: " + st;
        fh << endl;
        fh << s;
        fh << endl;
        fh << "Result was:";
        fh << endl;
        if (x > y)
        {
            fh << "INDIA WON THE SERIES\n ";
            fh << "BY " << x << ":" << y << endl;
            cout << "INDIA WON THE SERIES\n"
                 << "BY " << x << ":" << y << endl;
        }
        else if (y > x)
        {
            fh << "PAKISTAN WON THE SERIES\n ";
            fh << "BY " << y << ":" << x << endl;
            cout << "PAKISTAN WON THE SERIES\n"
                 << " BY " << y << ":" << x << endl;
        }
        else
        {
            fh << "The series was drawn btw PAKISTAN and INDIA\n";
            fh << "BY " << x << ":" << y << endl;
            cout << "The series was drawn btw PAKISTAN and INDIA\n"
                 << " BY " << x << ":" << y << endl;
        }
        fh.close();
        getchar();
    }
    void remove()
    {
        r1 = 0;
        r2 = 0;
        r = 0;
        l = 0;
        k = 0;
    }
};
int main()
{
    system("clear");
    fstream fb;
    int t, c, p, A, B = 0;
    string nm;
    cricket g;
    cout << "Enter your name\n";
    getline(cin >> ws, nm);
    system("clear");
    cout << '\t' << '\t' << '\t' << "  Hello " << nm << "\n\n";
    cout << ">>>>>>>>>>>>>>>>> WELCOME TO RANDOM CRICKET SCORE SHEET <<<<<<<<<<<<<<<<<<\n\n";
    getchar();
    system("clear");
    cout << "THERE IS A SERIES BETWEEN TWO RIVALS INDIA and PAKISTAN\n\n";
    getchar();
    cout << "So lets begin\n";
    getchar();
    system("clear");
    do
    {
        cout << "Enter the number of matches you want to play in the series\n";
        cin >> A;
        if (A >= 0 && A <= 10)
            break;
        else
        {
            cout << "Cannot have matches less than 0 and more than 10\nPlease try again after pressing Enter\n";

            getchar();
            getchar();
            system("clear");
        }
    } while (true);
    system("clear");
    g.accept(nm);
    while (B < A)
    {
        cout << B + 1 << " Match start\n\n";
        cout << "Tossing the coin\n";
        do
        {
            cout << "Enter '1' for head and '2' for tail\n";
            cin >> t;
            if (t == 1 || t == 2)
                break;
            else
            {
                cout << "Wrong Input! Please entered 1 or 2 \nPress enter to continue\n";

                getchar();
                getchar();
                system("clear");
            }
        } while (true);
        srand(time(0));
        p = (rand() % 2) + 1;
        system("clear");
        if (t == p)
        {
            cout << "You won the toss\n";
            do
            {
                cout << "Enter 1 to bat first and 2 for bowl\n";
                cin >> c;
                if (c == 1 || c == 2)
                    break;
                else
                {
                    cout << "Wrong Input! Please entered 1 or 2 \nPress enter to continue\n";

                    getchar();
                    getchar();
                    system("clear");
                }
            } while (true);
        }
        else
        {
            cout << "You loss the toss\n";
            srand(time(0));
            c = (rand() % 2) + 1;
            if (c == 1)
                cout << "pakistan decide to bowl first\n";
            else
                cout << "pakistan decide to bat first\n";

            getchar();
            getchar();
        }
        switch (c)
        {
        case 1:
            g.bat();
            break;
        case 2:
            g.bowl();
            break;
        default:
            cout << " You have enter Wrong Choice\n";
            getchar();
            system("clear");
            continue;
        }
        if (c == 1)
        {
            g.bowl2();
            g.display();
            g.remove();
            getchar();
            system("clear");
        }
        else if (c == 2)
        {
            g.bat2();
            g.display1();
            g.remove();
            getchar();
            system("clear");
        }
        B = B + 1;
    }
    g.display2();
    return 0;
}
