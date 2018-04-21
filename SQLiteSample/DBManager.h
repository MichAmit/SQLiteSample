//
//  DBManager.h
//  SQLiteSample
//
//  Created by Amit Gawai on 17/02/18.
//  Copyright © 2018 Amit Gawai. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DBManager : NSObject

@property (nonatomic, strong) NSMutableArray *arrColumnNames;

@property (nonatomic) int affectedRows;

@property (nonatomic) long long lastInsertedRowID;
-(NSArray *)loadDataFromDB:(NSString *)query;

-(void)executeQuery:(NSString *)query;
-(instancetype)initWithFilename:(NSString *)dbFilename;
@end
