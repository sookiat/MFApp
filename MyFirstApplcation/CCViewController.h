//
//  CCViewController.h
//  MyFirstApplcation
//
//  Created by Soo Kiat Ter on 08/03/2014.
//  Copyright (c) 2014 Can Can. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCViewController : UIViewController

@property (strong, nonatomic)
    IBOutlet UILabel *titleLabel;

@property (strong, nonatomic)
    IBOutlet UITextField *textField;

- (IBAction)buttonPressed:(UIButton *)sender;

@end
