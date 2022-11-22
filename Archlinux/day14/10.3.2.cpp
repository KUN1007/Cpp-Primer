#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using std::vector;
using std::string;

void kun(vector<string> &vec) {
    sort(vec.begin(), vec.end());
    auto last_iter =  unique(vec.begin(), vec.end());
    vec.erase(last_iter, vec.end());
}

string make_plural(size_t sz, const string &str, const string ending= "s") {
    return (sz > 1) ? str + ending : str;
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
    kun(words);
    stable_sort(words.begin(), words.end(),
                [](const string &a, const string &b)
                { return a.size() < b.size(); });
    auto wc = find_if(words.begin(), words.end(), 
                        [sz] (const string &a)
                        { return a.size() > sz; });
    auto count = words.end() - wc;
    std::cout << "  " << make_plural(count, "word", "s")
                << " of length " << sz << " or longer" << '\n';
    for_each(wc, words.end(), [](const string &s) {std::cout << s << "   ";});
    std::cout << '\n';
}