//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNotificationCenter.h>

@interface NSNotificationCenter (DVTNSNotificationCenterAdditions_MRR)
+ (id)devicePreparationCenter;
- (void)_dvt_removeObserver:(id)arg1;
- (void)_dvt_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)__DVTMainThreadLatencyChecker__addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)dvt_addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)dvt_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)_dvt_postNotification:(id)arg1;
- (id)_dvt_addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)dvt_swizzled_addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)dvt_swizzled_removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)dvt_swizzled_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)dvt_tracker;
@end

