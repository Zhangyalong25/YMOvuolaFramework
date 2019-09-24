//
//  YMDetectionErrorModel.h
//  ovuola
//
//  Created by  liangzhun on 2019/9/16.
//  Copyright © 2019 CodeSpace. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YMDetectionErrorModel : NSObject

@property (copy, nonatomic) NSString *descriptionError;

@property (nonatomic, assign) int errorCode;//101:手机蓝牙没有打开 102:连接测试设备失败 103 没有获取数据 104 采集头与底座接触不良 105 佑蜜值偏高 106 佑蜜值偏低 107 佑蜜值超出正常范围,建议重新检测 108 获取到的测试数据格式不正确 109 获取蓝牙电量失败! 110 设备电量过低 111 没有搜索到检测设备 112 已与设备断开连接 113 检测数据上传失败 888 未知原因

@end

NS_ASSUME_NONNULL_END
