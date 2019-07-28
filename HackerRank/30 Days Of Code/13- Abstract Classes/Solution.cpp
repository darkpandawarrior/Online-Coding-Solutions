#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

class MyBook: public Book
{    private: int bookprice;
    //   Class Constructor
     public:  MyBook(string title, string author,int price):Book(title,author)
       {
         bookprice=price;
       }
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    void display()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<bookprice<<endl;
    }

// End class
};

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
