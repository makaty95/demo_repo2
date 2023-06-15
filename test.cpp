#include <bits/stdc++.h>
using namespace std;
struct person{
    int age;
    string name;
    string ID;
    float weight;


};

int main()
{
    int n;
    cout << "Enter number of people:" << endl;
    cin >> n;
    person* People = new person[n];
    int i = 0;
    while(n--)
    {
        cout << "PERSON #" << i+1 << endl;
        cout << "Enter name: "; cin >> People[i].name;
        cout << "Enter age: "; cin >> People[i].age;
        cout << "Enter ID: "; cin >> People[i].ID;
        cout << "Enter weight: "; cin >> People[i].weight;
        cout << "-----------------------------------------" << endl;
        i++;


    }
    for(int j = 0; j<= i; j++)
    {
        cout << "PERSON #" << j+1 << endl;
        cout << "NAME: " << People[j].name << endl;
        cout << "AGE: " << People[j].age << endl;
        cout << "ID: " << People[j].ID << endl;
        cout << "WEIGHT: " << People[j].weight << endl;
        cout << "========================================" << endl;

    }

    
}