#include <iostream>
using namespace std;
#define PI 3.14
class circle
{
  private:
    float radius;

  public:
    circle(float r = 0);
    circle(circle &c);
    void input();
    float girth();
    float area();
};
circle::circle(float r)
{
    radius = r;
}
circle::circle(circle &c)
{
    radius = c.radius;
}
void circle::input()
{
    cout << "ÊäÈë°ë¾¶:" << endl;
    cin >> radius;
}
float circle::girth()
{

    return 2 * PI * radius;
}
float circle::area()
{
    return PI * radius * radius;
}
int main()
{
    circle c1;
    circle c2;
    float area1, area2, girth1, girth2;
    c1.input();
    area1 = c1.area();
    girth1 = c1.girth();
    c2.input();
    area2 = c2.area();
    girth2 = c2.girth();
    cout << "½á¹û" << endl;
    if (area1 > area2)
    {
        cout << "area1>area2" << endl;
    }
    else
    {
        cout << "area1<area2" << endl;
    }
    if (girth1 > girth2)
    {
        cout << "girth1>girth2" << endl;
    }
    else
    {
        cout << "girth1<girth2" << endl;
    }
    system("pause");
}