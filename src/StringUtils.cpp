#include "StringUtils.h"

namespace StringUtils{

std::string Slice(const std::string &str, ssize_t start, ssize_t end) noexcept{
    
    return str.substr(start,str.length() - start);
}

std::string Capitalize(const std::string &str) noexcept{
    auto Copy = str;
    Copy[0]=toupper(str[0]);
    for(size_t Index = 1; Index < Copy.length();Index++){
        Copy[Index]=tolower(Copy[Index]);
    }
    return Copy;
}

std::string Upper(const std::string &str) noexcept{
    auto Copy = str;
    for (size_t Index = 0; Index < Copy.length();Index++){
        Copy[Index]=toupper(Copy[Index]);
    }
    return Copy;
}

std::string Lower(const std::string &str) noexcept{
    auto Copy = str;
    for(size_t Index = 0; Index < Copy.length(); Index++){
        Copy[Index] = tolower(Copy[Index]);
    }
    return Copy;
}

std::string LStrip(const std::string &str) noexcept{
    size_t Index = 0;
    while(Index < str.length() && std::isspace(str[Index])){
        Index++;
    }
    return str.substr(Index);
}

std::string RStrip(const std::string &str) noexcept{
    ssize_t Index = str.length()-1;
    while(Index >=0 && std::isspace(str[Index])){
        Index--;
    }
    return str.substr(0, Index+1);
}

std::string Strip(const std::string &str) noexcept{
    size_t start = 0;
    ssize_t end = str.length()-1;

    while(start < str.length() && std::isspace(str[start])){
        start++;
    }
    while(end>=0 && std::isspace(str[end])){
        end--;
    }
    return str.substr(start, end-start+1);
}

std::string Center(const std::string &str, int width, char fill) noexcept{
    if(width <= str.length()){
        return str;
    }
    
    int spaces=width-str.length();
    int left= spaces/2;
    int right= spaces-left;

    std::string centered;
    centered.reserve(spaces);
    centered.append(left, fill);
    centered+=str;
    centered.append(right,fill);
    
    return centered;
}

std::string LJust(const std::string &str, int width, char fill) noexcept{
    if(width <= str.length()){
        return str;
    }

    int spaces = width - str.length();
    std::string newString;
    newString.reserve(width);
    newString+=str;
    newString.append(spaces, fill);
    return newString;
}

std::string RJust(const std::string &str, int width, char fill) noexcept{
    if(width <= str.length()){
        return str;
    }

    int spaces = width - str.length();
    std::string newString;
    newString.reserve(width);
    newString.append(spaces, fill);
    newString+=str;
    return newString;
}

std::string Replace(const std::string &str, const std::string &old, const std::string &rep) noexcept{
    std::string newString = str;
    size_t pos = newString.find(old);
    while (pos != std::string::npos){
        newString.replace(pos, old.length(),rep);
        pos= newString.find(old, pos + rep.length());
    }
    return newString;
}

std::vector< std::string > Split(const std::string &str, const std::string &splt) noexcept{
    // Replace code here
    return {};
}

std::string Join(const std::string &str, const std::vector< std::string > &vect) noexcept{
    // Replace code here
    return "";
}

std::string ExpandTabs(const std::string &str, int tabsize) noexcept{
    // Replace code here
    return "";
}

int EditDistance(const std::string &left, const std::string &right, bool ignorecase) noexcept{
    // Replace code here
    return 0;
}

};