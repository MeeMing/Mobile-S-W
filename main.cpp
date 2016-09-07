//
//  main.cpp
//  cpp1
//
//  Created by 김명수 on 2016. 5. 19..
//  Copyright © 2016년 Mingsoo. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <ncurses.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    ifstream instream("input.txt");
    int a;
    instream>>a;
    cout<<a<<endl;
    
    
    
    
    return 0;
}
