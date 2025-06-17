// #include<iostream>
// using namespace std;
// class Base {
//     public:
//
//     void show() {
//         cout << "Base class show method called" << endl;
//     }
//     void show(int x) {
//         cout << "Base class show method called with parameter" << endl;
//     }
//     void show(int x, int y) {
//         cout << "Base class show method called with two parameters" << endl;
//     }
// };
// int main() {
//     Base b;
//     b.show(2,10);
//
//     return 0;
// }
#include<iostream>
using namespace std;

class Base{
public:
    void  view(){
        cout<<"Default Base method called"<<endl;
    }
    void  view(int a){
        cout<<"Base method called with 1 argument"<<endl;
    }
};
class child: public Base{
public:
    void see(){
        cout<<"Default child method called"<<endl;
    }
    void see(int b){
        cout<<"child method called with 1 argument"<<endl;
    }
};
int main(){
    Base b;
    b.view();
    child c;
    c.see(3);

    return 0;
}
