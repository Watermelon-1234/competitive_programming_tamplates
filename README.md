![image](https://github.com/user-attachments/assets/0cdb61b4-f78d-4669-9bf1-d0dac2f69c87)# competitive_programming_tamplates
thanks to [cyano](https://github.com/stdcyanout/) for sharing the original tamplate(though some of them work suck in my computer)
this is a cometitive programming tamplates for me to easily share and use

# files
* template_c++14_below.cpp
  * is satisfied in c++11 and c++14
  * test in my computer
* template_c++17.cpp
  * is satisfied in c++17
  * test in onlineGDB
  * won't undate(i am lazy)
* test_version.cpp
  * see wat my c++ version is

# What i have change
* unsign main()-> undef int int main(){#define int int64_t}
* use recursion to make c++14 version debug to replace the fold-expression
* repair the syntax error in safe define

#how to use
* safe
  * to see which function and line the program is running at
* debug(args) print the value and name the args are
* orange(R,L) print the value in array-like object(ex:vector)
    * R=the begin pointer
    * L=the end pointer
    * ex: vector<int> a(4,4); orange(a.begin(),a.end());
* rep foo oof all btw  is easy to understand in code
