//
//  YMDetectionObject.h
//  ovuola
//
//  Created by  liangzhun on 2019/9/16.
//  Copyright © 2019 CodeSpace. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMDetectionErrorModel.h"
#import "DetectionCalculateResult.h"
NS_ASSUME_NONNULL_BEGIN

@protocol detectionDelegate <NSObject>

/**
 检测失败

 @param error 检测失败的原因
 */
- (void)detectionFailureWithError:(YMDetectionErrorModel *)error;

/**
 检测成功

 @param result 检测结果
 */
- (void)detectionSuccessedWithResult:(DetectionCalculateResult *)result;

@end

@interface YMDetectionObject : NSObject

@property (nonatomic, assign) id<detectionDelegate> delegate;


/**
 开始检测
 */
- (void)startDetection;

@end

NS_ASSUME_NONNULL_END
