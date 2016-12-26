//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TouchEventGenerator : NSObject
{
    struct __IOHIDEventSystemClient *_ioSystemClient;
    struct {
        int identifier;
        struct CGPoint point;
        double pathMajorRadius;
        double pathPressure;
        unsigned char pathProximity;
    } _activePoints[5];
    unsigned long long _activePointCount;
}

+ (id)sharedTouchEventGenerator;
- (void)moveToPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 duration:(double)arg3;
- (void)liftUp:(struct CGPoint)arg1;
- (void)liftUp:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;
- (void)liftUpAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;
- (void)touchDown:(struct CGPoint)arg1;
- (void)touchDown:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;
- (void)_updateTouchPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;
- (_Bool)_sendHIDEvent:(struct __IOHIDEvent *)arg1;
- (struct __IOHIDEvent *)_createIOHIDEventType:(int)arg1;
- (id)init;

@end

