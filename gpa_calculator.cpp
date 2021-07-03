#include<bits/stdc++.h>
using namespace std;
int main(){
	system("color 2");
	// GPA_Calculator
	// -4- -> -10-: (-4- / 4) * 10;
	// -10- -> -4-: (-10- / 10) * 4;
	// -10- -> GPA: ( < 4 - F, 4 -> 4.9 - D, 5 -> 5.4 - D+, 5.5 -> 6.4 - C, 6.5 -> 6.9 - C+
	//                 7.0 -> 7.9 - B, 8.0 -> 8.4 - B+, 8.5 -> 8.9 A, >9 - A+)
	cout << "------Chuyen doi he so diem------\n";
	cout << "1. He 10 sang 4\n2. He 10 sang Alphabet\n\n";
	cout << "Lua chon cua ban: ";
	int choice;
	cin >> choice;
	switch(choice){
		case 1:
			cout << "Nhap diem he 10: ";	float grade_10; cin >> grade_10;
			cout << "Diem he 4 la: " << grade_10 / 10 * 4 << endl;
			break;
		case 2:
			cout << "Nhap diem he 10: "; float gradex_10; cin >> gradex_10; string result = "";
			if (gradex_10 > 9) result = "A+";
			else if (gradex_10 >= 8.5) result = "A";
				else if (gradex_10 >= 8.0) result = "B+";
					else if (gradex_10 >= 7.0) result = "B";
						else if (gradex_10 >= 6.5) result = "C+";
							else if (gradex_10 >= 5.5) result = "C";
								else if (gradex_10 >= 5.0) result = "D+";
									else if (gradex_10 >= 4.0) result = "D";
										else result = "F";
			cout << result << endl; 
			break;
	}
	system("pause");
}

