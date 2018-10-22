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
class MyBook: Book{
protected :string titles,authors;
    int price;
    public:
    MyBook(string titles,string authors,int price):Book(titles,authors),price(price)
    {

    }


void display()
{ cout<< "Title: "<< title <<endl;
     cout<<"Author: "<< author <<endl;
     cout<<"Price: "<<price<<endl;
}
        //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here

};// End class
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
