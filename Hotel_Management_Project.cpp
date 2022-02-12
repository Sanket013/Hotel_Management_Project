/*Hotel management Project C++ sanket_013
  Options are available are 1)Room,2)Dishes: Pizza, Pasta,etc..3)Total collection of Days
*/
#include <iostream>
using namespace std;

int main()
{
    int Quant = 0, Choice = 0;
    // Quantity set
    int Qroom = 0, Qpizza = 0, Qburger = 0, Qpasta = 0, Qnoodles = 0, Qshake = 0;
    // Sell quantity
    int Sroom = 0, Spizza = 0, Sburger = 0, Spasta = 0, Snoodles = 0, Sshake = 0;
    // Total of sells
    int Total_room = 0, Total_pizza = 0, Total_burger = 0, Total_pasta = 0, Total_noodles = 0, Total_shake = 0;

    cout << "Room available: ";
    cin >> Qroom;
    cout << "Quantity of Pizza: ";
    cin >> Qpizza;
    cout << "Quantity of Burger: ";
    cin >> Qburger;
    cout << "Quantity of Pasta: ";
    cin >> Qpasta;
    cout << "Quantity of Noodles: ";
    cin >> Qnoodles;
    cout << "Quantity of Shake: ";
    cin >> Qshake;

m:
    cout << "\n\n\t ***Menu*** ";
    cout << "\n\n Please choose options";
    cout << "\n 1)Room";
    cout << "\n\n 2)Pizza";
    cout << "\n 3)Burger";
    cout << "\n 4)Pasta";
    cout << "\n 5)Noodles";
    cout << "\n 6)Shake";
    cout << "\n 7)Inormation regarding Sells and Collection";
    cout << "\n 8)Exit";
    cout << "\n**************************";
    cout << "\nEnter Your Choice: ";
    cin >> Choice;

    switch (Choice)
    {
    case 1:
        cout << "\n Please enter Room";
        cin >> Quant;
        if (Qroom - Sroom >= Quant)
        {
            Sroom += Quant;
            // One Room Charges are $1200
            Total_room += (Quant * 1200);
            cout << "\n\t" << Quant << " Room are Book " << endl;
            Qroom -= Sroom;
        }
        else
        {
            cout << "Only Available Room are " << Qroom << "\n";
        }
        break;

    case 2:
        cout << "\n Please enter Pizza Quantity";
        cin >> Quant;
        if (Qpizza - Spizza >= Quant)
        {
            Spizza += Quant;
            // One Pizza Charges are $150
            Total_pizza += (Quant * 150);
            cout << "\n\t" << Quant << " Pizza are order" << endl;
            Qpizza -= Spizza;
        }
        else
            cout << "Only Available Pizza are " << Qpizza << "\n";
        break;
    case 3:
        cout << "\n Please enter Burger";
        cin >> Quant;
        if (Qburger - Sburger >= Quant)
        {
            Sburger += Quant;
            // One Burger Charges are $60
            Total_burger += (Quant * 60);
            cout << "\n\t" << Quant << " Burger are order " << endl;
            Qburger -= Sburger;
        }
        else
            cout << "Only Available Burger are " << Qburger << "\n";
        break;
    case 4:
        cout << "\n Please enter Pasta Quantity";
        cin >> Quant;
        if (Qpasta - Spasta >= Quant)
        {
            Spasta += Quant;
            // One Pasta Charges are $200
            Total_pasta += (Quant * 200);
            cout << "\n\t" << Quant << " pasta are order" << endl;
            Qpasta -= Spasta;
        }
        else
            cout << "Only Available Pasta are " << Qpasta << "\n";
        break;
    case 5:
        cout << "\n Please enter Noodles Quantity";
        cin >> Quant;
        if (Qnoodles - Snoodles >= Quant)
        {
            Snoodles += Quant;
            // One Noodles Charges are $100
            Total_noodles += (Quant * 100);
            cout << "\n\t" << Quant << " Noodles are order" << endl;
            Qnoodles -= Snoodles;
        }
        else
            cout << "Only Available Noodles are " << Qnoodles << "\n";
        break;
    case 6:
        cout << "\n Please enter Shake Quantity: ";
        cin >> Quant;
        if (Qshake - Sshake >= Quant)
        {
            Sshake += Quant;
            // One Shake Charges are 90
            Total_shake += (Quant * 90);
            cout << "\n\t" << Quant << " Shake are order" << endl;
            Qshake -= Sshake;
        }
        else
            cout << "Only Available Shake are " << Qshake << "\n";
        break;
    case 7:
        cout << "\n\t****Total Collection ****";
        cout << "\nRoom available: " << Qroom;
        cout << "\nRent Room: " << Sroom;
        cout << "\nTotal collection of rooms: $ " << Total_room;

        cout << "\nPizza available: " << Qpizza;
        cout << "\nSell Pizza: " << Spizza;
        cout << "\nTotal collection of Pizza: $ " << Total_pizza;

        cout << "\nBurger available: " << Qburger;
        cout << "\nSell Burger: " << Sburger;
        cout << "\nTotal collection of Burger: $ " << Total_burger;

        cout << "\nPasta available: " << Qpasta;
        cout << "\nSell Pasta: " << Spasta;
        cout << "\nTotal collection of Pasta: $ " << Total_pasta;

        cout << "\nNoodles available: " << Qnoodles;
        cout << "\nSell Noodles: " << Snoodles;
        cout << "\nTotal collection of Noodles: $ " << Total_noodles;

        cout << "\nShake available: " << Qshake;
        cout << "\nSell Shake: " << Sshake;
        cout << "\nTotal collection of Shake: $ " << Total_shake;

        cout << "\n*****************************************************" << endl;

        cout << "\n\nTotal One day collection: $ " << (Total_burger + Total_pizza + Total_room + Total_pasta + Total_noodles + Total_shake) << endl;
        break;
    case 8:
        exit(0);
    default:
        cout << "Please enter correct choice";
    }
    goto m;
}