// this is how we can define a class in a separate file, check test.cpp
class Hero {
	public:
		char name[100];
		int  health;
		char  level;
		void setHealth(int h)
		{
        	health = h;
  }
};
