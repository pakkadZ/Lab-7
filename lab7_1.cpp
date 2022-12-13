#include<iostream>
#include<string>

using namespace std;
string text1,text2;
string func1(string x){   //กลับตัวอักษร
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){  //เปลี่ยนตัวใหญ่
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){ //เปลี่ยนตัวเล็ก
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}
int main(){
    cout << "Input text: ";
	cin >>text1;
	text2 =func1(text1);
    cout << "Reversed text: "<<text2<<"\n";
text1=func2(text1);
text2=func2(text2);

	if(text2 == text1){
		cout << "Palindrome: Yes";
	}
	else{
		cout << "Palindrome: No";
	}
    
    return 0;
}
