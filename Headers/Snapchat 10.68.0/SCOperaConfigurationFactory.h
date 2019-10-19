//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaConfigurationFactoryProtocol-Protocol.h"

@class NSString, SCExperimentManager;
@protocol SCLensExplorerLensUnlockerProtocol, SCOperaDeviceOrientationMonitor, SCOperaGlobalConfiguration, SCOperaRemoteVideoPropertiesProvider, SCWebBrowsingURLChecker;

@interface SCOperaConfigurationFactory : NSObject <SCOperaConfigurationFactoryProtocol>
{
    id <SCWebBrowsingURLChecker> _safeBrowsingChecker;
    id <SCOperaRemoteVideoPropertiesProvider> _operaRemoteVideoPropertiesProvider;
    id <SCOperaDeviceOrientationMonitor> _operaDeviceOrientationMonitor;
    id <SCOperaGlobalConfiguration> _operaGlobalConfiguration;
    id <SCLensExplorerLensUnlockerProtocol> _lensExplorerUnlocker;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (id)configurationWithOperaViewModel:(id)arg1;
- (id)initWithSafeBrowsingChecker:(id)arg1 operaRemoteVideoPropertiesProvider:(id)arg2 operaDeviceOrientationMonitor:(id)arg3 operaGlobalConfiguration:(id)arg4 lensExplorerUnlocker:(id)arg5 experimentManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
