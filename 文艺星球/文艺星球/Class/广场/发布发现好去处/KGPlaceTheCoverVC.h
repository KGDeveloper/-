//
//  KGPlaceTheCoverVC.h
//  文艺星球
//
//  Created by 文艺星球 on 2018/11/8.
//  Copyright © 2018年 KG丿轩帝. All rights reserved.
//

#import "KGBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface KGPlaceTheCoverVC : KGBaseViewController
/** 发送选择封面 */
@property (nonatomic,copy) void(^sendPlaceTheCover)(UIImage *coverImage);

@end

NS_ASSUME_NONNULL_END
