/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController <SKUIItemStateCenterObserver, SKUIRedeemResultsViewDelegate> {
    UIButton *_anotherButton;
    BOOL _extendedMessageIsExpanded;
    SKUITextLayout *_extendedMessageTextLayout;
    SKUITextBoxView *_extendedMessageView;
    UIImageView *_headerImageView;
    UIImage *_itemImage;
    SKUIItemStateCenter *_itemStateCenter;
    SKUIGiftItemView *_itemView;
    SKUIRedeemResultMessageView *_messageView;
    NSOperationQueue *_operationQueue;
    SKUIRedeemITunesPassLockup *_passbookLockup;
    SKUIRedeem *_redeem;
    int _redeemCategory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) SKUIRedeem *redeem;
@property (nonatomic) int redeemCategory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_anotherButtonSection;
- (void)_doneAction:(id)arg1;
- (id)_emptySection;
- (void)_extendedMessageAction:(id)arg1;
- (id)_extendedMessageViewSection;
- (id)_headerImageViewSection;
- (id)_item;
- (id)_itemView;
- (id)_itemViewSection;
- (id)_linksSection;
- (id)_messageViewSection;
- (void)_openAction:(id)arg1;
- (id)_passbookLearnMoreSection;
- (void)_passbookLockupAction:(id)arg1;
- (void)_redeemAnotherAction:(id)arg1;
- (void)_reloadResultViewMessage;
- (void)_reloadSections;
- (id)_resultImageViewSection;
- (void)_setHeaderImage:(id)arg1;
- (void)_setItemImage:(id)arg1;
- (float)_tableWidth;
- (void)dealloc;
- (id)initWithRedeem:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)loadView;
- (id)redeem;
- (int)redeemCategory;
- (void)redeemResultsView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setRedeemCategory:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
