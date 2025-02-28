#include <bits/stdc++.h>

using namespace std;
//#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<vector<char>> vcc;
typedef vector<long long> vl;


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using ordered_set =
        tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<class T> using ordered_multiset =
        tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;



int main() {
    // Create an ordered set of integers
    // (Policy-Based Data Structure that maintains elements in sorted order and supports order statistics)
    ordered_set<int> set1;

    // Insert the value 1 into the set
    set1.insert(1);

    // Print the number of elements in the set that are strictly less than 7
    // Since set1 only contains 1, output will be 1
    cout << set1.order_of_key(7) << endl;

    // Find the element at index 2 (0-indexed) in the sorted set and print it
    // This will cause an error because set1 only has 1 element (at index 0),
    // so index 2 is out of bounds
    cout << *set1.find_by_order(2);

    // Remove the element with value 1 from the set
    // After this operation, set1 will be empty
    set1.erase(1);
}