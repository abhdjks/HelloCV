#include<iostream>
#include<limits>
#include"unitlib.h"

int main(){
    int choice;
    double shuzi,jieguo;

    while(true){
        zhuanhuanchoice();

        if (!(std::cin>>choice)){
            std::cout<<"无效内容，请重新输入！"<<std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
        }

        if (choice==0){
            std::cout<<"感谢使用，再见！"<<std::endl;
            break;
        }

        if (choice>=1 && choice<=6){
            std::cout<<"请输入要转换的数值：";
            if (!(std::cin>>shuzi)){
                std::cout<<"无效内容，请重新输入！"<<std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                continue;
            }

            switch(choice){
                case 1:
                    jieguo=jisuan1(shuzi);
                    std::cout<<"结果："<<shuzi<<"°C="<<jieguo<<"°F"<<std::endl;
                    break;
                case 2:
                    jieguo=jisuan2(shuzi);
                    std::cout<<"结果："<<shuzi<<"°F="<<jieguo<<"°C"<<std::endl;
                    break;
                case 3:
                    jieguo=jisuan3(shuzi);
                    std::cout<<"结果："<<shuzi<<"m="<<jieguo<<"ft"<<std::endl;
                    break;
                case 4:
                    jieguo=jisuan4(shuzi);
                    std::cout<<"结果："<<shuzi<<"ft="<<jieguo<<"m"<<std::endl;
                    break;
                case 5:
                    jieguo=jisuan5(shuzi);
                    std::cout<<"结果："<<shuzi<<"kg="<<jieguo<<"lb"<<std::endl;
                    break;
                case 6:
                    jieguo=jisuan6(shuzi);
                    std::cout<<"结果："<<shuzi<<"lb="<<jieguo<<"kg"<<std::endl;
                    break;
            }
        }
        else{
            std::cout<<"无效数字，请重新输入！"<<std::endl;
        }
    }
    return 0;
}