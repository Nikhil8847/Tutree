#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// Approach is to find anagrams by windows sliding method and checking if the two strings matches in their sorted form.
void FindSubStrings(string bigger, string smaller){
    string temp2 = smaller;
    
    sort(temp2.begin(), temp2.end());
    
    if(smaller.size() > bigger.size())
    {
        cout << "Inavlid input" << endl;
        return;
    }

    for(int i = 0; i<= bigger.size()-smaller.size(); i++)
    {
        string temp = bigger.substr(i,smaller.size());  // Sliding windows and taking next substring of size equal to smaller string.
        
        sort(temp.begin(), temp.end());

        if(temp == temp2){
            cout << "String " << bigger.substr(i,smaller.size()) << " found at : " << i << " index" << endl;
        }
    }
}

int main(){
    string bigger, smaller;
    cout << "Enter the two strings (bigger than smaller respectively) : " << endl;
    cin >> bigger >> smaller;
    FindSubStrings(bigger, smaller);
    return 0;
}
