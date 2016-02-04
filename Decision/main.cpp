//
//  main.cpp
//  Decision
//
//  Created by Andres Duran on 29/10/14.
//  Copyright (c) 2014 Andres Duran. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    //programar nuestra primera estructura de control Decisión
    int num = 0;
    int num1 = 0;
    int num2 = 0;
    
    std::cout << "Ingrese Primer Numero: \n";
    std::cin >>num;
    
    std::cout << "Ingrese Segundo Numero: \n";
    std::cin >>num1;
    
    std::cout << "Ingrese Tercer Numero: \n";
    std::cin >>num2;

    if(num == num1 && num1 == num2){
        std::cout << "Son iguales\n";
    
    }else{
        if (num > num1){
            
            std::cout << "El mayor es:"<<num<<"\n";

            if(num1 > num2){
                std::cout << "El menor es:"<<num2<<"\n";
            }
            
        }else{
            
            if(num1 > num2){
                std::cout << "El menor es:"<<num2<<"\n";
            }
            std::cout << "El mayor es:"<<num1<<"\n";
            std::cout << "El menor es:"<<num2<<"\n";
            
    
    }
    

    }
    /*if(num >3){
        std::cout << "Hola\n";
    }else{
        std::cout << "Adios\n";
    }*/
    
    /*if(num <3){
        std::cout << "Adios\n";
    }*/
    
    return 0;

}
