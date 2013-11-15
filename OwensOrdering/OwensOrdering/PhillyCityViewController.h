//
//  PhillyCityViewController.h
//  OwensOrdering
//
//  Created by Christopher Matthew Balles on 11/6/13.
//  Copyright (c) 2013 Christopher Matthew Balles. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhillyCityViewController : UIViewController <UITextFieldDelegate, UITextViewDelegate>

@property (strong, nonatomic) IBOutlet UISegmentedControl *subSizeSegmentedControl;
@property (strong, nonatomic) IBOutlet UISegmentedControl *meatTypeSegmentedControl;
@property (strong, nonatomic) IBOutlet UITextView *additionalInstructionsTextView;
@property (strong, nonatomic) IBOutlet UITextField *nameTextField;

@property (strong, nonatomic) IBOutlet UISwitch *fajitasSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *cheeseSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *friesSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *mushroomSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *onionsSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *greenPeppersSwitch;

@end
