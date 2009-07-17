//
//  AppController.h
//  Plexer
//
//  Created by David Owens II on 6/10/09.
//  Copyright 2009 Kiad Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <BWToolkitFramework/BWToolkitFramework.h>
#import <Sparkle/Sparkle.h>
#import "KSUserSettings.h"
#import "KSConfigurationSettingsController.h"
#import <Carbon/Carbon.h>


@interface KSAppController : NSObject {
    IBOutlet NSWindow* preferencesWindow;
    IBOutlet NSMenu* statusItemMenu;
    IBOutlet KSUserSettings* userSettings;
    IBOutlet SUUpdater* updater;
    IBOutlet KSConfigurationSettingsController* configurationsController;
    
    BOOL broadcasting;
    NSArray* applications;
}

@property (assign, getter=isBroadcasting) BOOL broadcasting;
@property (retain) NSArray* applications;
@property (retain) KSConfigurationSettingsController* configurationsController;

-(IBAction)showPreferences:(id)sender;
-(IBAction)startBroadcasting:(id)sender;
-(IBAction)stopBroadcasting:(id)sender;

-(void)showStatusItem;
-(void)hideStatusItem;

-(void)registerEventTaps;
-(KSUserSettings*)userSettings;

@end
