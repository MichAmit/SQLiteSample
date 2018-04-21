//
//  ViewController.h
//  SQLiteSample
//
//  Created by Amit Gawai on 17/02/18.
//  Copyright © 2018 Amit Gawai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EditInfoViewController.h"
@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,EditInfoViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tblPeople;
- (IBAction)addNewRecord:(id)sender;

@end

