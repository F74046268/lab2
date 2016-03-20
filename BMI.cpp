#include "BMI.h"
BMI::BMI(float m,float kg,float b){
	set(m,kg,b);
}
void BMI::set(float m,float kg,float b){
	h=m;w=kg;bmi=b;
}
void BMI::get(float m,float kg){
	h=m;
	w=kg;
}
float BMI::compute(){
	bmi=w/((h/100.0)*(h/100.0));
	return bmi;
}
string BMI::categorized(){
	if(bmi<15.0){
		type="Very Severely Underweight";
		return type;
	}
	else if(15.0<bmi<=16.0){
		type="Severely Underweight";
		return type;
	}
	else if(16.0<bmi<=18.5){
		type="Underweight";
		return type;
	}
	else if(18.5<bmi<=25.0){
		type="Normal";
		return type;
	}
	else if(25.0<bmi<=30.0){
		type="Overweight";
		return type;
	}
	else if(30.0<bmi<=35.0){
		type="Obese Class I(Moderately Obese)";
		return type;
	}
	else if(35.0<bmi<=40.0){
		type="Obese Class II(Severely Obese)";
		return type;
	}
	else if(bmi>40.0){
		type="Obese Class III(Very Severely Obese)";
		return type;
	}
}	
		
		
