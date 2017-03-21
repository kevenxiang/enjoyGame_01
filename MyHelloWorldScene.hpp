//
//  MyHelloWorldScene.hpp
//  enjoyGame_01
//
//  Created by xiang on 2017/3/20.
//
//

#ifndef MyHelloWorldScene_hpp
#define MyHelloWorldScene_hpp

#include <stdio.h>
#include "cocos2d.h"

using namespace cocos2d;

class MyHelloWorldScene : public Layer {
public:
    //通过静态的scene函数，创建一个场景对象
    static Scene *createScene();
    
    //MyHelloWorldScene的初始化工作都在init里执行
    virtual bool init();
    
    //调用宏CREATE_FUNC定义create函数
    CREATE_FUNC(MyHelloWorldScene);
};

#endif /* MyHelloWorldScene_hpp */
