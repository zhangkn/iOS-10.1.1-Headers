//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol PGPictureInPictureViewControllerContentContainer <NSObject>
- (_Bool)handleDoubleTapGesture;
- (_Bool)handleTapGesture;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(void (^)(void))arg2;
- (void)performStopAnimationWithFinalLayerFrame:(struct CGRect)arg1 animationHandler:(void (^)(void))arg2 completionHandler:(void (^)(void))arg3;
- (void)performStartAnimationWithAnimationHandler:(void (^)(void))arg1 completionHandler:(void (^)(void))arg2;
- (void)prepareStartAnimationWithInitialLayerFrame:(struct CGRect)arg1 completionHandler:(void (^)(void))arg2;
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;
@end

