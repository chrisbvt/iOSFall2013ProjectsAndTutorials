//
//  FinalViewController.m
//  OwensOrdering
//
//  Created by Christopher Matthew Balles on 11/11/13.
//  Copyright (c) 2013 Christopher Matthew Balles. All rights reserved.
//

#import "FinalViewController.h"

@interface FinalViewController ()

@end

@implementation FinalViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)orderAgainClicked:(UIButton *)sender {
    
    [self.navigationController popToRootViewControllerAnimated:YES];
}

@end
