/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryPlaylistsOverviewViewController : UIViewController <MusicActionableHeaderViewDelegate, MusicClientContextConsuming, MusicLibraryBrowseCollectionViewControllerDelegate, MusicNoContentViewDelegate, MusicSwitcherButtonContainerViewDelegate, SKUITabBarItemRootViewController> {
    UISwitch *_alertShowOfflineSwitch;
    MusicClientContext *_clientContext;
    NSDictionary *_curatorsByID;
    UIBarButtonItem *_editButtonItem;
    UIAlertController *_filterAlertController;
    MusicHairlineView *_hairlineView;
    BOOL _hasSubscribedPlaylistsCapability;
    MusicSwitcherButtonContainerView *_librarySwitcherButtonContainerView;
    MusicMatchLoadingViewController *_matchLoadingViewController;
    UIBarButtonItem *_newButtonItem;
    UIViewController *_noContentViewController;
    unsigned int _playlistsConfigurationOptions;
    MusicActionableHeaderView *_playlistsHeaderView;
    MusicLibraryPlaylistsViewConfiguration *_playlistsViewConfiguration;
    UIViewController *_playlistsViewController;
    MusicActionableHeaderView *_recentlyPlayedPlaylistsHeaderView;
    MusicLibraryBrowseCollectionViewController *_recentlyPlayedPlaylistsViewController;
    NSString *_selectedFilter;
    BOOL _selectedFilterIsCuratorID;
    MusicLibraryPlaylistsViewConfiguration *_selectedPlaylistsViewConfiguration;
    BOOL _shouldShowMatchLoadingView;
    BOOL _shouldShowNoContentView;
    MusicVerticalScrollingContainerViewController *_verticalScrollingContainerViewController;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_alertShowOfflineSwitchValueChangedAction:(id)arg1;
- (void)_alertShowPurchasesSwitchValueChangedAction:(id)arg1;
- (float)_calculateHairlineViewHeight;
- (BOOL)_calculateHasSubscribedPlaylistsCapability;
- (void)_cloudUpdateInProgressDidChangeNotification:(id)arg1;
- (void)_configureForSelectedFilter;
- (void)_configureNoContentView:(id)arg1;
- (void)_delayedDismissFilterAlertController;
- (void)_dismissEditSheet;
- (void)_editButtonTapped:(id)arg1;
- (id)_getCurrentSortedPlaylistsOverviewFilters;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handlePlaylistsOverviewFilterAlertControllerDismissal;
- (void)_loadRecentlyPlayedPlaylistsHeaderView;
- (void)_loadRecentlyPlayedPlaylistsViewController;
- (id)_matchLoadingViewController;
- (void)_musicLibraryPlaylistsOverviewViewControllerCommonInitialization;
- (void)_newButtonTapped:(id)arg1;
- (id)_newLibraryPlaylistsViewConfiguration;
- (id)_noContentViewController;
- (void)_playlistsEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_presentCreatePlaylistViewController;
- (void)_recentlyPlayedEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_setSelectedFilter:(id)arg1;
- (id)_sortedBasicPlaylistsOverviewFilters;
- (id)_sortedSubscriberPlaylistsOverviewFilters;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (id)_titleForPlaylistsOverviewFilter:(id)arg1;
- (void)_updateChildViewController;
- (void)_updateCuratorsMapping;
- (void)_updateLibrarySwitcherButtonWithVerticalContainerItemsReload:(BOOL)arg1;
- (void)_updateMatchLoadingViewVisibility;
- (void)_updatePlaylistHeaderHeight;
- (void)_updatePlaylistNoContentViewVisibilityForceReload:(BOOL)arg1;
- (void)_updateRecentlyPlayedViewMoreButton;
- (void)_updateShouldShowMatchLoadingView;
- (void)_updateSizeOfLibrarySwitcherButtonContainerView;
- (void)_updateSizeOfRecentlyPlayedPlaylistsHeaderView;
- (void)_updateSizeOfRecentlyPlayedPlaylistsView;
- (id)_validFilterForFilter:(id)arg1;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (id)clientContext;
- (void)collectionViewFlowLayoutLayoutMetricsWereUpdatedForLibraryBrowseCollectionViewController:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTabBarItem:(id)arg1;
- (void)leadingButtonWasSelectedInContainerView:(id)arg1;
- (BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)noContentViewDidTapButton:(id)arg1;
- (void)setClientContext:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)switcherButtonWasSelectedInContainerView:(id)arg1;
- (void)trailingButtonWasSelectedInContainerView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
