//
//  SqliteMaker.h
//  LPandFP
//
//  Created by wpstarnice on 2017/4/6.
//  Copyright © 2017年 p. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    SqlASCSort = 0,
    SqlDESCSort,
} SqlSortType;

@interface SqliteMaker : NSObject

@property(nonatomic,readonly)NSString *sqlCommand;

- (NSString *)sqlCommand;
- (SqliteMaker *(^)(NSString *table,NSArray<NSString *> *))create;
- (SqliteMaker *(^)(NSString *table,NSDictionary<NSString *,NSString *> *))insert;
- (SqliteMaker *(^)())delete;
- (SqliteMaker *(^)(NSArray<NSString *> *))select;
- (SqliteMaker *(^)(NSString *))from;
- (SqliteMaker *(^)(NSString *))where;
- (SqliteMaker *(^)(NSString *key,SqlSortType type))orderBy;
@end

