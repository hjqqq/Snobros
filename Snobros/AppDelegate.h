//
//  AppDelegate.h
//  Snobros
//
//  Created by Tanoy Sinha on 10/23/12.
//  Copyright (c) 2012 Tanoy Sinha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#import "ViewController.h"
#import "Entity.h"
#import "MovableEntity.h"

@interface AppDelegate : UIResponder<UIApplicationDelegate, GLKViewControllerDelegate, GLKViewDelegate> {
  Entity        *map_;
  MovableEntity *bro_;
}

@property (strong, nonatomic) UIWindow *window;

#pragma mark GLKViewControllerDelegate
- (void)glkViewControllerUpdate:(GLKViewController *)controller;

#pragma mark GLKViewDelegate
- (void)glkView:(GLKView *)view drawInRect:(CGRect)rect;

@end
