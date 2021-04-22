#include <iostream>
#include "shape.h"
using namespace std;




void printSort(Shape ** shapes,int size){
    for(int i=0;i<size;i++){
    cout<<shapes[i]->GetArea()<<std::endl;
    cout<<shapes[i]->GetName()<<std::endl<<std::endl;
    }
}

void TestShape()
{
    Shape* s1 = new Square("ctverec",4);

    int area= s1->GetArea();
    cout << area << s1->GetName();

    
}

void bubbleSort(Shape** array, int size){

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j+1]->GetArea() < array[j]->GetArea()){
                Shape* tmp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = tmp;
            }   
        }   
    }   
}


int main()
{
// seradit vice objektu
//seznam objektu shape , ctver obdelnik atd..
//TestShape();

Shape *shapes[] = {new Square("ctverec",100),new Triangl("trojuhelnik",2,4),new Round("kolo",50)};

bubbleSort(shapes,3);
printSort(shapes,3);


}