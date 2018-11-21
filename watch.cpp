#include <iostream>
using namespace std;
class Watch
{ public:
	int hour;
	int minute;
	int second;
	Watch(int h, int m, int s);
	void getTime();
};
void Watch::getTime()
{ 
      int hour, minute, second;
      cout << "시간을 입력하세요.\n";
      cin >> hour; 
      cin >> minute;
      cin >> second;

      	cout << "현재 시간은";
	cout << hour << "시";
	cout << minute << "분";
	cout << second << "초";
};
