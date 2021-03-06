/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionConfiguration : NSURLSessionConfiguration <NSCopying, NSSecureCoding> {
    NSString *_CTDataConnectionServiceType;
    id _HTTPAdditionalHeaders;
    unsigned int _HTTPCookieAcceptPolicy;
    int _HTTPMaximumConnectionsPerHost;
    BOOL _HTTPShouldSetCookies;
    BOOL _HTTPShouldUsePipelining;
    unsigned int _TCPAdaptiveReadTimeout;
    unsigned int _TCPAdaptiveWriteTimeout;
    int _TLSMaximumSupportedProtocol;
    int _TLSMinimumSupportedProtocol;
    BOOL _allowTCPIOConnectionStreamTask;
    BOOL _allowsCellularAccess;
    BOOL _allowsExpensiveAccess;
    BOOL _allowsIndefiniteConnections;
    BOOL _allowsMultipathTCP;
    BOOL _allowsPowerNapScheduling;
    BOOL _allowsResponseMonitoringDuringBodyTranmission;
    BOOL _allowsRetryForBackgroundDataTasks;
    BOOL _allowsTCPFastOpen;
    BOOL _allowsTLSSessionTickets;
    <NSURLSessionAppleIDContext> *_appleIDContext;
    NSData *_atsContext;
    NSSet *_authenticatorStatusCodes;
    BOOL _backgroundSession;
    BOOL _collectsTimingData;
    NSString *_companionAppBundleIdentifier;
    double _connectionCacheCellPurgeTimeout;
    double _connectionCachePurgeTimeout;
    NSString *_connectionPoolName;
    id _connectionProxyDictionary;
    NSArray *_contentDispHeadEncFallback;
    NSURL *_directoryForDownloadedFiles;
    BOOL _disablesOutOfProcessDirectWiFiUsage;
    BOOL _disablesUseOfProxySession;
    BOOL _disallowsSPDY;
    BOOL _discretionary;
    NSString *_disposition;
    unsigned int _forcedNetworkServiceType;
    BOOL _forcesNewConnections;
    NSString *_identifier;
    BOOL _infersDiscretionaryFromOriginatingClient;
    NSString *_ledBellyServiceIdentifier;
    int _minimumFastLanePriority;
    unsigned int _networkServiceType;
    int _numFastLanes;
    int _numPriorityLevels;
    NSDictionary *_overriddenDelegateOptions;
    BOOL _overridesBackgroundSessionAutoRedirect;
    BOOL _performsEVCertCheck;
    NSHTTPCookieStorage *_phskip_cookieStorage;
    BOOL _phskip_cookieStorageSet;
    NSURLCredentialStorage *_phskip_credStorage;
    BOOL _phskip_credStorageSet;
    struct _CFHSTSPolicy { } *_phskip_hstsStorage;
    BOOL _phskip_hstsStorageSet;
    NSURLCache *_phskip_urlCache;
    BOOL _phskip_urlCacheSet;
    int _pipeliningHighWatermark;
    int _pipeliningLowWatermark;
    BOOL _prefersInfraWiFi;
    BOOL _preventsDirectWiFiAccess;
    BOOL _preventsIdleSleep;
    BOOL _preventsIdleSleepOnceConnected;
    id _protocolClasses;
    BOOL _proxySession;
    unsigned int _requestCachePolicy;
    BOOL _requiresClientToOpenFiles;
    BOOL _requiresPowerPluggedIn;
    BOOL _respectsAllowsCellularAccessForDiscretionaryTasks;
    BOOL _sessionSendsLaunchEvents;
    BOOL _sessionSendsLaunchOnDemandEvents;
    NSString *_sharedContainerIdentifier;
    BOOL _shouldPreserveBackgroundSessionDisposition;
    BOOL _shouldSkipPreferredClientCertificateLookup;
    BOOL _shouldUseExtendedBackgroundIdleMode;
    BOOL _skip_download_unlink;
    NSDictionary *_socketStreamProperties;
    NSData *_sourceApplicationAuditTokenData;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    BOOL _supportsAVAssetDownloads;
    NSString *_tcpConnectionPoolName;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    long long _timingDataOptions;
    BOOL _usePipeliningHeuristics;
    NSString *_watchAppBundleIdentifier;
    NSString *_watchExtensionBundleIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (id)HTTPAdditionalHeaders;
- (unsigned int)HTTPCookieAcceptPolicy;
- (id)HTTPCookieStorage;
- (int)HTTPMaximumConnectionsPerHost;
- (BOOL)HTTPShouldSetCookies;
- (BOOL)HTTPShouldUsePipelining;
- (int)TLSMaximumSupportedProtocol;
- (int)TLSMinimumSupportedProtocol;
- (id)URLCache;
- (id)URLCredentialStorage;
- (id)_CTDataConnectionServiceType;
- (unsigned int)_TCPAdaptiveReadTimeout;
- (unsigned int)_TCPAdaptiveWriteTimeout;
- (BOOL)_allowTCPIOConnectionStreamTask;
- (BOOL)_allowsExpensiveAccess;
- (BOOL)_allowsIndefiniteConnections;
- (BOOL)_allowsMultipathTCP;
- (BOOL)_allowsPowerNapScheduling;
- (BOOL)_allowsResponseMonitoringDuringBodyTranmission;
- (BOOL)_allowsRetryForBackgroundDataTasks;
- (BOOL)_allowsTCPFastOpen;
- (BOOL)_allowsTLSSessionTickets;
- (id)_appleIDContext;
- (id)_atsContext;
- (id)_authenticatorStatusCodes;
- (BOOL)_collectsTimingData;
- (id)_companionAppBundleIdentifier;
- (double)_connectionCacheCellPurgeTimeout;
- (double)_connectionCachePurgeTimeout;
- (id)_connectionPoolName;
- (id)_contentDispHeadEncFallback;
- (void*)_copyAttribute:(struct __CFString { }*)arg1;
- (struct OpaqueCFHTTPCookieStorage { }*)_copyCFCookieStorage;
- (id)_directoryForDownloadedFiles;
- (BOOL)_disablesOutOfProcessDirectWiFiUsage;
- (BOOL)_disablesUseOfProxySession;
- (BOOL)_disallowsSPDY;
- (unsigned int)_forcedNetworkServiceType;
- (BOOL)_forcesNewConnections;
- (BOOL)_infersDiscretionaryFromOriginatingClient;
- (BOOL)_isProxySession;
- (id)_ledBellyServiceIdentifier;
- (id)_overriddenDelegateOptions;
- (BOOL)_overridesBackgroundSessionAutoRedirect;
- (BOOL)_performsEVCertCheck;
- (id)_phskip_cookieStorage;
- (BOOL)_phskip_cookieStorageSet;
- (id)_phskip_credStorage;
- (BOOL)_phskip_credStorageSet;
- (struct _CFHSTSPolicy { }*)_phskip_hstsStorage;
- (BOOL)_phskip_hstsStorageSet;
- (id)_phskip_urlCache;
- (BOOL)_phskip_urlCacheSet;
- (BOOL)_prefersInfraWiFi;
- (BOOL)_preventsDirectWiFiAccess;
- (BOOL)_preventsIdleSleep;
- (BOOL)_preventsIdleSleepOnceConnected;
- (BOOL)_requiresClientToOpenFiles;
- (BOOL)_requiresPowerPluggedIn;
- (BOOL)_respectsAllowsCellularAccessForDiscretionaryTasks;
- (BOOL)_sessionSendsLaunchOnDemandEvents;
- (BOOL)_shouldPreserveBackgroundSessionDisposition;
- (BOOL)_shouldSkipPreferredClientCertificateLookup;
- (id)_socketStreamProperties;
- (id)_sourceApplicationAuditTokenData;
- (id)_sourceApplicationBundleIdentifier;
- (id)_sourceApplicationSecondaryIdentifier;
- (BOOL)_supportsAVAssetDownloads;
- (id)_tcpConnectionPoolName;
- (long long)_timingDataOptions;
- (BOOL)_usePipeliningHeuristics;
- (id)_watchAppBundleIdentifier;
- (id)_watchExtensionBundleIdentifier;
- (BOOL)allowsCellularAccess;
- (id)connectionProxyDictionary;
- (struct _CFHSTSPolicy { }*)copyHSTSPolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)disposition;
- (void)encodeWithCoder:(id)arg1;
- (struct HTTPConnectionCacheLimits { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; })getConnectionCacheLimits;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisposition:(id)arg1;
- (BOOL)isBackgroundSession;
- (BOOL)isDiscretionary;
- (BOOL)isEqual:(id)arg1;
- (int)minimumFastLanePriority;
- (unsigned int)networkServiceType;
- (int)numFastLanes;
- (int)numPriorityLevels;
- (int)pipeliningHighWatermark;
- (int)pipeliningLowWatermark;
- (id)protocolClasses;
- (unsigned int)requestCachePolicy;
- (BOOL)sessionSendsLaunchEvents;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setBackgroundSession:(BOOL)arg1;
- (void)setConnectionProxyDictionary:(id)arg1;
- (void)setDiscretionary:(BOOL)arg1;
- (void)setDisposition:(id)arg1;
- (void)setHSTSPolicy:(struct _CFHSTSPolicy { }*)arg1;
- (void)setHTTPAdditionalHeaders:(id)arg1;
- (void)setHTTPCookieAcceptPolicy:(unsigned int)arg1;
- (void)setHTTPCookieStorage:(id)arg1;
- (void)setHTTPMaximumConnectionsPerHost:(int)arg1;
- (void)setHTTPShouldSetCookies:(BOOL)arg1;
- (void)setHTTPShouldUsePipelining:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMinimumFastLanePriority:(int)arg1;
- (void)setNetworkServiceType:(unsigned int)arg1;
- (void)setNumFastLanes:(int)arg1;
- (void)setNumPriorityLevels:(int)arg1;
- (void)setPipeliningHighWatermark:(int)arg1;
- (void)setPipeliningLowWatermark:(int)arg1;
- (void)setProtocolClasses:(id)arg1;
- (void)setRequestCachePolicy:(unsigned int)arg1;
- (void)setSessionSendsLaunchEvents:(BOOL)arg1;
- (void)setSharedContainerIdentifier:(id)arg1;
- (void)setShouldUseExtendedBackgroundIdleMode:(BOOL)arg1;
- (void)setSkip_download_unlink:(BOOL)arg1;
- (void)setTLSMaximumSupportedProtocol:(int)arg1;
- (void)setTLSMinimumSupportedProtocol:(int)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)setURLCache:(id)arg1;
- (void)setURLCredentialStorage:(id)arg1;
- (void)set_CTDataConnectionServiceType:(id)arg1;
- (void)set_TCPAdaptiveReadTimeout:(unsigned int)arg1;
- (void)set_TCPAdaptiveWriteTimeout:(unsigned int)arg1;
- (void)set_allowTCPIOConnectionStreamTask:(BOOL)arg1;
- (void)set_allowsExpensiveAccess:(BOOL)arg1;
- (void)set_allowsIndefiniteConnections:(BOOL)arg1;
- (void)set_allowsMultipathTCP:(BOOL)arg1;
- (void)set_allowsPowerNapScheduling:(BOOL)arg1;
- (void)set_allowsResponseMonitoringDuringBodyTranmission:(BOOL)arg1;
- (void)set_allowsRetryForBackgroundDataTasks:(BOOL)arg1;
- (void)set_allowsTCPFastOpen:(BOOL)arg1;
- (void)set_allowsTLSSessionTickets:(BOOL)arg1;
- (void)set_appleIDContext:(id)arg1;
- (void)set_atsContext:(id)arg1;
- (void)set_authenticatorStatusCodes:(id)arg1;
- (void)set_collectsTimingData:(BOOL)arg1;
- (void)set_companionAppBundleIdentifier:(id)arg1;
- (void)set_connectionCacheCellPurgeTimeout:(double)arg1;
- (void)set_connectionCachePurgeTimeout:(double)arg1;
- (void)set_connectionPoolName:(id)arg1;
- (void)set_contentDispHeadEncFallback:(id)arg1;
- (void)set_directoryForDownloadedFiles:(id)arg1;
- (void)set_disablesOutOfProcessDirectWiFiUsage:(BOOL)arg1;
- (void)set_disablesUseOfProxySession:(BOOL)arg1;
- (void)set_disallowsSPDY:(BOOL)arg1;
- (void)set_forcedNetworkServiceType:(unsigned int)arg1;
- (void)set_forcesNewConnections:(BOOL)arg1;
- (void)set_infersDiscretionaryFromOriginatingClient:(BOOL)arg1;
- (void)set_ledBellyServiceIdentifier:(id)arg1;
- (void)set_overriddenDelegateOptions:(id)arg1;
- (void)set_overridesBackgroundSessionAutoRedirect:(BOOL)arg1;
- (void)set_performsEVCertCheck:(BOOL)arg1;
- (void)set_phskip_cookieStorage:(id)arg1;
- (void)set_phskip_cookieStorageSet:(BOOL)arg1;
- (void)set_phskip_credStorage:(id)arg1;
- (void)set_phskip_credStorageSet:(BOOL)arg1;
- (void)set_phskip_hstsStorage:(struct _CFHSTSPolicy { }*)arg1;
- (void)set_phskip_hstsStorageSet:(BOOL)arg1;
- (void)set_phskip_urlCache:(id)arg1;
- (void)set_phskip_urlCacheSet:(BOOL)arg1;
- (void)set_prefersInfraWiFi:(BOOL)arg1;
- (void)set_preventsDirectWiFiAccess:(BOOL)arg1;
- (void)set_preventsIdleSleep:(BOOL)arg1;
- (void)set_preventsIdleSleepOnceConnected:(BOOL)arg1;
- (void)set_proxySession:(BOOL)arg1;
- (void)set_requiresClientToOpenFiles:(BOOL)arg1;
- (void)set_requiresPowerPluggedIn:(BOOL)arg1;
- (void)set_respectsAllowsCellularAccessForDiscretionaryTasks:(BOOL)arg1;
- (void)set_sessionSendsLaunchOnDemandEvents:(BOOL)arg1;
- (void)set_shouldPreserveBackgroundSessionDisposition:(BOOL)arg1;
- (void)set_shouldSkipPreferredClientCertificateLookup:(BOOL)arg1;
- (void)set_socketStreamProperties:(id)arg1;
- (void)set_sourceApplicationAuditTokenData:(id)arg1;
- (void)set_sourceApplicationBundleIdentifier:(id)arg1;
- (void)set_sourceApplicationSecondaryIdentifier:(id)arg1;
- (void)set_supportsAVAssetDownloads:(BOOL)arg1;
- (void)set_tcpConnectionPoolName:(id)arg1;
- (void)set_timingDataOptions:(long long)arg1;
- (void)set_usePipeliningHeuristics:(BOOL)arg1;
- (void)set_watchAppBundleIdentifier:(id)arg1;
- (void)set_watchExtensionBundleIdentifier:(id)arg1;
- (id)sharedContainerIdentifier;
- (BOOL)shouldUseExtendedBackgroundIdleMode;
- (BOOL)skip_download_unlink;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;

@end
