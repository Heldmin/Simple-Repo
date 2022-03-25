#include <iostream>

using namspace std;

int main(){
	
double a, b, c, d;
	
cout << "Input your first number" << endl;	
cin >> a;	
cout << "Input your second number" << endl;	
cin >> b;
cout << "Input your 3rd number" << endl;	
cin >> c;	
cout << "Input your 4th number" << endl;	
cin >> c;

double max;	
	
if(a > b && a > c && a > d){
max = a;	
}else if(b > d && b > c){
max = b;
}else if(c > d){
max = c	;
}
	
cout << "The biggest number is: " << max << endl;	
return 0;
}
