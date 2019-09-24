//
//  YMSDKOvuola.h
//  ovuola
//
//  Created by  liangzhun on 2019/9/16.
//  Copyright © 2019 CodeSpace. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YMSDKOvuola : NSObject

+ (instancetype)shareManager;

/**
 注册用户

 @param userid APP用户的ID（不能为空）
 @param period 用户的例假信息（不能为空）
 */
- (void)setUserId:(NSString *)userid UserPeriod:(NSString *)period;

/**
 设置生理信息

 @param physiologicalLength 用户生理周期的平均长度 范围（20 - 90）（天）
 @param menstruationLength 用户例假平均长度 范围（1 - 14）（天）
 */
- (void)setUserPhysiologicalLength:(int)physiologicalLength MenstruationLength:(int)menstruationLength;

@end

NS_ASSUME_NONNULL_END
