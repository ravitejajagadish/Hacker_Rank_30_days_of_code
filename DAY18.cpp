#include <iostream>

using namespace std;

class Solution {
    int top,rear,front;
    public:char s[100];
    char q[100];
    Solution(){top=-1;
              rear=-1;
              front=-1;}
 void pushCharacter(char s1)
 {
     s[++top]=s1;
 }
    void enqueueCharacter(char s1)
    {
        q[++rear]=s1;
    }
    char popCharacter(){
        return s[top--];

    }
    char dequeueCharacter(){return s[++front];}
};
int main() {
    // read the string s.
    string s;
    getline(cin, s);

  	// create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
