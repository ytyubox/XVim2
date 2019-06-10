//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DVTDocumentLocation, NSDictionary, NSImage, NSString, NSURL;
@protocol IDEEditorHistoryControllerItem;

@protocol IDEEditorHistoryControllerItem
- (void)setCachedImage:(NSImage *)arg1 isDark:(BOOL)arg2;
- (BOOL)isEqualToHistoryControllerItem:(id <IDEEditorHistoryControllerItem>)arg1;
@property(nonatomic, readonly) DVTDocumentLocation *documentLocation;
@property(nonatomic, readonly) NSString *domainIdentifier;
@property(nonatomic, readonly) NSDictionary *stateSavingStateDictionary;
@property(nonatomic, readonly) NSURL *documentURL;
@property(nonatomic, readonly) NSString *historyMenuItemTitle;
@property(nonatomic, readonly) NSString *documentExtensionIdentifier;
@end
