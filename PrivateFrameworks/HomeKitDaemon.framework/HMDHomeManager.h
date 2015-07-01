/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeManager : NSObject <HMDAccessoryManagerDelegate, HMMessageReceiver, IDSServiceDelegate> {
    NSObject<OS_dispatch_source> *_accessoryFinderTimer;
    HMDAccessoryManager *_accessoryManager;
    BOOL _accountActive;
    BOOL _accountStatusFailedDueToNetworkFailure;
    int _assetUpdatedNotification;
    NSMutableDictionary *_associatedRemotePeers;
    BOOL _backOffOperationInProgress;
    HMDCloudDataSyncManager *_cloudDataSyncManager;
    HMDCloudDataSyncStateFilter *_cloudDataSyncStateFilter;
    unsigned int _cloudOperationRetryCount;
    NSObject<OS_dispatch_source> *_cloudOperationRetryTimer;
    NSObject<OS_dispatch_source> *_cloudUploadTimer;
    unsigned int _generationCounter;
    NSMutableDictionary *_homeNames;
    NSMutableArray *_homes;
    HMDIdentityRegistry *_identityRegistry;
    HMDIDSMessageDispatcher *_idsMessageDispatcher;
    BOOL _ignoreFirstTimeReachabilityChanged;
    BOOL _lastAnswerForShouldCloudSyncData;
    HMMessageDispatcher *_messageDispatcher;
    HMDMessageFilterChain *_msgFilterChain;
    HMDNameValidator *_nameValidator;
    int _networkConnectionAvailable;
    int _newAssetInstalledNotification;
    BOOL _newiCloudAccountAdded;
    NSMutableArray *_pendingAccessoryTransactions;
    NSMutableDictionary *_pendingDataSyncAcks;
    NSMutableDictionary *_pendingRemoteSessions;
    NSMutableArray *_pendingResponsesForAccessoryFinder;
    NSMutableSet *_pendingResponsesForRemoteAccessSetup;
    HMDPowerManager *_powerManager;
    NSUUID *_primaryHomeUUID;
    struct __SCNetworkReachability { } *_reachability;
    BOOL _receivedAccountChangedNotification;
    HMDPersistentStore *_store;
    NSMutableSet *_unassociatedRemotePeers;
    BOOL _uploadHomeDataToCloud;
    BOOL _uploadMetadataToCloud;
    BOOL _uploadToCloudIsPending;
    NSUUID *_uuid;
    NSMutableArray *_uuidsOfRemovedHomes;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *accessoryFinderTimer;
@property (nonatomic, retain) HMDAccessoryManager *accessoryManager;
@property (nonatomic) BOOL accountActive;
@property (nonatomic) BOOL accountStatusFailedDueToNetworkFailure;
@property (nonatomic) int assetUpdatedNotification;
@property (nonatomic, retain) NSMutableDictionary *associatedRemotePeers;
@property (nonatomic) BOOL backOffOperationInProgress;
@property (nonatomic, retain) HMDCloudDataSyncManager *cloudDataSyncManager;
@property (nonatomic, retain) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter;
@property (nonatomic) unsigned int cloudOperationRetryCount;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *cloudOperationRetryTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *cloudUploadTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int generationCounter;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableDictionary *homeNames;
@property (nonatomic, retain) NSMutableArray *homes;
@property (nonatomic, retain) HMDIdentityRegistry *identityRegistry;
@property (nonatomic, retain) HMDIDSMessageDispatcher *idsMessageDispatcher;
@property (nonatomic) BOOL ignoreFirstTimeReachabilityChanged;
@property (nonatomic) BOOL lastAnswerForShouldCloudSyncData;
@property (nonatomic, retain) HMMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMDMessageFilterChain *msgFilterChain;
@property (nonatomic, retain) HMDNameValidator *nameValidator;
@property (nonatomic) int networkConnectionAvailable;
@property (nonatomic) int newAssetInstalledNotification;
@property (nonatomic) BOOL newiCloudAccountAdded;
@property (nonatomic, retain) NSMutableArray *pendingAccessoryTransactions;
@property (nonatomic, retain) NSMutableDictionary *pendingDataSyncAcks;
@property (nonatomic, retain) NSMutableDictionary *pendingRemoteSessions;
@property (nonatomic, retain) NSMutableArray *pendingResponsesForAccessoryFinder;
@property (nonatomic, retain) NSMutableSet *pendingResponsesForRemoteAccessSetup;
@property (nonatomic, retain) HMDPowerManager *powerManager;
@property (nonatomic, retain) NSUUID *primaryHomeUUID;
@property (nonatomic) struct __SCNetworkReachability { }*reachability;
@property (nonatomic) BOOL receivedAccountChangedNotification;
@property (nonatomic, retain) HMDPersistentStore *store;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *unassociatedRemotePeers;
@property (nonatomic) BOOL uploadHomeDataToCloud;
@property (nonatomic) BOOL uploadMetadataToCloud;
@property (nonatomic) BOOL uploadToCloudIsPending;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSMutableArray *uuidsOfRemovedHomes;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)activeAccountIdentifier;
+ (id)getCurrentUserID;
+ (BOOL)shouldDisableCloudDataSync;

