#include <iostream>
#include "unitlib.h"

void zhuanhuanchoice(){
    std::cout<<"         单位转换器        "<<std::endl;
    std::cout<<"1.摄氏度转华氏度"<<std::endl;
    std::cout<<"2.华氏度转摄氏度"<<std::endl;
    std::cout<<"3.米转英尺"<<std::endl;
    std::cout<<"4.英尺转米"<<std::endl;
    std::cout<<"5.千克转磅"<<std::endl;
    std::cout<<"6.磅转千克"<<std::endl;
    std::cout<<"0.退出程序"<<std::endl;
    std::cout<<"请输入您的选择（0-6）：";
}

double jisuan1(double shu){
    double jieguo;
    jieguo=shu*1.8+32.0;
    return jieguo;
}

double jisuan2(double shu){
    double jieguo;
    jieguo=(shu-32.0)/1.8;
    return jieguo;
}

double jisuan3(double shu){
    double jieguo;
    jieguo=shu*3.28084;
    return jieguo;
}

double jisuan4(double shu){
    double jieguo;
    jieguo=shu/3.28084;
    return jieguo;
}

double jisuan5(double shu){
    double jieguo;
    jieguo=shu*2.20462;
    return jieguo;
}

double jisuan6(double shu){
    double jieguo;
    jieguo=shu/2.20462;
    return jieguo;
}