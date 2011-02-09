//
//  GitTest_AppDelegate.h
//  GitTest
//
//  Created by Pieter de Bie on 13-06-08.
//  Copyright __MyCompanyName__ 2008 . All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PBGitRepository.h"

@class PBCloneRepositoryPanel;

@interface ApplicationController : NSObject
{
	IBOutlet NSWindow *window;
	IBOutlet id firstResponder;
	NSPersistentStoreCoordinator *persistentStoreCoordinator;
	NSManagedObjectModel *managedObjectModel;
	NSManagedObjectContext *managedObjectContext;

	PBCloneRepositoryPanel *cloneRepositoryPanel;
	bool started;
}

- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (NSManagedObjectModel *)managedObjectModel;
- (NSManagedObjectContext *)managedObjectContext;

- (IBAction)openPreferencesWindow:(id)sender;
- (IBAction)showAboutPanel:(id)sender;
- (IBAction)showOpenRecentDialog:(id)sender;
- (IBAction)installCliTool:(id)sender;

- (IBAction)saveAction:sender;
- (IBAction)showHelp:(id)sender;
- (IBAction)reportAProblem:(id)sender;

- (IBAction)showCloneRepository:(id)sender;
@end
