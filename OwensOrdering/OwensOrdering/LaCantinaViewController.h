//
//  LaCantinaViewController.h
//  OwensOrdering
//
//  Created by Christopher Matthew Balles on 11/6/13.
//  Copyright (c) 2013 Christopher Matthew Balles. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LaCantinaViewController : UIViewController <UITextViewDelegate, UITextFieldDelegate>

@property (strong, nonatomic) IBOutlet UITextView *additionalInstructionsTextField;
@property (strong, nonatomic) IBOutlet UISegmentedControl *typeOfItemControl;
@property (strong, nonatomic) IBOutlet UISegmentedControl *typeOfMeatControl;
@property (strong, nonatomic) IBOutlet UISegmentedControl *typeOfRiceControl;
@property (strong, nonatomic) IBOutlet UISegmentedControl *typeofSalsaControl;
@property (strong, nonatomic) IBOutlet UITextField *nameTextField;

@property (strong, nonatomic) IBOutlet UISwitch *cornSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *guacamoleSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *picoDeGalloSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *sourCreamSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *chipsSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *cheeseSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *salsaOnSideSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *quesoSwitch;

- (IBAction)backgroundTouch:(id)sender;


@end
