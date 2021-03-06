//
//  DownloadedFilesVC.h
//  HWforgeekHub3
//
//  Created by Roman Rybachenko on 21.11.13.
//  Copyright (c) 2013 Roma. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DownloadedFilesVC : UIViewController <UIAlertViewDelegate>
{
    __weak IBOutlet UIScrollView *scrollView;
    __weak IBOutlet UIView *viewOverScrollView;
    
    NSArray *audiotrackNamesArray;
    NSMutableArray *arrayLabelsButtons;
    
    UIAlertView *alertView;
    int butDeleteTag;
}

@end
