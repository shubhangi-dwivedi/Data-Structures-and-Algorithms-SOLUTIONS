
/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle
{
    public:
    int length,width;
    
    void display()
    {
        cout<<length<<" "<<width<<endl;
    }
};

class RectangleArea: public Rectangle
{
    public:
    void read_input()
    {
        cin>>length;
        cin>>width;
    }
    void display()
    {
        int c;
        c=length*width;
        cout<<c<<endl;
    }
};


