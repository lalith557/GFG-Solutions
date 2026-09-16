class Solution {
public:
    int firstOccurence(string& txt, string& pat) {
        size_t pos = txt.find(pat);

        if (pos == string::npos)
            return -1;

        return (int)pos;
    }
};