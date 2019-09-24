//
//  DetectionCalculateResult.h
//  ovuola
//
//  Created by 刘续 on 16/10/15.
//  Copyright © 2016年 CodeSpace. All rights reserved.
//  后台通过计算返回的检测数据

#import <Foundation/Foundation.h>

@interface DetectionCalculateResult : NSObject

@property (nonatomic, assign) long estimateOvulationTime;// 预估的排卵时间

@property (nonatomic, copy) NSString *estimateOvulationTimeDescription;// 预估排卵日的描述

@property (nonatomic, assign) long estimateNextStartTime;// 预估的下次生理周期开始的时间

@property (nonatomic, copy) NSString *physiologicalStage;// 生理阶段

@property (nonatomic, copy) NSString *pregnancyRateDescription;// 易孕率描述

@property (nonatomic, assign) float waterContent;// 佑蜜值

@property (nonatomic, assign) int formula;// 公式 1:A(14日法)

@property (nonatomic, assign) int sick;// 是否身体不适

@property (nonatomic, assign) int rid;// 行Id 删除时候用

@property (nonatomic, assign) int leedingGums;// 牙龈是否出血

@property (nonatomic, assign) double detectionTime;// 检测时间(时间戳)

@property (nonatomic, copy) NSString *createTime;// 创建时间

@property (nonatomic, assign) int detectCount;// 设备的检测次数

@property (nonatomic, assign) BOOL noOvuDetectCountltTen;// 非ovu期的检测次数是否小于10

@property (nonatomic, assign) BOOL ovulation;// Boolean类型 true激增

@property (nonatomic, assign) int valid;// 1-有效数据 2-无效数据

@property (nonatomic, copy) NSString *cervicalMucusStatus;// 宫颈黏液状态

@property (nonatomic, copy) NSString *flag;// 操作标记

@property (nonatomic, copy) NSString *flagDesc;// 操作标记详情

@property (nonatomic, assign) int bloatingBeforeOvu;// 排卵前是否腹胀

@property (nonatomic, assign) double phyLength;// 检测结果对应的生理周期长度

@property (nonatomic, assign) int ovulationType;// 激增类型

@property (nonatomic, copy) NSString *stageDesc;// 周期阶段描述

@property (nonatomic, copy) NSString *cervicalMucusStatusDesc;// 宫颈黏液状况描述

@property (nonatomic, copy) NSString *bloatingBeforeOvuDesc;// 是否腹胀描述

@property (nonatomic, copy) NSString *ovuDesc;// 周期内优孕描述

@property (nonatomic, assign) long startTime; // 例假开始

@property (nonatomic, assign) long endTime; // 例假结束

@property (nonatomic, assign) long firstDayOvuola; // 易排卵期首日

@property (nonatomic, assign) long endDayOvuola;// 易排卵期末日

- (instancetype)initWithDict:(NSDictionary *)dict;

@end
