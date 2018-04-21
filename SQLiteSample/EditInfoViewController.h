//
//  EditInfoViewController.h
//  SQLiteSample
//
//  Created by Amit Gawai on 03/03/18.
//  Copyright © 2018 Amit Gawai. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol EditInfoViewControllerDelegate
-(void)editingInfoWasFinished;
@end
@interface EditInfoViewController : UIViewController<UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *txtFirstname;
@property (weak, nonatomic) IBOutlet UITextField *txtLastname;
@property (weak, nonatomic) IBOutlet UITextField *txtAge;
- (IBAction)saveInfo:(id)sender;
@property (nonatomic, strong) id<EditInfoViewControllerDelegate> delegate;
@property (nonatomic) int recordIDToEdit;
@end
