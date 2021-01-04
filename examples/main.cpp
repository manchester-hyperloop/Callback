//
//  main.cpp
//  Callback Library
//
//  Created by Harry O'Brien on 29/12/2020.
//  Copyright © 2020 Hyperloop Manchester. All rights reserved.
//

#include <Callback.hpp>
#include <iostream>
#include <string>

void doHomework(std::string subject, Callback<void> *callback)
{
    std::cout << "Starting my " << subject << "homework." << std::endl;
    callback->run();
}

void homeworkFinished(void)
{
    std::cout << "Homework finished!" << std::endl;
}

int main()
{
    // Create callback
    FuncCallback<void> cb = FuncCallback<void>(&homeworkFinished);

    // Call func, and pass callback
    doHomework("Maths", &cb);

    return 0;
}