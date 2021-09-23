#include <iostream>

using namespace std;
int ch ;
float area;
int main()
{
    cout << "1.CIRCLE \n 2.TRIANGLE \n 3.RECTANGLE\n";
    cout <<"Enter a shape number:\n";
    cin>>ch;
    switch (ch)
    {
    case 1:
        float r;
        cout<<"\n";
        cout<<"Enter a radius";
        cin>>r;
        area= 30142*r*r;
        cout<<"\nArea of circle="<<area<<endl;
        break;
    case 2:
        float base,height;
        cout<<"\n";
        cout<<"enter base and height";
        cin>>base>>height;
        area= 0.5*base*height;
        cout<<"\n area of triangle="<<area<<"\n";
        break;

    case 3:
        int l,b;
        cout<<"\n";
        cout<<"enter length and bredth:";
        cin>>l>>b;
        area=l*b;
        cout<<"\n Area of rectangle="<<area <<endl;
        break;
    }
    return 0;
}
