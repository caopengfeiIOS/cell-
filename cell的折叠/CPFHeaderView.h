//
//  CPFHeaderView.h
//  cell的折叠
//
//  Created by hbgl on 16/11/30.
//  Copyright © 2016年 hbgl. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CPFSectionModel;
typedef void(^CPFHeaderViewExpandCallback)(BOOL isExpanded);
@interface CPFHeaderView : UITableViewHeaderFooterView

@property (nonatomic, strong) CPFSectionModel *model;
@property (nonatomic, copy) CPFHeaderViewExpandCallback expandCallback;
@end
