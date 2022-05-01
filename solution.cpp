#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
using namespace sol205;
using namespace std;

/*takeaways
  - concatenate A and B into one string and count
    the occurrences of each word
  - return those only appear once

*/

vector<string> Solution::find(string &A, string &B)
{
  auto result = vector<string>();
  auto freq = unordered_map<string, int>();

  auto ss = stringstream(A + ' ' + B);
  string word;
  while (ss >> word)
    freq[word]++;

  for (auto &[w, count] : freq)
    if (count == 1)
      result.push_back(w);

  return result;
}