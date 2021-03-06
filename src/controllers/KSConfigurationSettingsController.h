//
//  KSConfigurationController.h
//  Plexer
//
//  Created by David Owens II on 6/27/09.
//  Copyright 2009 Kiad Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <BWToolkitFramework/BWToolkitFramework.h>
#import "KSUserSettings.h"
#import "KSInfoPanelController.h"

enum KSConfigurationNameOptions {
    kConfigCancel   = -1,
    kConfigOk      = 0,
};


@interface KSConfigurationSettingsController : NSWindowController {
    IBOutlet KSUserSettings* userSettings;
    IBOutlet BWTransparentPopUpButton* configurationsPopUp;
    IBOutlet BWTransparentPopUpButton* keyOptionsPopUp;
    
    IBOutlet NSWindow* preferencesPanel;
    IBOutlet NSWindow* configurationNamePanel;
    IBOutlet NSTableView* applicationsTableView;
    IBOutlet NSTableView* keyOptionsTableView;
    IBOutlet KSInfoPanelController* infoPanelController;
    IBOutlet BWTransparentCheckbox* enableDockHidingCheckbox;
    NSString* configurationName;
    
    IBOutlet id appController;
}

@property (retain) KSUserSettings* userSettings;
@property (readonly) BOOL configurationSelected;
@property (copy) NSString* configurationName;
@property (retain) BWTransparentPopUpButton* configurationsPopUp;
@property (retain) BWTransparentPopUpButton* keyOptionsPopUp;
@property (retain) NSTableView* applicationsTableView;
@property (retain) NSTableView* keyOptionsTableView;

-(IBAction)createNewConfiguration:(id)sender;
-(IBAction)changeSelectedConfiguration:(id)sender;
-(IBAction)renameSelectedConfiguration:(id)sender;
-(IBAction)removeSelectedConfiguration:(id)sender;
-(IBAction)cancelConfiguration:(id)sender;
-(IBAction)okConfiguration:(id)sender;
-(BOOL)validateConfigurationName:(id *)ioValue error:(NSError **)outError;

-(IBAction)changeSaveWindowPositionAndLayoutSetting:(id)sender;
-(IBAction)changeToggleDockHidingSetting:(id)sender;
-(IBAction)changeMoveWindowsNearMenuBarSetting:(id)sender;

-(IBAction)addApplication:(id)sender;
-(IBAction)removeApplication:(id)sender;
-(IBAction)launchApplications:(id)sender;

-(IBAction)changeSelectedKeyOption:(id)sender;
-(IBAction)addKeyOptionKey:(id)sender;
-(IBAction)removeKeyOptionKey:(id)sender;

-(void)loadConfigurations;

-(void)registerApplicationEventHandler;
-(void)unregisterApplicationEventHandler;
-(void)registerKeyboardEventTap;
-(void)unregisterKeyboardEventTap;

@end
