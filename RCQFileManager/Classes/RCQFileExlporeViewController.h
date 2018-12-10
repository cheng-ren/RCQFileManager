//
//  RCQLookFilesViewController.h
//  RCQSandboxFilesManager
//
//  Created by 任成 on 2018/6/5.
//  Copyright © 2018年 任成. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RCQLookFilesModel.h"
#import "RCQLookFilesTableViewCell.h"
#import "RCQGenerlDefine.h"

@interface RCQFileExlporeViewController : RCQBaseViewController
{
    UIDocumentInteractionController *_documentController; //文档交互控制器
}

@property(nonatomic, strong) NSMutableArray *fileList;

@end
