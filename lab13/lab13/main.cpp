#include <iostream>
#include <vector>
using namespace std;


struct Person{
    string name;
    unsigned int phone;
    Person(string n, unsigned int a ): name(n),phone(a){ }
};


int main()
{  vector<Person> people;
    people.push_back(Person("Peter",123456));
    people.push_back(Person("Jane",11111));
    people.push_back(Person("Sam",123556));
    people.push_back(Person("Mike",155556));
    for( const Person& p: people)cout<<"Name:"<<p.name<<",Phone:"<<p.phone<<"|";cout<<endl;
    people.insert(people.begin(),Person("XXX",5555));
    for( const Person& p: people)cout<<"Name:"<<p.name<<",Phone:"<<p.phone<<"|";cout<<endl;

    return 0;
}
