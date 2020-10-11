class Solution {
public:
    string defangIPaddr(string address) {
        string s = "[.]";
        size_t found = address.find(".");
        address.replace(found,1,s);
        found = address.find(".", found+2);
        address.replace(found,1,s);
        found = address.find(".", found+2);
        address.replace(found,1,s);
        return address;
    }
};
