#include <iostream>
#include <list>
#include <windows.h>
using namespace std;
list <int> lista;
int choice;

void show()
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    cout<<" LIST CONTENT: "<<endl;
    cout<<"---------------------------"<<endl;

    for(list<int>::iterator i=lista.begin(); i!= lista.end(); ++i)
       cout<<*i<<" ";

    cout<<endl;
    cout<<"---------------------------"<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void push_front()
{
    int number;
    cout<<"Give a number to push to the front of the list: ";
    cin>>number;
    lista.push_front(number);
}

void push_back()
{
    int number;
    cout<<"Give a number to push to the end of the list: ";
    cin>>number;
    lista.push_back(number);
}

void pop_front()
{
    cout<<"The number from the front of the list will be deleted";
    Sleep(2000);
    lista.pop_front();
}

void pop_back()
{
    cout<<"The number from the end of the list will be deleted";
    Sleep(2000);
    lista.pop_back();
}

void size()
{
    cout<<"The size of the list is: "<<lista.size();
    Sleep(2000);
}

void max_size()
{
    cout<<"The maximum size of the list is: "<<lista.max_size();
    Sleep(5000);
}

void empty()
{
    cout<<"Is the list empty? -> ";
    if (lista.empty()==1) cout<<"TRUE"; else cout<<"FALSE";
    Sleep(2000);
}

void remove()
{
    int number;
    cout<<"Delete from the list every number equal to: ";
    cin>>number;
    lista.remove(number);
}

void sort()
{
    cout<<"The list will be sorted! ";
    lista.sort();
    Sleep(2000);
}

void reverse()
{
    cout<<"The list will be reversed!";
    lista.reverse();
    Sleep(2000);
}

void exit()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    cout<<"End of program!";
    Sleep(2000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
}

int main()
{

do
{

show();

cout << " MAIN MENU:"<<endl;
cout << "---------------------------"<<endl;
cout << "1.  push_front"<<endl;
cout << "2.  push_back"<<endl;
cout << "3.  pop_front"<<endl;
cout << "4.  pop_back"<<endl;
cout << "5.  size"<<endl;
cout << "6.  max_size"<<endl;
cout << "7.  empty"<<endl;
cout << "8.  remove"<<endl;
cout << "9.  sort"<<endl;
cout << "10. reverse"<<endl;
cout << "11. exit"<<endl;
cout << "---------------------------"<<endl;
cout << "Choose: ";
cin >> choice;

	switch (choice)
	{
        case 1:  push_front(); break;
        case 2:  push_back();  break;
        case 3:  pop_front();  break;
        case 4:  pop_back();   break;
        case 5:  size();       break;
        case 6:  max_size();   break;
        case 7:  empty();      break;
        case 8:  remove();     break;
        case 9:  sort();       break;
        case 10: reverse();    break;
        case 11: exit();       break;

        default:
        cout<<"ERROR!";
        Sleep(2000);
        break;
	}

}
while(choice!=11);

    return 0;
}
