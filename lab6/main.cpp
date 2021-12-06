#include <iostream>
#include <string>
using namespace std;

class Node{
private:
    int m_x;
    int m_y;
public:
    Node(int x = 0,int y = 0): m_x(x), m_y(y){

    }
    int getx() const {
        return m_x;
    }
    int gety() const{
        return m_y;
    }
    void setx(int n){
        m_x = n;
    }
    void sety(int n){
        m_y = n;
    }
};

class triangle{
    Node one;
    Node two;
    Node three;
    string name;
public:
    triangle(){
        one.setx(66);
    }
    triangle(Node a, Node b, Node c, string name = "default"): one(a), two(b), three(c), name(name){

    }
    void display(){
        cout <<"Triangle " << name << ": " << one.getx() << ", " << one.gety() <<  "\n" << two.getx() << ", " << two.gety() << "\n" << three.getx() << ", " << three.gety() << endl;
    }
    double distance(Node first, Node second){
        double a,b, x,y;
        a = first.getx();
        b = first.gety();
        x = second.getx();
        y = second.gety();
        x -=a;
        y -=b;
        cout << "Distance: " << x << ", ";
        return y;
    }

     void showTriangleData(triangle &D){
        cout <<"Triangle " << name << ": " << one.getx() << ", " << one.gety() <<  "\n" << two.getx() << ", " << two.gety() << "\n" << three.getx() << ", " << three.gety() << endl;
    }
     void showTriangleData(triangle *P){
        cout <<"Triangle " << name << ": " << one.getx() << ", " << one.gety() <<  "\n" << two.getx() << ", " << two.gety() << "\n" << three.getx() << ", " << three.gety() << endl;
    }
friend ostream& operator<<(ostream& os, const triangle& dt);
};

ostream& operator<<(ostream& os, const triangle& dt)
{
    cout << dt.name << ": (";
    cout << dt.one.getx() << ", ";
    cout << dt.one.gety() << ") ";
    cout << "(" << dt.two.getx() << ", ";
    cout << dt.two.gety() << ") ";
    cout << "(" << dt.three.getx() << ", ";
    cout << dt.three.gety() << ")";
    return os;
}


int main () {
   Node a,b,c;
   b = {3,5};
   c = {11,40};
   triangle T(a,b,c, "THOR");
   T.display();
   cout << T << endl;
   cout << T.distance(b,c) << endl;
   triangle *ptr;
   ptr = & T;
   T.showTriangleData(ptr);
   T.showTriangleData(T);
}
