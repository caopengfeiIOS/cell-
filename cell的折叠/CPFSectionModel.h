//
//  CPFSectionModel.h
//  cell的折叠
//
//  Created by hbgl on 16/11/30.
//  Copyright © 2016年 cpf. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CPFSectionModel : NSObject
@property (nonatomic, copy) NSString *sectionTitle;
// 是否是展开的
@property (nonatomic, assign) BOOL isExpanded;

@property (nonatomic, strong) NSMutableArray *cellModels;

@end

@interface CPFCellModel : NSObject

@property (nonatomic, copy) NSString *title;

@end
