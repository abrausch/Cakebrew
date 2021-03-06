//
//  BPPreferencesWindow.h
//  Cakebrew
//
//  Created by Bruno Philipe on 5/1/14.
//  Copyright (c) 2014 Bruno Philipe. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface BPPreferencesWindow : NSWindow

@property (strong) IBOutlet NSSecureTextField *textField_proxyURL;
@property (strong) IBOutlet NSButton *checkBox_enableProxy;
@property (strong) IBOutlet NSImageView *imageView_validURL;

// Must be called in order to setup content
- (void)didBecomeVisible;

- (IBAction)didUpdateTextField_proxyURL:(id)sender;
- (IBAction)didChangeCheckBox_enableProxy:(id)sender;
- (IBAction)done:(id)sender;

@end
