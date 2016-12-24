/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 10:30:11 PM Eastern Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NCNotificationCustomContentDelegate.h>
#import <libobjc.A.dylib/NCNotificationCustomContent.h>

@protocol NCNotificationCustomContentDelegate, NCNotificationCustomContent;
@class NCNotificationAction, UIViewController, NCNotificationRequest, NSString;

@interface NCLegacyNotificationContentContainerViewController : UIViewController <NCNotificationCustomContentDelegate, NCNotificationCustomContent> {

	BOOL _hasMinimalActions;
	id<NCNotificationCustomContentDelegate> _delegate;
	NCNotificationAction* _presentationSourceAction;
	UIViewController*<NCNotificationCustomContent> _contentViewController;
	NCNotificationRequest* _notificationRequest;

}

@property (assign,nonatomic) BOOL hasMinimalActions;                                                            //@synthesize hasMinimalActions=_hasMinimalActions - In the implementation block
@property (nonatomic,retain) UIViewController*<NCNotificationCustomContent> contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * notificationRequest;                                       //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationCustomContentDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * contentExtensionIdentifier; 
@property (assign,nonatomic,__weak) NCNotificationAction * presentationSourceAction;                            //@synthesize presentationSourceAction=_presentationSourceAction - In the implementation block
-(id)_contentView;
-(void)setDelegate:(id<NCNotificationCustomContentDelegate>)arg1 ;
-(id<NCNotificationCustomContentDelegate>)delegate;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(UIViewController*<NCNotificationCustomContent>)contentViewController;
-(void)setContentViewController:(UIViewController*<NCNotificationCustomContent>)arg1 ;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(void)didReceiveNotificationRequest:(id)arg1 ;
-(unsigned long long)customContentLocation;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 ;
-(void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 ;
-(void)customContentRequestsDismiss:(id)arg1 ;
-(void)customContent:(id)arg1 didLoadAudioAccessoryView:(id)arg2 ;
-(void)customContentDidLoadExtension:(id)arg1 ;
-(void)setNotificationRequest:(NCNotificationRequest *)arg1 ;
-(NCNotificationAction *)presentationSourceAction;
-(void)setPresentationSourceAction:(NCNotificationAction *)arg1 ;
-(void)_loadContentViewControllerForNotificationRequest:(id)arg1 ;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3 ;
-(BOOL)defaultContentHidden;
-(void)loadAudioAccessoryView;
-(void)loadExtension;
-(void)playAudioMessage;
-(BOOL)allowManualDismiss;
-(BOOL)hasMinimalActions;
-(void)setHasMinimalActions:(BOOL)arg1 ;
@end
