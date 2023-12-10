#include "iostream"
using namespace std;
class publication
{
public:
    string name;
    float price;
    publication()
    {
        price = 0;
    }
    void get_p()
    {
        cout << "enter book name: ";
        cin >> name;
        cout << endl
             << "enter price: ";
        cin >> price;
    }
    void display_p()
    {
        cout << "Book name: " << name << endl;
        cout << "price: " << price << endl;
    }
};
class book : public publication
{
public:
    int page_count;
    book()
    {
        page_count = 0;
    }
    void get_b()
    {
        cout << "enter page count: ";
        cin >> page_count;
    }
    void display_b()
    {
        cout << endl
             << "page count: " << page_count << endl;
    }
};
class tape : public publication
{
public:
    float tape_count;
    tape()
    {
        tape_count = 0;
    }
    void get_t()
    {
        cout << "enter tape: ";
        cin >> tape_count;
    }
    void display_t()
    {
        cout << endl
             << "tape count: " << tape_count;
    }
};
int main()
{
    publication p;
    p.get_p();
    p.display_p();

    book b;
    b.get_b();
    b.display_b();

    tape t;
    t.get_t();
    t.display_t();

    return 0;
}