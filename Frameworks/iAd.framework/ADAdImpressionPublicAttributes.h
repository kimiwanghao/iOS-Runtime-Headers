/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSArray, NSString, NSURL;

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding> {
    NSString *_accessibilityLabel;
    int _action;
    BOOL _actionLeavesApplication;
    BOOL _actionViewControllerHidesStatusBar;
    unsigned int _actionViewControllerPresentationOrientationMask;
    NSURL *_audioURL;
    NSString *_descriptionForLCD;
    NSString *_headlineForLCD;
    NSURL *_logoImageURL;
    double _minimumIntervalBetweenPresentations;
    int _modalPresentationStyle;
    double _skipThreshold;
    NSURL *_staticImageURL;
    BOOL _unbranded;
    NSString *_uniqueIdentifier;
    NSArray *_videoAssets;
}

@property(copy) NSString * accessibilityLabel;
@property int action;
@property BOOL actionLeavesApplication;
@property BOOL actionViewControllerHidesStatusBar;
@property unsigned int actionViewControllerPresentationOrientationMask;
@property(retain) NSURL * audioURL;
@property(copy) NSString * descriptionForLCD;
@property(copy) NSString * headlineForLCD;
@property(retain) NSURL * logoImageURL;
@property double minimumIntervalBetweenPresentations;
@property int modalPresentationStyle;
@property double skipThreshold;
@property(retain) NSURL * staticImageURL;
@property BOOL unbranded;
@property(copy) NSString * uniqueIdentifier;
@property(retain) NSArray * videoAssets;

+ (BOOL)supportsSecureCoding;

- (id)_actionDescription;
- (id)accessibilityLabel;
- (int)action;
- (BOOL)actionLeavesApplication;
- (BOOL)actionViewControllerHidesStatusBar;
- (unsigned int)actionViewControllerPresentationOrientationMask;
- (id)audioURL;
- (void)dealloc;
- (id)description;
- (id)descriptionForLCD;
- (void)encodeWithCoder:(id)arg1;
- (id)headlineForLCD;
- (id)initWithCoder:(id)arg1;
- (id)logoImageURL;
- (double)minimumIntervalBetweenPresentations;
- (int)modalPresentationStyle;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAction:(int)arg1;
- (void)setActionLeavesApplication:(BOOL)arg1;
- (void)setActionViewControllerHidesStatusBar:(BOOL)arg1;
- (void)setActionViewControllerPresentationOrientationMask:(unsigned int)arg1;
- (void)setAudioURL:(id)arg1;
- (void)setDescriptionForLCD:(id)arg1;
- (void)setHeadlineForLCD:(id)arg1;
- (void)setLogoImageURL:(id)arg1;
- (void)setMinimumIntervalBetweenPresentations:(double)arg1;
- (void)setModalPresentationStyle:(int)arg1;
- (void)setSkipThreshold:(double)arg1;
- (void)setStaticImageURL:(id)arg1;
- (void)setUnbranded:(BOOL)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setVideoAssets:(id)arg1;
- (double)skipThreshold;
- (id)staticImageURL;
- (BOOL)unbranded;
- (id)uniqueIdentifier;
- (id)videoAssets;

@end