//
//  DocumentBrowserViewController.h
//  stack
//
//  Created by Denise Nguyen on 12/27/17.
//  Copyright © 2017 Denise Nguyen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DocumentBrowserViewController : UIDocumentBrowserViewController

- (void)presentDocumentAtURL:(NSURL *)documentURL;

@end
