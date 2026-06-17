#include <iostream>
using namespace std;
class Book
{
    public:
    string title;
    int price;
    public:
    void input()
    {
        cout<<"enter title";
        cin>>title;
        cout<<"enter price";
        cin>>price;
    }
    void display()
    {
        cout<<title<<endl;
        cout<<price<<endl;
    }


};
int main()
{
    Book b[4];
    
        for(int i=0;i<4;i++)
        {
            b[i].input();

        }
      

}
