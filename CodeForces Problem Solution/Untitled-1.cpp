// #include <bits/stdc++.h>
// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);

// int minOperations(vector<int> arr, int threshold, int d) {
//     unordered_map<int, pair<int, int>> dp;
//     sort(arr.begin(), arr.end());
//     int ans = INT_MAX;
//     for(auto x : arr){
//         int cnt = 0;
//         while(1){
//             if (dp.count(x)) {
//                 ++dp[x].first;
//                 dp[x].second += cnt;
//             } else {
//                 dp[x] = {1, cnt};
//             }

//             if (dp[x].first >= threshold) {
//                 ans = min(ans, dp[x].second);
//             }
//             if(x == 0) 
//                 break;
//             x /= d;
//             cnt++;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string arr_count_temp;
//     getline(cin, arr_count_temp);

//     int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

//     vector<int> arr(arr_count);

//     for (int i = 0; i < arr_count; i++) {
//         string arr_item_temp;
//         getline(cin, arr_item_temp);

//         int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

//         arr[i] = arr_item;
//     }

//     string threshold_temp;
//     getline(cin, threshold_temp);

//     int threshold = stoi(ltrim(rtrim(threshold_temp)));

//     string d_temp;
//     getline(cin, d_temp);

//     int d = stoi(ltrim(rtrim(d_temp)));

//     int result = minOperations(arr, threshold, d);

//     fout << result << "\n";

//     fout.close();

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }


#include <bits/stdc++.h>

using namespace std;

int main() {
  string s = "asdf", ss;
  ss = s;
  reverse(ss.begin(), ss.end());
  if (s == ss) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
