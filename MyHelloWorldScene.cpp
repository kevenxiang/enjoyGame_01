//
//  MyHelloWorldScene.cpp
//  enjoyGame_01
//
//  Created by xiang on 2017/3/20.
//
//

#include "MyHelloWorldScene.hpp"

Scene * MyHelloWorldScene::createScene() {
    //创建一个场景对象
    auto scene = Scene::create();
    
    //创建MyHelloWorldScene对象
    auto layer = MyHelloWorldScene::create();
    
    //添加MyHelloWorldScene到场景中
    scene->addChild(layer);
    
    return scene;
}

bool MyHelloWorldScene::init() {
    //以下代码是创建一个精灵并且添加到场景中
    auto sprite = Sprite::create("HelloWorld.png");
    sprite->setPosition(Vec2(300, 300));
    this->addChild(sprite);
    return true;
}























