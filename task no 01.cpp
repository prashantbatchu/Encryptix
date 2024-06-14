#include<iostream>
#include<ctime>
int main(){
    std::cout<<"***************                    ****************"<<std::endl;
    std::cout<<"***************NUMBER GUESSING GAME****************"<<std::endl;
    std::cout<<"***************                    ****************"<<std::endl;
    int k;
    srand(time(0));
    k=rand()%100 +1;
    int guess;

    do{
        std::cout<<"enter a number between 1 to 100: ";
        std::cin>>guess;
        if(k>guess){
            std::cout<<"OPPS!! YOUR NUMBER IS TOO LOW "<<std::endl;

        }
        else if(k<guess){
            std::cout<<"YOUR NUMBER IS TOO HIGH "<<std::endl;
        }
        else if(k=guess){
            std::cout<<"YEP## CORRECT  "<<std::endl;
        }
    }while (k!=guess);

    std::cout<<"*************                  **********"<<std::endl;
    std::cout<<"*************THANKS FOR PLAYING**********"<<std::endl;
    std::cout<<"*************                  **********"<<std::endl;
    return 0;
}
