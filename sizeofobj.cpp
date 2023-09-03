#include <bits/stdc++.h>

using namespace std;
#define OFFSETOF(TYPE, ELEMENT) ((size_t)&(((TYPE *)0)->ELEMENT))
class my{
    public:
    char c;
    int x;
    int y;
    
};
class my2{
    public:
    char x;
    char j;
    char k;
    char l;
    int b;
    char y;
    int a;
};
class Student {
    public:
        int id;
        char name[10];
        char branch[10];
        char section[10];
        char n;
        // int x;

};
int main(){
my ob;
cout<<"size "<<sizeof(my)<<"bytes";
my2 ob2;
cout<<"size "<<sizeof(ob2)<<"bytes";
Student s;
    cout << "Size of object: " << sizeof(s) << " bytes" << endl;
    cout<<endl<<OFFSETOF(Student, n);
}