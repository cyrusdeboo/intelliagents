#ifndef H_BOARD_OBJECT
#define H_BOARD_OBJECT
enum ObjectColours { BLACK, YELLOW, BLUE, RED, INVISIBLE, BACKGROUND};
enum ObjectTypes { THE_BACKGROUND, A_COOKIE, A_PLAYER ,A_WALL};


class BoardObject
{

private:
        int colour1,colour2;
        ObjectColours currentColor;
protected:
	ObjectTypes myClass;
	//int unique_ID;
	//static int count;
public:
        BoardObject (int start_colour1, int start_colour2)
                { colour1=start_colour1; colour2=start_colour2;
                  currentColor=BACKGROUND; 
		  myClass=THE_BACKGROUND;
		  
		  //unique_ID=count++;
                };

        //int get_ID() { return unique_ID;};

        int get_colour1() { return colour1;};
        int get_colour2() { return colour2;};
	ObjectTypes get_Type() {return myClass;}
	

        ObjectColours get_Color() {return currentColor; }

        virtual void touch() {currentColor=BACKGROUND; }

protected:

	void set_color(ObjectColours new_color)
		{currentColor=new_color;};
        void set_colour1(int new_colour1) { colour1=new_colour1;};
        void set_colour2(int new_colour2) {colour2=new_colour2;};


};

//int BoardObject::count=0;
#endif // H_BOARD_OBJECT

