//
//  AppDelegate.h
//  TowerDefense
//
//  Created by Igor Elland on 04.03.12.
//  Copyright Controversial Games 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
