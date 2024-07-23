#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int i;
    cout<<"Enter the value of int i: ";
    cin>>i;
    cout<<"Integer = "<<i<<endl;

    float f;
    cout<<"Enter the value of float f: ";
    cin>>f;
    cout<<"Float = "<<f<<endl;

    char c;
    cout<<"Enter the character c: ";
    cin>>c;
    cout<<"Char = "<<c<<endl;

    string n;
    cout<<"Enter your name: ";
    cin>>n;
    cout<<"Name: "<<n<<endl;

    cout<<"Size of name: "<<sizeof(n)<<endl;
}

/*Enter the value of int i: 876
Integer = 876
Enter the value of float f: 27.78
Float = 27.78
Enter the character c: p
Char = p
Enter your name: Hussain
Name: Hussain
Size of name: 32*/
