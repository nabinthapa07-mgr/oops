#include <iostream>
using namespace std;
class Parent {
    public:
    int publicvar;
    private:
    int privatevar;
    protected:
    int protectedvar;
    public:
     void showvalue(){
        cout << "Public variable: " << publicvar << endl;
        cout << "Private variable: " << privatevar << endl;
        cout << "Protected variable: " << protectedvar << endl;
    }
    
};
class child: protected Parent {
    public:
    void childshow() {
       showvalue();// Accessible within the class
    }
    
};
class child2:private child{
    
    public:
  void callshowValue()
    {
            cout << "Accessing Parent class variables from child2 class:" << endl;
            publicvar = publicvar; // Accessible due to inheritance
            protectedvar = protectedvar; // Accessible due to inheritance
            // privatevar = 30; // Not accessible, as it's private in Parent
            showvalue(); // Calling the showvalue method from Parent
        }
    
    

};
int main(){
    Parent p;
    p.showvalue(); // This will call the showValue method in Parent
    child obj;
    obj.childshow(); // This will call the showValue method in child2
}