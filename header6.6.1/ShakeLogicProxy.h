//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "ShakeMgrExt-Protocol.h"

@class ShakeBeaconLogicController, ShakeCardLogicController, ShakeMusicLogicController, ShakePeopleLogicController, ShakeTvLogicController;
@protocol ShakeLogicProxyDelegate;

@interface ShakeLogicProxy : MMObject <ShakeMgrExt>
{
    int m_logicType;
    id <ShakeLogicProxyDelegate> m_delegate;
    ShakePeopleLogicController *m_shakePeopleLogic;
    ShakeMusicLogicController *m_shakeMusicLogic;
    ShakeBeaconLogicController *m_shakeBeaconLogic;
    ShakeTvLogicController *m_shakeTvLogic;
    ShakeCardLogicController *m_shakeCardLogic;
}

- (void).cxx_destruct;
- (void)updateShakeCardLocation;
- (void)SetShakeList:(id)arg1 andScene:(unsigned int)arg2;
- (void)updateShakeLocation;
- (id)getMsgForState:(unsigned int)arg1;
- (_Bool)isShowBannerView;
- (void)shakeTerminate;
- (void)shakeReset;
- (void)shakeStop;
- (_Bool)shakeReport;
- (int)getShakeLogicType;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)onShakeMusicStorageChanged;
- (void)OnShakeShareCountChanged;
- (void)onShakePageStorageChanged;
- (void)onShakeStatusChanged;
- (void)onShakePeopleStorageChanged;
- (int)GetLogicTypeFromStatus;

@end

