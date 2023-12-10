//A book shop maintains the inventory of books that are being sold at the shop. The list includes details such as author, title, price, publisher and stock position. Whenever a customer wants a book, the sales person inputs the title and author and the system searches the list and displays whether it is available or not. If it is not, an appropriate message is displayed. If it is, then the system displays the book details and requests for the number of copies required. If the requested copies book details and requests for the number of copies required. If the requested copies are available, the total cost of the requested copies is displayed; otherwise the message “Required copies not in stock” is displayed.
#include <iostream>
#include <vector>
#include "algorithm"
#include <string>
using namespace std;

class Shop
{
public:
    string author;
    string title;
    double price;
    string publisher;
    int stock_position;

    void GetBook()
    {
        cout << "Enter Author name: ";
        cin.ignore();
        getline(cin, author);
        cout << "Enter Book Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter price of Book: ";
        cin >> price;
        cout << "Enter Publisher: ";
        cin.ignore();
        getline(cin, publisher);
        cout << "Enter Stock position: ";
        cin >> stock_position;
    }
    void display() const
    {
        cout << author << "\t" << title << "\t" << price << "\t" << publisher << "\t" << stock_position << endl;
    }
};

int main()
{
    vector<Shop> S;
    Shop Book;
    int ch;

    do
    {
        cout << "MENU" << endl;
        cout << "1.Insert a book\n2.Count the number of books\n3.Size of shop\n4.Display all Books\nEnter Your choice: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "....INSERT A BOOK.... " << endl;
            Book.GetBook();
            S.push_back(Book);
            break;
        }
        case 2:
        {
            cout << "....COUNT THE NUMBER OF BOOKS...." << endl;
            string targetAuthor;
            cout << "Enter author name to find a book: ";
            cin.ignore();
            getline(cin, targetAuthor);
            int count = 0;
            for (const Shop &book : S)
            {
                if (book.author == targetAuthor)
                {
                    count++;
                }
            }
            cout << "Number of books by author " << targetAuthor << ": " << count << endl;
            break;
        }
        case 3:
        {
            cout << "....THE TOTAL BOOKS IN SHOP OR SIZE OF SHOP...." << endl;
            cout << "Number of books in Shop: " << S.size() << endl;
            break;
        }
        case 4:
        {   cout << "....All books in Shop...." << endl;
            for (const Shop &book : S)
            {
                book.display();
            }
            break;
        }
        default:
        {
            cout << "....Invalid Choice...." << endl;
            break;
        }
        }
        cout << "do you want to continue 1|0" << endl;
        cin >> ch;
    } while (ch == 1);

    return 0;
}