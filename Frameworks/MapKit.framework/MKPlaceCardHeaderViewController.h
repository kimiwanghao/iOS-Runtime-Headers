/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController <MKLocationManagerObserver, MKQuickRouteConfigurableView, MKQuickRouteManagerDelegate, MKQuickRouteTransportTypeFinding, MKStackingViewControllerFixedHeightAware, _MKInfoCardChildViewControllerAnalyticsDelegate, _MKStackViewDelegate> {
    UIButton * _actionButton;
    _MKPlaceActionButtonController * _actionButtonController;
    NSLayoutConstraint * _actionButtonHeightConstraint;
    GEOAutomobileOptions * _automobileOptions;
    NSMutableArray * _bottomContainerConstraints;
    MKPlaceSectionRowView * _bottomContainerView;
    NSLayoutConstraint * _bottomToThirdLineConstraint;
    _MKUILabel * _categoryLabel;
    <MKPlaceCardHeaderViewControllerDelegate> * _delegate;
    _MKUILabel * _distanceLabel;
    BOOL  _distanceOrETAWasFound;
    NSAttributedString * _distanceTextItem;
    id /* block */  _etaStringFormatterBlock;
    _MKPlaceCardHeaderMiddleSectionView * _firstLineForMidContainerView;
    NSMutableArray * _firstLineRichTextArray;
    NSLayoutConstraint * _firstLineToTopConstraint;
    _MKUILabel * _hoursLabel;
    NSNumber * _lastTransportTypeFound;
    <GEOTransitLineItem> * _lineItem;
    NSMutableArray * _middleContainerConstraints;
    MKPlaceSectionRowView * _middleContainerView;
    MKMapItem * _nearbyItem;
    _MKUILabel * _openNowLabel;
    unsigned int  _options;
    <_MKPlaceItem> * _placeItem;
    _MKUILabel * _priceLabel;
    UIButton * _primaryButton;
    NSLayoutConstraint * _primaryButtonHeightConstraint;
    unsigned int  _primaryButtonType;
    _MKQuickRouteManager * _quickRouteAmazingNess;
    BOOL  _resizableViewsDisabled;
    _MKUILabel * _reviewLabel;
    _MKPlaceCardHeaderMiddleSectionView * _secondLineForMidContainerView;
    NSMutableArray * _secondLineRichTextArray;
    NSLayoutConstraint * _secondLineToFirstLineConstraint;
    _MKPlaceCardHeaderMiddleSectionView * _thirdLineForMidContainerView;
    NSMutableArray * _thirdLineRichTextArray;
    NSLayoutConstraint * _thirdLineToSecondLineConstraint;
    _MKUILabel * _titleLabel;
    NSLayoutConstraint * _titleTrailingConstraint;
    NSMutableArray * _topContainerConstraints;
    MKPlaceSectionRowView * _topContainerView;
    MKTransitInfoLabelView * _transitLabel;
    GEOTransitOptions * _transitOptions;
    MNIdealTransportTypeFinder * _transportTypeFinder;
    BOOL  optionForceSmallButtonText;
    BOOL  optionSmallerScreen;
    BOOL  optionTitleHasOwnSection;
}

@property (nonatomic, retain) _MKPlaceActionButtonController *actionButtonController;
@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic) float currentMinimalModeInterpolationFactor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlaceCardHeaderViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <GEOTransitLineItem> *lineItem;
@property (nonatomic, readonly) <_MKPlaceItem> *placeItem;
@property (nonatomic, readonly) UIButton *primaryButton;
@property (nonatomic) unsigned int primaryButtonType;
@property (nonatomic) BOOL resizableViewsDisabled;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEOTransitOptions *transitOptions;

+ (float)minimalModeHeight;

- (void).cxx_destruct;
- (void)_actionSelected:(id)arg1;
- (id)_applyButtonDefaultConfiguration:(id)arg1 selector:(SEL)arg2;
- (BOOL)_areDistanceAndETAInformationAvailable;
- (id)_buttonFont;
- (void)_buttonStateChangedInSiri:(id)arg1;
- (BOOL)_buttonsAreFullWidth;
- (void)_commonInit;
- (void)_configureETADisplayWithTransportType:(unsigned int)arg1 travelTime:(double)arg2 distance:(double)arg3;
- (void)_configureETAForMapItem:(id)arg1;
- (void)_contentSizeDidChange;
- (id)_distanceLabelContainerView;
- (id)_formattedStringForTimeInterval:(double)arg1;
- (BOOL)_isSmallerScreen;
- (id)_primaryButtonColor;
- (void)_primaryButtonSelected:(id)arg1;
- (id)_primaryButtonTextColor;
- (id)_reviewLabelText;
- (void)_setPrimaryButtonTitle:(id)arg1;
- (void)_setUpComponents;
- (void)_setUpPrimaryButton;
- (BOOL)_shouldUpdateETAForMapView:(id)arg1;
- (void)_updateBaselineConstraints;
- (void)_updateDirectionsButton;
- (void)_updateETA;
- (void)_updateETAHandler:(id)arg1;
- (void)_updatePrimaryButton;
- (void)_updateRerouteButton;
- (void)_updateShareLocationButton;
- (BOOL)_willShowDistance;
- (id)actionButtonController;
- (id)automobileOptions;
- (void)configureWithNearbyMapItem:(id)arg1;
- (float)currentMinimalModeInterpolationFactor;
- (void)dealloc;
- (id)delegate;
- (float)extraHeightToReserveInLayout;
- (void)findDirectionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 destinationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 handler:(id /* block */)arg3;
- (void)hideTitle:(BOOL)arg1;
- (id)infoCardChildPossibleActions;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithLineItem:(id)arg1 options:(unsigned int)arg2;
- (id)initWithPlaceItem:(id)arg1 placeHeaderOptions:(unsigned int)arg2;
- (id)labelForAttributedString:(id)arg1;
- (id)lineItem;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)placeItem;
- (id)primaryButton;
- (unsigned int)primaryButtonType;
- (void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(BOOL)arg4;
- (BOOL)quickRouteShouldIncludeTransit;
- (BOOL)quickRouteShouldOnlyUseAutomobile;
- (BOOL)resizableViewsDisabled;
- (void)setActionButtonController:(id)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setCurrentMinimalModeInterpolationFactor:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrimaryButtonType:(unsigned int)arg1;
- (void)setResizableViewsDisabled:(BOOL)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setUpBottomContainerConstraints;
- (void)setUpMiddleContainerConstaints;
- (void)setUpTopContainerConstraints;
- (float)stackView:(id)arg1 distanceBetweenUpperView:(id)arg2 andLowerView:(id)arg3;
- (id)transitOptions;
- (id)transportTypeFinder;
- (void)updateActionButton;
- (void)updateHeaderTitle;
- (void)updateViewConstraints;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
