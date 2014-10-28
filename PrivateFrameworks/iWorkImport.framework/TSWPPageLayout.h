/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSWPHeaderFooterProvider>, TSWPLayout;

@interface TSWPPageLayout : TSDLayout {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _headerFooterBorderRects[2][3];
    } _headerFooterClipRects[2][3];
    TSWPLayout *_headerFooterLayouts[2][3];
}

@property(readonly) BOOL allowsHeaderFooter;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bodyRect;
@property(readonly) float footerHeight;
@property(readonly) BOOL hasFooters;
@property(readonly) BOOL hasHeaders;
@property(readonly) <TSWPHeaderFooterProvider> * headerFooterProvider;
@property(readonly) BOOL headerFooterProviderValid;
@property(readonly) float headerHeight;

- (id).cxx_construct;
- (BOOL)allowsHeaderFooter;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bodyRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })borderRectForHeaderFooter:(int)arg1 atIndex:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clipRectForHeaderFooter:(int)arg1 atIndex:(int)arg2;
- (float)footerHeight;
- (BOOL)hasFooters;
- (BOOL)hasHeaders;
- (id)headerFooterLayout:(int)arg1 atIndex:(int)arg2;
- (id)headerFooterProvider;
- (BOOL)headerFooterProviderValid;
- (float)headerHeight;
- (void)i_clearHeaderFooterLayouts;
- (void)i_insertValidatedHeaderFooterLayouts;
- (BOOL)i_updateHeaderFooterLayouts;
- (BOOL)isHeaderFooterLayout:(id)arg1;
- (BOOL)p_isHeaderFooter:(int)arg1 editingAtFragmentIndex:(int)arg2;
- (void)p_updateHeaderFooterClipAndBorderRect;
- (void)p_updateHeaderFooterClipAndBorderRects:(int)arg1;
- (BOOL)shouldHeaderFooterBeVisible:(int)arg1;

@end