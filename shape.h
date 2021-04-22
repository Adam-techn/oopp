#include <iostream>
using namespace std;
class Shape
{
    private:
    string _name;
    protected:
    Shape(string name)
    {
        _name=name;
    }

    public:
    virtual int GetArea()=0;
    string GetName()
    {
        return _name;
    }

};

class Square : public Shape
{

private:
    double _side;

public:
Square(string name,double a) : Shape(name){
 this->_side=a;
}

int GetArea(){
    return this->_side*this->_side;
}

};

class Triangl : public Shape
{
    private:
    double _height;
    double _c;
    
    public:
    Triangl(string name,double height,double c) : Shape(name)
    {
        this->_height=height;
        this->_c=c;

    }

    int GetArea(){

            return((this->_c*this->_height)/2);
    }


};

class Round : public Shape
{
    private:
    double _radius;

    public:
    Round(std::string name,double radius) : Shape(name)
    {
        this->_radius=radius;
    }

    int GetArea(){
        return (this->_radius*this->_radius*3.14);
    }
};

