//
//  MyContactsWeek5ViewController.m
//  MyContactsWeek5
//
//  Created by Sarah Esunis 3/08/14.
//  Copyright (c) 2014 Sarah Esunis. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyContactsWeek5ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextView *txtData;
@property (strong, nonatomic) IBOutlet UITextField *txtFirst;
@property (strong, nonatomic) IBOutlet UITextField *txtLast;
@property (strong, nonatomic) IBOutlet UITextField *txtEmail;
- (IBAction)btnSave:(id)sender;

@property (strong, nonatomic) IBOutlet UIScrollView *Scrollview;

-(IBAction) doneEditing:(id) sender;
- (IBAction)btnBack:(id)sender;
@property (strong, nonatomic) IBOutlet UIButton *btnBack;
- (IBAction)btnView:(id)sender;
@property (strong, nonatomic) IBOutlet UITextField *txtPhone;
@property (strong, nonatomic) IBOutlet UITextField *txtBirthday;

@end
