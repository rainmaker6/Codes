#include <iostream>

using namespace std;
struct Point
{
int x;
int y;
};
int orientation(Point one, Point two, Point three)
{
int val=((two.y-one.y)*(three.x-two.x))-((two.x-one.x)*(three.y-two.y));
if(val==0) return 0;
if(val>1) return 1; //clockwise
else
return 2; //counterclockwise.
}
int Intersect(Point p1, Point q1, Point p2, Point q2)
{
int o1= orientation(p1, q1, p2);
int o2=orientation(p1, q1, q2);
int o3= orientation(p2, q2, p1);
int o4=orientation(p2, q2, q1);
if(o1!= o2 && o3!=o4) return 1;
if(o1==0 && onsegemnt(p1, p2, q1 )) return 1;
if(o2==0 && onsegemnt(p1, q2, q1 )) return 1;
if(o3==0 && onsegemnt(p2, p1, q2 )) return 1;
if(o4==0 && onsegemnt(p2, q1, q2 )) return 1;
else
return 0;
}

int main()
{
struct Point p1={2,1}, q1={10, 10};//line 1;
struct Point p2={1,1}, q2={20, 1};// line 2
int a;
a=Intersect(p1, q1, p2, q2);
if(a==1) {cout<<"lines are intersecting to each other";}
else
cout<<"lines are not intersecting";
cout<<"Hello World";

 return 0;
}