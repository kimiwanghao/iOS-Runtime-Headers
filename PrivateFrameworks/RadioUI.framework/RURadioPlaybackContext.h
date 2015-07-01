/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioPlaybackContext : MPPlaybackContext {
    NSArray *_allPreparedAdSlotRadioTracks;
    SSVPlaybackLease *_playbackLease;
    MPAVItem *_prefixItem;
    NSMapTable *_preparedAdSlotByRadioTrack;
    RadioStation *_station;
    RadioStationMatchContext *_stationMatchContext;
    NSArray *_tracks;
    BOOL _transitioningPlaybackModes;
}

@property (nonatomic, readonly, copy) NSArray *allPreparedAdSlotRadioTracks;
@property (nonatomic, retain) SSVPlaybackLease *playbackLease;
@property (nonatomic, retain) MPAVItem *prefixItem;
@property (nonatomic, retain) RadioStation *station;
@property (nonatomic, retain) RadioStationMatchContext *stationMatchContext;
@property (nonatomic, copy) NSArray *tracks;
@property (getter=isTransitioningPlaybackModes, nonatomic) BOOL transitioningPlaybackModes;

+ (Class)queueFeederClass;
+ (void)setDefaultPlaybackLease:(id)arg1;

- (void).cxx_destruct;
- (void)addPreparedAdSlot:(id)arg1 forRadioTrack:(id)arg2;
- (id)allPreparedAdSlotRadioTracks;
- (void)configureWithStationPlaybackMetadata:(id)arg1;
- (id)descriptionComponents;
- (id)init;
- (BOOL)isTransitioningPlaybackModes;
- (id)playbackLease;
- (id)prefixItem;
- (id)preparedAdSlotForRadioTrack:(id)arg1;
- (void)setPlaybackLease:(id)arg1;
- (void)setPrefixItem:(id)arg1;
- (void)setStation:(id)arg1;
- (void)setStationMatchContext:(id)arg1;
- (void)setTracks:(id)arg1;
- (void)setTransitioningPlaybackModes:(BOOL)arg1;
- (id)station;
- (id)stationMatchContext;
- (id)tracks;

@end
