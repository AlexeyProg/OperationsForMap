#include <iostream>
#include <map>

using namespace std;

map <string,int>mp;

void addElement()
{
    string str;
    int x;
    cout << "Enter new value(str) :"; cin >> str;
    cout << "Enter new key(int) :"; cin >> x;
    mp[str] = x;
    cout << "New element was added!";
}

void deleteItem()
{
    int key;
    cout << "Enter key of item which will be deleted : "; cin >> key;
    map<string,int>::iterator it = mp.begin();
    for(int i = 0; it!=mp.end();it++,i++)
    {
        if(it->second == key)
        {
            mp.erase(it);
            cout << "Item was deleted!";
        }
    }
}

void showMap()
{
    map<string,int>::iterator it = mp.begin();
    for(int i = 0; it != mp.end(); it++,i++)
        cout << it->first << "-" << it->second << endl;
}

int main()
{
    while(true)
    {
        int mode;
        cout << "Enter operation : 1-add, 2- delete, 3-show "; cin >> mode;
        if(mode == 1)
            addElement();
        else if(mode == 2)
            deleteItem();
        else if(mode == 3)
            showMap();
    }

}
