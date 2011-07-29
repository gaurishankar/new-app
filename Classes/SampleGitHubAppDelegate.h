//
//  SampleGitHubAppDelegate.h
//  SampleGitHub
//
//  Created by Gauri Shankar on 29/07/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SampleGitHubViewController;

@interface SampleGitHubAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    SampleGitHubViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet SampleGitHubViewController *viewController;

@end

