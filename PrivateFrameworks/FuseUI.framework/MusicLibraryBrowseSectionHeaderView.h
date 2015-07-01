/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryBrowseSectionHeaderView : UITableViewHeaderFooterView <MusicActionableHeaderViewDelegate> {
    MusicActionableHeaderView *_actionableHeaderView;
    NSString *_backdropGroupName;
    UIColor *_backgroundColorForNonFloatingState;
    <MusicLibraryBrowseSectionHeaderViewDelegate> *_delegate;
    _UIBackdropView *_floatingBackdropView;
    int _hairlineStyleForNonFloatingState;
    UIView *_hairlineView;
    UIColor *_headerTextColorForNonFloatingState;
    float _topContentInset;
}

@property (getter=isActionable, nonatomic) BOOL actionable;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, retain) UIColor *backgroundColorForNonFloatingState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicLibraryBrowseSectionHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int hairlineStyleForNonFloatingState;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *headerText;
@property (nonatomic, retain) UIColor *headerTextColorForNonFloatingState;
@property (readonly) Class superclass;
@property (nonatomic) float topContentInset;

+ (struct { float x1; float x2; })_actionableHeaderMetrics;
+ (float)heightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_setupForCurrentFloatingState;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (id)backdropGroupName;
- (id)backgroundColorForNonFloatingState;
- (void)dealloc;
- (id)delegate;
- (int)hairlineStyleForNonFloatingState;
- (id)headerText;
- (id)headerTextColorForNonFloatingState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isActionable;
- (void)layoutSubviews;
- (void)setActionable:(BOOL)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBackgroundColorForNonFloatingState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFloating:(BOOL)arg1;
- (void)setHairlineStyleForNonFloatingState:(int)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHeaderTextColorForNonFloatingState:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTopContentInset:(float)arg1;
- (float)topContentInset;

@end