- (void).cxx_destruct;
- (void)_acceptHomeInvite:(id)arg1;
- (void)_accessoriesAreLocallyReachableOnTransientDevice:(BOOL)arg1 forHome:(id)arg2;
- (id)_accessoryIdentifiersForHome:(id)arg1;
- (void)_addPairingForRemoteAccessPoint:(id)arg1 destination:(id)arg2 controllerInfo:(id)arg3 forHome:(id)arg4;
- (void)_addPendingDataSyncAcksForUser:(id)arg1 forHome:(id)arg2;
- (void)_autoAddUser:(id)arg1 destination:(id)arg2 forHome:(id)arg3;
- (void)_cancelAccessoryFinderTimer;
- (void)_checkForAccountChanged;
- (void)_checkForRemotePeers;
- (void)_configureHomes:(id)arg1;
- (void)_detectGuestHomesAddedAndRemovedWithCloudHomes:(id)arg1;
- (void)_electRemoteAccessPeerForHome:(id)arg1 retryCount:(unsigned int)arg2;
- (void)_electRemoteGatewayForHomesAfterReachabilityChanges;
- (void)_eraseConfiguration:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)_eraseLocalHomeConfiguration:(BOOL)arg1 deleteMetadata:(BOOL)arg2;
- (void)_eraseLocalMetadata;
- (void)_fetchDataFromCloud;
- (id)_filterAccessories:(id)arg1 inHome:(id)arg2;
- (id)_filterAccessories:(id)arg1 withIdentifiers:(id)arg2;
- (BOOL)_findAnyAccessoryWithIdentities:(id)arg1 inAccessories:(id)arg2;
- (void)_findRemotePeerContainingAccessories:(id)arg1 forHome:(id)arg2;
- (void)_handleAccessHomeInvite:(id)arg1;
- (void)_handleAccountAvailabilityChanged;
- (void)_handleAccountStatusDeterminedWithError:(id)arg1 homeDataRecordExists:(BOOL)arg2 metadataRecordExists:(BOOL)arg3;
- (void)_handleAddRemoteAccessRequest:(id)arg1;
- (void)_handleAreYouAtHome:(id)arg1;
- (void)_handleControllerKeyAvailable;
- (void)_handleDataFromCloudWithHomes:(id)arg1 primaryHome:(id)arg2 accessories:(id)arg3 needConflictResolution:(BOOL)arg4;
- (void)_handleDoYouSeeUnpairedAccessories:(id)arg1;
- (void)_handleHomeDataSync:(id)arg1;
- (void)_handleLogControl:(id)arg1;
- (void)_handleMetadataAssetUpdated;
- (void)_handleMetadataSync:(id)arg1;
- (void)_handlePrimaryAccountDeleted:(id)arg1;
- (void)_handlePrimaryAccountModified:(id)arg1;
- (void)_handleQueryMetadata:(id)arg1;
- (void)_handleQueryVersionInformation:(id)arg1;
- (void)_handleRemoteAccessPeersFoundNotification:(id)arg1;
- (void)_handleRemoteSessionTornDown:(id)arg1;
- (void)_handleRequestAddHome:(id)arg1;
- (void)_handleRequestFetchHomeConfiguration:(id)arg1;
- (void)_handleRequestIsUserUsingHomeKit:(id)arg1;
- (void)_handleRequestRemoveHome:(id)arg1;
- (void)_handleRequestSetPrimaryHome:(id)arg1;
- (void)_handleRequestSubmitAWDMetric:(id)arg1;
- (void)_handleResetConfiguration:(id)arg1;
- (void)_handleResetHome:(id)arg1;
- (void)_handleSetMetadata:(id)arg1;
- (void)_handleUserRemoved:(id)arg1;
- (id)_homeWithName:(id)arg1;
- (id)_homeWithUUID:(id)arg1;
- (void)_mergeHomeDataWithRemoteHomes:(id)arg1 remotePrimaryHome:(id)arg2 remoteAccessories:(id)arg3 needConflictResolution:(BOOL)arg4 idsDataSync:(BOOL)arg5;
- (void)_monitorReachability;
- (void)_postHomesDidUpdateNotification;
- (void)_postiCloudSigninState:(BOOL)arg1;
- (void)_processAnyPendingRequestsForRemoteAccess:(BOOL)arg1;
- (void)_pushChangesForHome:(id)arg1 toRegularUsersOfHome:(id)arg2 electDestinationDevice:(BOOL)arg3;
- (void)_pushChangesForHome:(id)arg1 toRemoteDevicesOnSameAccount:(id)arg2;
- (void)_pushChangesToAllUsersOfAllHomes;
- (void)_pushChangesToCloud;
- (void)_pushChangesToUsers:(id)arg1 forHome:(id)arg2;
- (void)_pushChangesToUsersThatHaveNotAcknowledged;
- (void)_pushMetadata:(id)arg1 toUser:(id)arg2 destination:(id)arg3;
- (void)_pushMetadataChangesToUsers;
- (void)_pushMetadataToCloud;
- (void)_registerForMessages;
- (void)_removeAllUsersOfHome:(id)arg1;
- (void)_removeFromUnassociatedPeers:(id)arg1;
- (void)_removeHome:(id)arg1 withMessage:(id)arg2;
- (void)_removePendingDataSyncAcksForUser:(id)arg1 forHome:(id)arg2;
- (void)_resetCloudOperationRetryCounters;
- (void)_retryCloudOperationWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_saveMetadata:(BOOL)arg1;
- (void)_saveToPersistentStore;
- (void)_saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3;
- (void)_saveWithReason:(id)arg1 postSyncNotification:(BOOL)arg2;
- (void)_sendInviteRequestToUser:(id)arg1 forHome:(id)arg2 confirm:(BOOL)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_sendUserAdded:(id)arg1 destination:(id)arg2 toHome:(id)arg3;
- (void)_sendUserRemoved:(id)arg1 fromHome:(id)arg2 pairingUsername:(id)arg3;
- (void)_startAccessoryFinderTimer;
- (void)_startAccessoryFinderTimerExpired;
- (void)_startCloudOperationRetryWithTimeout:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_startScanningForAccessories:(id)arg1;
- (void)_startTimerToResetCloudOperationRetryCounter;
- (void)_startUploadTimer;
- (void)_stopCloudOperationRetryTimer;
- (void)_stopUploadTimer;
- (void)_suspendXPCConnectionAndMergeRemoteHomes:(id)arg1 remotePrimaryHome:(id)arg2 remoteAccessories:(id)arg3 needConflictResolution:(BOOL)arg4 idsDataSync:(BOOL)arg5 completionHandler:(id /* block */)arg6;
- (void)_teardownRemoteAccessForHome:(id)arg1;
- (void)_updateCloudDataSyncWithAccountState:(BOOL)arg1;
- (void)_uploadHomeConfigToCloud;
- (void)accessoriesAreLocallyReachableOnTransientDevice:(BOOL)arg1 forHome:(id)arg2;
- (id)accessoryFinderTimer;
- (id)accessoryManager;
- (void)accessoryManager:(id)arg1 didAddPairedAccessories:(id)arg2 toBridgeAccessory:(id)arg3;
- (void)accessoryManager:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didRemovePairedAccessories:(id)arg2 fromBridgeAccessory:(id)arg3;
- (BOOL)accountActive;
- (void)accountAvailabilityChanged:(id)arg1;
- (BOOL)accountStatusFailedDueToNetworkFailure;
- (id)addName:(id)arg1 namespace:(id)arg2;
- (int)assetUpdatedNotification;
- (id)associatedRemotePeers;
- (BOOL)backOffOperationInProgress;
- (void)checkAndPushMetadataToUser:(id)arg1 destination:(id)arg2 userInfo:(id)arg3;
- (void)checkTimerTriggersForHomes;
- (id)cloudDataSyncManager;
- (id)cloudDataSyncStateFilter;
- (unsigned int)cloudOperationRetryCount;
- (id)cloudOperationRetryTimer;
- (id)cloudUploadTimer;
- (void)dealloc;
- (BOOL)doesSaveReasonAffectOnlyLocalData:(id)arg1;
- (void)downloadUnavailableAsset:(id)arg1 availableVersion:(unsigned int)arg2 unavailableVersion:(unsigned int)arg3;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (unsigned int)generationCounter;
- (void)handleBackgroundTaskAgentJob:(const char *)arg1 forHomeWithUUID:(id)arg2;
- (id)homeNames;
- (id)homes;
- (id)identifiersOfAccessories:(id)arg1;
- (void)identifiersOfAccessoriesFromLocalAccessoryTransactions:(id*)arg1 accessoriesRemoved:(id*)arg2;
- (id)identityRegistry;
- (id)idsMessageDispatcher;
- (BOOL)ignoreFirstTimeReachabilityChanged;
- (id)initWithMessageDispatcher:(id)arg1 idsMessageDispatcher:(id)arg2 accessoryManager:(id)arg3 messageFilterChain:(id)arg4 homeData:(id)arg5 identityRegistry:(id)arg6 store:(id)arg7;
- (void)installAvailableAsset:(id)arg1 version:(unsigned int)arg2;
- (BOOL)isThisDeviceAdminOfHome:(id)arg1;
- (BOOL)lastAnswerForShouldCloudSyncData;
- (void)loadMetadataFromURL:(id)arg1 identifier:(id)arg2 remoteSource:(BOOL)arg3 responseHandler:(id /* block */)arg4;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgFilterChain;
- (id)nameValidator;
- (int)networkConnectionAvailable;
- (int)newAssetInstalledNotification;
- (BOOL)newiCloudAccountAdded;
- (void)notifyPrimaryHomeUpdated:(id)arg1;
- (void)notifySyncDataChanged;
- (id)pendingAccessoryTransactions;
- (id)pendingDataSyncAcks;
- (id)pendingRemoteSessions;
- (id)pendingResponsesForAccessoryFinder;
- (id)pendingResponsesForRemoteAccessSetup;
- (void)postHomesDidUpdateNotification;
- (id)powerManager;
- (id)primaryHomeUUID;
- (void)pushMetadataToCloud;
- (struct __SCNetworkReachability { }*)reachability;
- (BOOL)receivedAccountChangedNotification;
- (id)remotePeerDeviceAddress:(id)arg1;
- (id)removeName:(id)arg1 namespace:(id)arg2;
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (void)resetMessageFilterChain;
- (void)saveMetadata:(id)arg1 pushChangesToCloud:(BOOL)arg2;
- (void)saveRequestFromHome:(id)arg1 reason:(id)arg2 information:(id)arg3 postSyncNotification:(BOOL)arg4;
- (void)saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3;
- (void)saveWithReason:(id)arg1 postSyncNotification:(BOOL)arg2;
- (void)sendInviteRequestToUser:(id)arg1 forHome:(id)arg2 confirm:(BOOL)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)sendUserAdded:(id)arg1 destination:(id)arg2 toHome:(id)arg3;
- (void)sendUserRemoved:(id)arg1 fromHome:(id)arg2 pairingUsername:(id)arg3;
- (void)setAccessoryFinderTimer:(id)arg1;
- (void)setAccessoryManager:(id)arg1;
- (void)setAccountActive:(BOOL)arg1;
- (void)setAccountStatusFailedDueToNetworkFailure:(BOOL)arg1;
- (void)setAssetUpdatedNotification:(int)arg1;
- (void)setAssociatedRemotePeers:(id)arg1;
- (void)setBackOffOperationInProgress:(BOOL)arg1;
- (void)setCloudDataSyncManager:(id)arg1;
- (void)setCloudDataSyncStateFilter:(id)arg1;
- (void)setCloudOperationRetryCount:(unsigned int)arg1;
- (void)setCloudOperationRetryTimer:(id)arg1;
- (void)setCloudUploadTimer:(id)arg1;
- (void)setGenerationCounter:(unsigned int)arg1;
- (void)setHomeNames:(id)arg1;
- (void)setHomes:(id)arg1;
- (void)setHomesConfigured:(BOOL)arg1;
- (void)setIdentityRegistry:(id)arg1;
- (void)setIdsMessageDispatcher:(id)arg1;
- (void)setIgnoreFirstTimeReachabilityChanged:(BOOL)arg1;
- (void)setLastAnswerForShouldCloudSyncData:(BOOL)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setMsgFilterChain:(id)arg1;
- (void)setNameValidator:(id)arg1;
- (void)setNetworkConnectionAvailable:(int)arg1;
- (void)setNewAssetInstalledNotification:(int)arg1;
- (void)setNewiCloudAccountAdded:(BOOL)arg1;
- (void)setPendingAccessoryTransactions:(id)arg1;
- (void)setPendingDataSyncAcks:(id)arg1;
- (void)setPendingRemoteSessions:(id)arg1;
- (void)setPendingResponsesForAccessoryFinder:(id)arg1;
- (void)setPendingResponsesForRemoteAccessSetup:(id)arg1;
- (void)setPowerManager:(id)arg1;
- (void)setPrimaryHomeUUID:(id)arg1;
- (void)setReachability:(struct __SCNetworkReachability { }*)arg1;
- (void)setReceivedAccountChangedNotification:(BOOL)arg1;
- (void)setStore:(id)arg1;
- (void)setUnassociatedRemotePeers:(id)arg1;
- (void)setUploadHomeDataToCloud:(BOOL)arg1;
- (void)setUploadMetadataToCloud:(BOOL)arg1;
- (void)setUploadToCloudIsPending:(BOOL)arg1;
- (void)setUuid:(id)arg1;
- (void)setUuidsOfRemovedHomes:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)store;
- (id)unassociatedRemotePeers;
- (BOOL)uploadHomeDataToCloud;
- (BOOL)uploadMetadataToCloud;
- (BOOL)uploadToCloudIsPending;
- (id)uuid;
- (id)uuidsOfRemovedHomes;
- (id)workQueue;

@end
