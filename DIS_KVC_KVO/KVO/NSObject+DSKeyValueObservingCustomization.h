//
//  NSObject+DSKeyValueObservingCustomization.h
//  DIS_KVC_KVO
//
//  Created by renjinkui on 2017/2/25.
//  Copyright © 2017年 JK. All rights reserved.
//

#import <Foundation/Foundation.h>

extern CFMutableDictionaryRef DSKeyValueObservationInfoPerObject;
extern CFMutableDictionaryRef DSKeyValueOldStyleDependenciesByClass;
extern OSSpinLock DSKeyValueOldStyleDependenciesSpinLock;

@interface NSObject (DSKeyValueObservingCustomization)
- (void *)d_observationInfo;
- (void)d_setObservationInfo:(void *)info ;
+ (NSSet<NSString *> *)d_keyPathsForValuesAffectingValueForKey:(NSString *)key;
+ (BOOL)d_automaticallyNotifiesObserversForKey:(NSString *)key;
@end