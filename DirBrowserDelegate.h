//Copyright 2005 Dominic Yu. Some rights reserved.
//This work is licensed under the Creative Commons
//Attribution-NonCommercial-ShareAlike License. To view a copy of this
//license, visit http://creativecommons.org/licenses/by-nc-sa/2.0/ or send
//a letter to Creative Commons, 559 Nathan Abbott Way, Stanford,
//California 94305, USA.

/* DirBrowserDelegate */

#import <Cocoa/Cocoa.h>
#import "DYCreeveyBrowser.h"

@interface DirBrowserDelegate : NSObject <DYCreeveyBrowserDelegate>
- (NSString*)path;
- (void)setPath:(NSString *)s;
@property (assign) IBOutlet NSBrowser *b;
@property (assign) NSMutableSet *revealedDirectories;
@property (atomic, readonly) NSString *currPath;
@end
