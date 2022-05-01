#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol205;

/*
Input: A = "this apple is sweet", B = "this apple is sour"
Output: ["sweet","sour"]
*/
tuple<string, string, vector<string>>
testFixture1()
{
  auto A = "this apple is sweet";
  auto B = "this apple is sour";
  auto output = vector<string>{"sweet", "sour"};
  return make_tuple(A, B, output);
}

/*
Input: A = "apple apple", B = "banana"
Output: ["banana"]
*/
tuple<string, string, vector<string>>
testFixture2()
{
  auto A = "apple apple";
  auto B = "banana";
  auto output = vector<string>{"banana"};
  return make_tuple(A, B, output);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see " << Util::toString(get<2>(f))
       << ": " << Util::toString(sol.find(get<0>(f), get<1>(f))) << endl;
}
void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see " << Util::toString(get<2>(f))
       << ": " << Util::toString(sol.find(get<0>(f), get<1>(f))) << endl;
}

main()
{
  test1();
  test2();

  return 0;
}