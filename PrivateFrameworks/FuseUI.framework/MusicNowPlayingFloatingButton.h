/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNowPlayingFloatingButton : UIButton {
    MusicNowPlayingAtmosphericEffectView *_effectView;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _glyphImageOffset;
    UIImageView *_glyphImageView;
    BOOL _hideShadow;
    UIImageView *_shadowView;
}

@property (nonatomic, retain) NSString *backdropGroupName;
@property (nonatomic) int effect;
@property (nonatomic, retain) MusicNowPlayingAtmosphericEffectView *effectView;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic) struct UIOffset { float x1; float x2; } glyphImageOffset;
@property (nonatomic, retain) UIImageView *glyphImageView;
@property (nonatomic) BOOL hideShadow;
@property (nonatomic, retain) UIImageView *shadowView;

- (void).cxx_destruct;
- (id)backdropGroupName;
- (int)effect;
- (id)effectView;
- (id)glyphImage;
- (struct UIOffset { float x1; float x2; })glyphImageOffset;
- (id)glyphImageView;
- (BOOL)hideShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setBackdropGroupName:(id)arg1;
- (void)setEffect:(int)arg1;
- (void)setEffectView:(id)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphImageOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setGlyphImageView:(id)arg1;
- (void)setHideShadow:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setShadowView:(id)arg1;
- (id)shadowView;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
