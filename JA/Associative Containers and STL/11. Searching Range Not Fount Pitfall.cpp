// github.com/andy489

#include<algorithm>
#include<iostream>
#include<vector>

int main(){
    using namespace std;

    vector<int> nums { 61, 41, 231, 764, 45 };
    auto it = find(nums.begin(), nums.begin() + 3, 45);

    // This should be the same as the iterator in the search, i.e. nums.begin() + 3,
    // because that's what find will return when it doesn't locate our element
    if (it != nums.end()) {
        cout << "found " << *it << " at " << it - nums.begin() << endl;
    } 
    else {
        cout << "not found" << endl;
    }

    return 0;
}

// What will the above code print?
// a) 764 at 3
// b) 45 at 4
// c) not found
// d) There will be a runtime erroe
