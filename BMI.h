#include <iostream>
#include <string>

using namespace std;

class BMI{
	public:
		BMI(float m,float kg,float b);
		void set(float m,float kg,float b);
		void get(float m,float kg);
		float compute();
		string categorized();

	private:
		string type;
		float h,w,bmi;
};
