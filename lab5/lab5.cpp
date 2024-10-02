// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
// 	ifstream in_stream;
// 	ofstream out_stream;

// 	in_stream.open("LabInput5-1.txt");

// 	if(in_stream.fail()){
// 		cout << "No such file" << endl;
// 		system("pause");
// 		exit(100);
// 	}

// 	out_stream.open("LabOutput5-1.txt");

// 	char a;
// 	char arr[100];
// 	int size = 0;
// 	bool is_firstblank = false;
// 	bool is_initial = true;

// 	while(!in_stream.eof()){
// 		in_stream >> a;
// 		if(isspace(a)) {
// 			if(is_initial) {
// 				continue;
// 			}
// 			if(is_firstblank == false) {
// 				arr[size] = a;
// 				is_firstblank = true;
// 				size++;
// 			} 
// 		} else {
// 			if(is_initial) {
// 				is_initial = false;
// 			}
// 			is_firstblank = false;
// 			a = tolower(a);
// 			arr[size] = a;
// 			size++;
// 		}
// 	}

// 	for(int i = 0; i < size; i++){
// 		out_stream << arr[i];
// 	}

// 	in_stream.close();
// 	out_stream.close();
// 	return 0;
// }


#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream in_stream;
	ofstream out_stream;

	in_stream.open("LabInput5-1.txt");

	if(in_stream.fail()){
		cout << "No such file" << endl;
		system("pause");
		exit(100);
	}

	out_stream.open("LabOutput5-1.txt");

	char a;
	char arr[100];
	int size = 0;
	bool isAlphabet

	while(!in_stream.eof()){
		in_stream >> a;
		if(isspace(a)) {
			if(is_initial) {
				continue;
			}
			if(is_firstblank == false) {
				arr[size] = a;
				is_firstblank = true;
				size++;
			} 
		} else {
			if(is_initial) {
				is_initial = false;
			}
			is_firstblank = false;
			a = tolower(a);
			arr[size] = a;
			size++;
		}
	}

	for(int i = 0; i < size; i++){
		out_stream << arr[i];
	}

	in_stream.close();
	out_stream.close();
	return 0;
}